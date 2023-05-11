#!/usr/bin/env python3

from constants import *
import re
import glob
import os
import pprint
import logging
import collections
import yaml
import sys

def get_arg_name(name : str):
    return name.upper()

def get_inst_name(name : str):
    return name.upper()

def emit_arg(out, name, arg):
    start = int(arg[1])
    end = int(arg[0])

    assert end >= start
    len = end - start + 1
    assert len >= 1
    offset = start

    out.write("  pub const " + get_arg_name(name) + " : ArgumentSpec = ")
    out.write("ArgumentSpec{")
    out.write('name: "' + name + '", ')
    out.write(f"offset: {offset}u32, length: {len}u32")
    out.write("};\n")

def emit_inst(out, name : str, inst):
    encoding = inst["encoding"] # type: str
    vars = inst["variable_fields"]
    extension = inst["extension"]
    out.write("  pub const " + get_inst_name(name) + " : InstructionTemplate = ")
    out.write("InstructionTemplate {")
    out.write('name : "' + name + '", ')
    out.write('match_pattern : ' + inst["match"] + "u32, ")
    out.write('mask_pattern : ' + inst["mask"] + "u32, ")

    none_name = "None"

    args = inst["variable_fields"]
    while len(args) < 5:
        args.append(none_name)
    op_index = 1
    for arg in args:
        out.write("operand" + str(op_index) + ": ")
        full_name = "Some(&crate::instructions::riscv::args::" + get_arg_name(arg) + ")"
        if arg == none_name:
            full_name = none_name
        out.write(full_name + ", ")
        op_index += 1

    out.write("};\n")

def generate_rust(insts, extensions):
    out = open(os.path.join(os.environ["OUT_DIR"], 'raw_instructions.rs'),'w')

    out.write("pub mod riscv {\n")
    out.write("pub mod args {\n")
    out.write("use crate::instructions::ArgumentSpec;\n")
    for arg in arg_lut:
        emit_arg(out, arg, arg_lut[arg])

    out.write("}\n\n")


    for extension in extensions:
        all_instructions = []
        out.write("pub mod " + extension + " {\n")
        out.write("use crate::instructions::InstructionTemplate;\n")
        num_insts = 0
        for i in insts:
            if extension in insts[i]["extension"]:
                num_insts += 1
                emit_inst(out, i, insts[i])
                name = get_inst_name(i)
                all_instructions.append(f"{name}")

        out.write(f"pub const INSTS : [&InstructionTemplate; {num_insts}] = [\n");
        for inst in all_instructions:
            out.write("  &" + inst + ",\n")

        out.write("];\n")

        out.write("}\n")

    out.write("""
    use crate::instructions::InstructionTemplate;
    pub fn all() -> Vec<&'static InstructionTemplate> {
        let mut result = Vec::<&'static InstructionTemplate>::new();
    """)

    for extension in extensions:
        out.write(" " * 8 + f"result.append(&mut {extension}::INSTS.to_vec());")

    out.write("""
        result
    }
    """)

    out.write("}\n")
    out.close()

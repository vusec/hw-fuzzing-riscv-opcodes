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

def get_inst_name(name : str):
    forbidden = ["and", "or", "xor"]
    if name in forbidden:
        return name + "_"
    return name

def emit_inst(out, name : str, inst):
    encoding = inst["encoding"] # type: str
    vars = inst["variable_fields"]
    extension = inst["extension"]
    out.write("  const InstructionTemplate " + get_inst_name(name) + " = ")
    out.write("InstructionTemplate(")
    out.write('"' + name + '", ')
    out.write(inst["match"] + "U, ")
    out.write(inst["mask"] + "U, ")

    out.write("{")
    for arg in inst["variable_fields"]:
        out.write("Args::" + arg + ", ")
    out.write("}")

    out.write(");\n")

def emit_arg(out, name, arg):
    out.write("  const ArgumentSpec " + name + " = ")
    out.write("ArgumentSpec(")
    out.write('"' + name + '", ')
    out.write(str(arg[0]))
    out.write(", ")
    out.write(str(arg[1]))
    out.write(");\n")

def generate_cpp(insts, extensions):
    out = open('RISC_V_Encoder.h','w')

    out.write("#pragma once\n")
    out.write("#include <array>\n")
    out.write("#include \"CppPrefix.h\"\n")
    out.write("#include <vector>\n\n")

    out.write("namespace RISCV {\n")
    out.write("namespace Args {\n")
    for arg in arg_lut:
        emit_arg(out, arg, arg_lut[arg])

    out.write("} // namespace Args\n\n")

    all_instructions = []

    for extension in extensions:
        out.write("namespace " + extension + " {\n")
        num_insts = 0
        for i in insts:
            if extension in insts[i]["extension"]:
                num_insts += 1
                emit_inst(out, i, insts[i])
                name = get_inst_name(i)
                all_instructions.append(f"{extension}::{name}")
        out.write("  const std::array<InstructionTemplate, " + str(num_insts))
        out.write("> all = {\n")
        for i in insts:
            if extension in insts[i]["extension"]:
                out.write("    " + get_inst_name(i) + ",\n")
        out.write("  };\n")

        out.write("}\n")



    out.write("const std::array<InstructionTemplate, " + str(len(all_instructions)))
    out.write("> all_instructions = {\n")

    for inst in all_instructions:
        out.write("  " + inst + ",\n")
    out.write("};\n")

    out.write("} // namespace RISCV\n")
    out.close()

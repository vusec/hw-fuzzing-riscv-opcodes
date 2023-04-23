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

def emit_inst(out, name : str, inst):
    encoding = inst["encoding"] # type: str
    vars = inst["variable_fields"]
    extension = inst["extension"]
    out.write(name)


def generate_cpp(insts):
    out = open('RISC_V_Encoder.h','w')

    for i in insts:
        emit_inst(out, i, insts[i])

    out.close()
#pragma once

#include <string>
#include <cstddef>

struct Generator {
    struct Variable {
        unsigned offset = 0;
        unsigned len = 0;
    };
    struct Instruction {
        const char *name = nullptr;
        uint32_t fixedBase = 0U;
        Instruction(const char *name, uint32_t f) : name(name), fixedBase(f) {}
    };
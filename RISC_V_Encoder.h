#pragma once
#include <array>
#include "CppPrefix.h"
#include <vector>

namespace RISCV {
namespace Args {
  const ArgumentSpec rd = ArgumentSpec(11, 7);
  const ArgumentSpec rt = ArgumentSpec(19, 15);
  const ArgumentSpec rs1 = ArgumentSpec(19, 15);
  const ArgumentSpec rs2 = ArgumentSpec(24, 20);
  const ArgumentSpec rs3 = ArgumentSpec(31, 27);
  const ArgumentSpec aqrl = ArgumentSpec(26, 25);
  const ArgumentSpec aq = ArgumentSpec(26, 26);
  const ArgumentSpec rl = ArgumentSpec(25, 25);
  const ArgumentSpec fm = ArgumentSpec(31, 28);
  const ArgumentSpec pred = ArgumentSpec(27, 24);
  const ArgumentSpec succ = ArgumentSpec(23, 20);
  const ArgumentSpec rm = ArgumentSpec(14, 12);
  const ArgumentSpec funct3 = ArgumentSpec(14, 12);
  const ArgumentSpec funct2 = ArgumentSpec(26, 25);
  const ArgumentSpec imm20 = ArgumentSpec(31, 12);
  const ArgumentSpec jimm20 = ArgumentSpec(31, 12);
  const ArgumentSpec imm12 = ArgumentSpec(31, 20);
  const ArgumentSpec csr = ArgumentSpec(31, 20);
  const ArgumentSpec imm12hi = ArgumentSpec(31, 25);
  const ArgumentSpec bimm12hi = ArgumentSpec(31, 25);
  const ArgumentSpec imm12lo = ArgumentSpec(11, 7);
  const ArgumentSpec bimm12lo = ArgumentSpec(11, 7);
  const ArgumentSpec zimm = ArgumentSpec(19, 15);
  const ArgumentSpec shamtq = ArgumentSpec(26, 20);
  const ArgumentSpec shamtw = ArgumentSpec(24, 20);
  const ArgumentSpec shamtw4 = ArgumentSpec(23, 20);
  const ArgumentSpec shamtd = ArgumentSpec(25, 20);
  const ArgumentSpec bs = ArgumentSpec(31, 30);
  const ArgumentSpec rnum = ArgumentSpec(23, 20);
  const ArgumentSpec rc = ArgumentSpec(29, 25);
  const ArgumentSpec imm2 = ArgumentSpec(21, 20);
  const ArgumentSpec imm3 = ArgumentSpec(22, 20);
  const ArgumentSpec imm4 = ArgumentSpec(23, 20);
  const ArgumentSpec imm5 = ArgumentSpec(24, 20);
  const ArgumentSpec imm6 = ArgumentSpec(25, 20);
  const ArgumentSpec opcode = ArgumentSpec(6, 0);
  const ArgumentSpec funct7 = ArgumentSpec(31, 25);
  const ArgumentSpec vd = ArgumentSpec(11, 7);
  const ArgumentSpec vs3 = ArgumentSpec(11, 7);
  const ArgumentSpec vs1 = ArgumentSpec(19, 15);
  const ArgumentSpec vs2 = ArgumentSpec(24, 20);
  const ArgumentSpec vm = ArgumentSpec(25, 25);
  const ArgumentSpec wd = ArgumentSpec(26, 26);
  const ArgumentSpec amoop = ArgumentSpec(31, 27);
  const ArgumentSpec nf = ArgumentSpec(31, 29);
  const ArgumentSpec simm5 = ArgumentSpec(19, 15);
  const ArgumentSpec zimm10 = ArgumentSpec(29, 20);
  const ArgumentSpec zimm11 = ArgumentSpec(30, 20);
  const ArgumentSpec c_nzuimm10 = ArgumentSpec(12, 5);
  const ArgumentSpec c_uimm7lo = ArgumentSpec(6, 5);
  const ArgumentSpec c_uimm7hi = ArgumentSpec(12, 10);
  const ArgumentSpec c_uimm8lo = ArgumentSpec(6, 5);
  const ArgumentSpec c_uimm8hi = ArgumentSpec(12, 10);
  const ArgumentSpec c_uimm9lo = ArgumentSpec(6, 5);
  const ArgumentSpec c_uimm9hi = ArgumentSpec(12, 10);
  const ArgumentSpec c_nzimm6lo = ArgumentSpec(6, 2);
  const ArgumentSpec c_nzimm6hi = ArgumentSpec(12, 12);
  const ArgumentSpec c_imm6lo = ArgumentSpec(6, 2);
  const ArgumentSpec c_imm6hi = ArgumentSpec(12, 12);
  const ArgumentSpec c_nzimm10hi = ArgumentSpec(12, 12);
  const ArgumentSpec c_nzimm10lo = ArgumentSpec(6, 2);
  const ArgumentSpec c_nzimm18hi = ArgumentSpec(12, 12);
  const ArgumentSpec c_nzimm18lo = ArgumentSpec(6, 2);
  const ArgumentSpec c_imm12 = ArgumentSpec(12, 2);
  const ArgumentSpec c_bimm9lo = ArgumentSpec(6, 2);
  const ArgumentSpec c_bimm9hi = ArgumentSpec(12, 10);
  const ArgumentSpec c_nzuimm5 = ArgumentSpec(6, 2);
  const ArgumentSpec c_nzuimm6lo = ArgumentSpec(6, 2);
  const ArgumentSpec c_nzuimm6hi = ArgumentSpec(12, 12);
  const ArgumentSpec c_uimm8splo = ArgumentSpec(6, 2);
  const ArgumentSpec c_uimm8sphi = ArgumentSpec(12, 12);
  const ArgumentSpec c_uimm8sp_s = ArgumentSpec(12, 7);
  const ArgumentSpec c_uimm10splo = ArgumentSpec(6, 2);
  const ArgumentSpec c_uimm10sphi = ArgumentSpec(12, 12);
  const ArgumentSpec c_uimm9splo = ArgumentSpec(6, 2);
  const ArgumentSpec c_uimm9sphi = ArgumentSpec(12, 12);
  const ArgumentSpec c_uimm10sp_s = ArgumentSpec(12, 7);
  const ArgumentSpec c_uimm9sp_s = ArgumentSpec(12, 7);
  const ArgumentSpec c_uimm2 = ArgumentSpec(6, 5);
  const ArgumentSpec c_uimm1 = ArgumentSpec(5, 5);
  const ArgumentSpec c_rlist = ArgumentSpec(7, 4);
  const ArgumentSpec c_spimm = ArgumentSpec(3, 2);
  const ArgumentSpec c_index = ArgumentSpec(9, 2);
  const ArgumentSpec rs1_p = ArgumentSpec(9, 7);
  const ArgumentSpec rs2_p = ArgumentSpec(4, 2);
  const ArgumentSpec rd_p = ArgumentSpec(4, 2);
  const ArgumentSpec rd_rs1_n0 = ArgumentSpec(11, 7);
  const ArgumentSpec rd_rs1_p = ArgumentSpec(9, 7);
  const ArgumentSpec rd_rs1 = ArgumentSpec(11, 7);
  const ArgumentSpec rd_n2 = ArgumentSpec(11, 7);
  const ArgumentSpec rd_n0 = ArgumentSpec(11, 7);
  const ArgumentSpec rs1_n0 = ArgumentSpec(11, 7);
  const ArgumentSpec c_rs2_n0 = ArgumentSpec(6, 2);
  const ArgumentSpec c_rs1_n0 = ArgumentSpec(11, 7);
  const ArgumentSpec c_rs2 = ArgumentSpec(6, 2);
  const ArgumentSpec c_sreg1 = ArgumentSpec(9, 7);
  const ArgumentSpec c_sreg2 = ArgumentSpec(4, 2);
} // namespace Args

namespace rv_a {
  const InstructionTemplate amoadd_w = InstructionTemplate("amoadd_w", 0x202fU, {Args::rd, Args::rs1, Args::rs2, Args::aq, Args::rl, });
  const InstructionTemplate amoand_w = InstructionTemplate("amoand_w", 0x6000202fU, {Args::rd, Args::rs1, Args::rs2, Args::aq, Args::rl, });
  const InstructionTemplate amomax_w = InstructionTemplate("amomax_w", 0xa000202fU, {Args::rd, Args::rs1, Args::rs2, Args::aq, Args::rl, });
  const InstructionTemplate amomaxu_w = InstructionTemplate("amomaxu_w", 0xe000202fU, {Args::rd, Args::rs1, Args::rs2, Args::aq, Args::rl, });
  const InstructionTemplate amomin_w = InstructionTemplate("amomin_w", 0x8000202fU, {Args::rd, Args::rs1, Args::rs2, Args::aq, Args::rl, });
  const InstructionTemplate amominu_w = InstructionTemplate("amominu_w", 0xc000202fU, {Args::rd, Args::rs1, Args::rs2, Args::aq, Args::rl, });
  const InstructionTemplate amoor_w = InstructionTemplate("amoor_w", 0x4000202fU, {Args::rd, Args::rs1, Args::rs2, Args::aq, Args::rl, });
  const InstructionTemplate amoswap_w = InstructionTemplate("amoswap_w", 0x800202fU, {Args::rd, Args::rs1, Args::rs2, Args::aq, Args::rl, });
  const InstructionTemplate amoxor_w = InstructionTemplate("amoxor_w", 0x2000202fU, {Args::rd, Args::rs1, Args::rs2, Args::aq, Args::rl, });
  const InstructionTemplate lr_w = InstructionTemplate("lr_w", 0x1000202fU, {Args::rd, Args::rs1, Args::aq, Args::rl, });
  const InstructionTemplate sc_w = InstructionTemplate("sc_w", 0x1800202fU, {Args::rd, Args::rs1, Args::rs2, Args::aq, Args::rl, });
  const std::array<InstructionTemplate, 11> all = {
    amoadd_w,
    amoand_w,
    amomax_w,
    amomaxu_w,
    amomin_w,
    amominu_w,
    amoor_w,
    amoswap_w,
    amoxor_w,
    lr_w,
    sc_w,
  };
}
namespace rv_c {
  const InstructionTemplate c_add = InstructionTemplate("c_add", 0x9002U, {Args::rd_rs1, Args::c_rs2_n0, });
  const InstructionTemplate c_addi = InstructionTemplate("c_addi", 0x1U, {Args::rd_rs1_n0, Args::c_nzimm6lo, Args::c_nzimm6hi, });
  const InstructionTemplate c_addi16sp = InstructionTemplate("c_addi16sp", 0x6101U, {Args::c_nzimm10hi, Args::c_nzimm10lo, });
  const InstructionTemplate c_addi4spn = InstructionTemplate("c_addi4spn", 0x0U, {Args::rd_p, Args::c_nzuimm10, });
  const InstructionTemplate c_and = InstructionTemplate("c_and", 0x8c61U, {Args::rd_rs1_p, Args::rs2_p, });
  const InstructionTemplate c_andi = InstructionTemplate("c_andi", 0x8801U, {Args::rd_rs1_p, Args::c_imm6hi, Args::c_imm6lo, });
  const InstructionTemplate c_beqz = InstructionTemplate("c_beqz", 0xc001U, {Args::rs1_p, Args::c_bimm9lo, Args::c_bimm9hi, });
  const InstructionTemplate c_bnez = InstructionTemplate("c_bnez", 0xe001U, {Args::rs1_p, Args::c_bimm9lo, Args::c_bimm9hi, });
  const InstructionTemplate c_ebreak = InstructionTemplate("c_ebreak", 0x9002U, {});
  const InstructionTemplate c_j = InstructionTemplate("c_j", 0xa001U, {Args::c_imm12, });
  const InstructionTemplate c_jalr = InstructionTemplate("c_jalr", 0x9002U, {Args::c_rs1_n0, });
  const InstructionTemplate c_jr = InstructionTemplate("c_jr", 0x8002U, {Args::rs1_n0, });
  const InstructionTemplate c_li = InstructionTemplate("c_li", 0x4001U, {Args::rd, Args::c_imm6lo, Args::c_imm6hi, });
  const InstructionTemplate c_lui = InstructionTemplate("c_lui", 0x6001U, {Args::rd_n2, Args::c_nzimm18hi, Args::c_nzimm18lo, });
  const InstructionTemplate c_lw = InstructionTemplate("c_lw", 0x4000U, {Args::rd_p, Args::rs1_p, Args::c_uimm7lo, Args::c_uimm7hi, });
  const InstructionTemplate c_lwsp = InstructionTemplate("c_lwsp", 0x4002U, {Args::rd_n0, Args::c_uimm8sphi, Args::c_uimm8splo, });
  const InstructionTemplate c_mv = InstructionTemplate("c_mv", 0x8002U, {Args::rd, Args::c_rs2_n0, });
  const InstructionTemplate c_nop = InstructionTemplate("c_nop", 0x1U, {Args::c_nzimm6hi, Args::c_nzimm6lo, });
  const InstructionTemplate c_or = InstructionTemplate("c_or", 0x8c41U, {Args::rd_rs1_p, Args::rs2_p, });
  const InstructionTemplate c_sub = InstructionTemplate("c_sub", 0x8c01U, {Args::rd_rs1_p, Args::rs2_p, });
  const InstructionTemplate c_sw = InstructionTemplate("c_sw", 0xc000U, {Args::rs1_p, Args::rs2_p, Args::c_uimm7lo, Args::c_uimm7hi, });
  const InstructionTemplate c_swsp = InstructionTemplate("c_swsp", 0xc002U, {Args::c_rs2, Args::c_uimm8sp_s, });
  const InstructionTemplate c_xor = InstructionTemplate("c_xor", 0x8c21U, {Args::rd_rs1_p, Args::rs2_p, });
  const std::array<InstructionTemplate, 23> all = {
    c_add,
    c_addi,
    c_addi16sp,
    c_addi4spn,
    c_and,
    c_andi,
    c_beqz,
    c_bnez,
    c_ebreak,
    c_j,
    c_jalr,
    c_jr,
    c_li,
    c_lui,
    c_lw,
    c_lwsp,
    c_mv,
    c_nop,
    c_or,
    c_sub,
    c_sw,
    c_swsp,
    c_xor,
  };
}
namespace rv_c_d {
  const InstructionTemplate c_fld = InstructionTemplate("c_fld", 0x2000U, {Args::rd_p, Args::rs1_p, Args::c_uimm8lo, Args::c_uimm8hi, });
  const InstructionTemplate c_fldsp = InstructionTemplate("c_fldsp", 0x2002U, {Args::rd, Args::c_uimm9sphi, Args::c_uimm9splo, });
  const InstructionTemplate c_fsd = InstructionTemplate("c_fsd", 0xa000U, {Args::rs1_p, Args::rs2_p, Args::c_uimm8lo, Args::c_uimm8hi, });
  const InstructionTemplate c_fsdsp = InstructionTemplate("c_fsdsp", 0xa002U, {Args::c_rs2, Args::c_uimm9sp_s, });
  const std::array<InstructionTemplate, 4> all = {
    c_fld,
    c_fldsp,
    c_fsd,
    c_fsdsp,
  };
}
namespace rv_d {
  const InstructionTemplate fadd_d = InstructionTemplate("fadd_d", 0x2000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const InstructionTemplate fclass_d = InstructionTemplate("fclass_d", 0xe2001053U, {Args::rd, Args::rs1, });
  const InstructionTemplate fcvt_d_s = InstructionTemplate("fcvt_d_s", 0x42000053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fcvt_d_w = InstructionTemplate("fcvt_d_w", 0xd2000053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fcvt_d_wu = InstructionTemplate("fcvt_d_wu", 0xd2100053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fcvt_s_d = InstructionTemplate("fcvt_s_d", 0x40100053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fcvt_w_d = InstructionTemplate("fcvt_w_d", 0xc2000053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fcvt_wu_d = InstructionTemplate("fcvt_wu_d", 0xc2100053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fdiv_d = InstructionTemplate("fdiv_d", 0x1a000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const InstructionTemplate feq_d = InstructionTemplate("feq_d", 0xa2002053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate fld = InstructionTemplate("fld", 0x3007U, {Args::rd, Args::rs1, Args::imm12, });
  const InstructionTemplate fle_d = InstructionTemplate("fle_d", 0xa2000053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate flt_d = InstructionTemplate("flt_d", 0xa2001053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate fmadd_d = InstructionTemplate("fmadd_d", 0x2000043U, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const InstructionTemplate fmax_d = InstructionTemplate("fmax_d", 0x2a001053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate fmin_d = InstructionTemplate("fmin_d", 0x2a000053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate fmsub_d = InstructionTemplate("fmsub_d", 0x2000047U, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const InstructionTemplate fmul_d = InstructionTemplate("fmul_d", 0x12000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const InstructionTemplate fnmadd_d = InstructionTemplate("fnmadd_d", 0x200004fU, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const InstructionTemplate fnmsub_d = InstructionTemplate("fnmsub_d", 0x200004bU, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const InstructionTemplate fsd = InstructionTemplate("fsd", 0x3027U, {Args::imm12hi, Args::rs1, Args::rs2, Args::imm12lo, });
  const InstructionTemplate fsgnj_d = InstructionTemplate("fsgnj_d", 0x22000053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate fsgnjn_d = InstructionTemplate("fsgnjn_d", 0x22001053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate fsgnjx_d = InstructionTemplate("fsgnjx_d", 0x22002053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate fsqrt_d = InstructionTemplate("fsqrt_d", 0x5a000053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fsub_d = InstructionTemplate("fsub_d", 0xa000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const std::array<InstructionTemplate, 26> all = {
    fadd_d,
    fclass_d,
    fcvt_d_s,
    fcvt_d_w,
    fcvt_d_wu,
    fcvt_s_d,
    fcvt_w_d,
    fcvt_wu_d,
    fdiv_d,
    feq_d,
    fld,
    fle_d,
    flt_d,
    fmadd_d,
    fmax_d,
    fmin_d,
    fmsub_d,
    fmul_d,
    fnmadd_d,
    fnmsub_d,
    fsd,
    fsgnj_d,
    fsgnjn_d,
    fsgnjx_d,
    fsqrt_d,
    fsub_d,
  };
}
namespace rv_d_zfh {
  const InstructionTemplate fcvt_d_h = InstructionTemplate("fcvt_d_h", 0x42200053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fcvt_h_d = InstructionTemplate("fcvt_h_d", 0x44100053U, {Args::rd, Args::rs1, Args::rm, });
  const std::array<InstructionTemplate, 2> all = {
    fcvt_d_h,
    fcvt_h_d,
  };
}
namespace rv_f {
  const InstructionTemplate fadd_s = InstructionTemplate("fadd_s", 0x53U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const InstructionTemplate fclass_s = InstructionTemplate("fclass_s", 0xe0001053U, {Args::rd, Args::rs1, });
  const InstructionTemplate fcvt_s_w = InstructionTemplate("fcvt_s_w", 0xd0000053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fcvt_s_wu = InstructionTemplate("fcvt_s_wu", 0xd0100053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fcvt_w_s = InstructionTemplate("fcvt_w_s", 0xc0000053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fcvt_wu_s = InstructionTemplate("fcvt_wu_s", 0xc0100053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fdiv_s = InstructionTemplate("fdiv_s", 0x18000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const InstructionTemplate feq_s = InstructionTemplate("feq_s", 0xa0002053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate fle_s = InstructionTemplate("fle_s", 0xa0000053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate flt_s = InstructionTemplate("flt_s", 0xa0001053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate flw = InstructionTemplate("flw", 0x2007U, {Args::rd, Args::rs1, Args::imm12, });
  const InstructionTemplate fmadd_s = InstructionTemplate("fmadd_s", 0x43U, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const InstructionTemplate fmax_s = InstructionTemplate("fmax_s", 0x28001053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate fmin_s = InstructionTemplate("fmin_s", 0x28000053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate fmsub_s = InstructionTemplate("fmsub_s", 0x47U, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const InstructionTemplate fmul_s = InstructionTemplate("fmul_s", 0x10000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const InstructionTemplate fmv_w_x = InstructionTemplate("fmv_w_x", 0xf0000053U, {Args::rd, Args::rs1, });
  const InstructionTemplate fmv_x_w = InstructionTemplate("fmv_x_w", 0xe0000053U, {Args::rd, Args::rs1, });
  const InstructionTemplate fnmadd_s = InstructionTemplate("fnmadd_s", 0x4fU, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const InstructionTemplate fnmsub_s = InstructionTemplate("fnmsub_s", 0x4bU, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const InstructionTemplate fsgnj_s = InstructionTemplate("fsgnj_s", 0x20000053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate fsgnjn_s = InstructionTemplate("fsgnjn_s", 0x20001053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate fsgnjx_s = InstructionTemplate("fsgnjx_s", 0x20002053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate fsqrt_s = InstructionTemplate("fsqrt_s", 0x58000053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fsub_s = InstructionTemplate("fsub_s", 0x8000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const InstructionTemplate fsw = InstructionTemplate("fsw", 0x2027U, {Args::imm12hi, Args::rs1, Args::rs2, Args::imm12lo, });
  const std::array<InstructionTemplate, 26> all = {
    fadd_s,
    fclass_s,
    fcvt_s_w,
    fcvt_s_wu,
    fcvt_w_s,
    fcvt_wu_s,
    fdiv_s,
    feq_s,
    fle_s,
    flt_s,
    flw,
    fmadd_s,
    fmax_s,
    fmin_s,
    fmsub_s,
    fmul_s,
    fmv_w_x,
    fmv_x_w,
    fnmadd_s,
    fnmsub_s,
    fsgnj_s,
    fsgnjn_s,
    fsgnjx_s,
    fsqrt_s,
    fsub_s,
    fsw,
  };
}
namespace rv_h {
  const InstructionTemplate hfence_gvma = InstructionTemplate("hfence_gvma", 0x62000073U, {Args::rs1, Args::rs2, });
  const InstructionTemplate hfence_vvma = InstructionTemplate("hfence_vvma", 0x22000073U, {Args::rs1, Args::rs2, });
  const InstructionTemplate hlv_b = InstructionTemplate("hlv_b", 0x60004073U, {Args::rd, Args::rs1, });
  const InstructionTemplate hlv_bu = InstructionTemplate("hlv_bu", 0x60104073U, {Args::rd, Args::rs1, });
  const InstructionTemplate hlv_h = InstructionTemplate("hlv_h", 0x64004073U, {Args::rd, Args::rs1, });
  const InstructionTemplate hlv_hu = InstructionTemplate("hlv_hu", 0x64104073U, {Args::rd, Args::rs1, });
  const InstructionTemplate hlv_w = InstructionTemplate("hlv_w", 0x68004073U, {Args::rd, Args::rs1, });
  const InstructionTemplate hlvx_hu = InstructionTemplate("hlvx_hu", 0x64304073U, {Args::rd, Args::rs1, });
  const InstructionTemplate hlvx_wu = InstructionTemplate("hlvx_wu", 0x68304073U, {Args::rd, Args::rs1, });
  const InstructionTemplate hsv_b = InstructionTemplate("hsv_b", 0x62004073U, {Args::rs1, Args::rs2, });
  const InstructionTemplate hsv_h = InstructionTemplate("hsv_h", 0x66004073U, {Args::rs1, Args::rs2, });
  const InstructionTemplate hsv_w = InstructionTemplate("hsv_w", 0x6a004073U, {Args::rs1, Args::rs2, });
  const std::array<InstructionTemplate, 12> all = {
    hfence_gvma,
    hfence_vvma,
    hlv_b,
    hlv_bu,
    hlv_h,
    hlv_hu,
    hlv_w,
    hlvx_hu,
    hlvx_wu,
    hsv_b,
    hsv_h,
    hsv_w,
  };
}
namespace rv_i {
  const InstructionTemplate add = InstructionTemplate("add", 0x33U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate addi = InstructionTemplate("addi", 0x13U, {Args::rd, Args::rs1, Args::imm12, });
  const InstructionTemplate and_ = InstructionTemplate("and", 0x7033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate andi = InstructionTemplate("andi", 0x7013U, {Args::rd, Args::rs1, Args::imm12, });
  const InstructionTemplate auipc = InstructionTemplate("auipc", 0x17U, {Args::rd, Args::imm20, });
  const InstructionTemplate beq = InstructionTemplate("beq", 0x63U, {Args::bimm12hi, Args::rs1, Args::rs2, Args::bimm12lo, });
  const InstructionTemplate bge = InstructionTemplate("bge", 0x5063U, {Args::bimm12hi, Args::rs1, Args::rs2, Args::bimm12lo, });
  const InstructionTemplate bgeu = InstructionTemplate("bgeu", 0x7063U, {Args::bimm12hi, Args::rs1, Args::rs2, Args::bimm12lo, });
  const InstructionTemplate blt = InstructionTemplate("blt", 0x4063U, {Args::bimm12hi, Args::rs1, Args::rs2, Args::bimm12lo, });
  const InstructionTemplate bltu = InstructionTemplate("bltu", 0x6063U, {Args::bimm12hi, Args::rs1, Args::rs2, Args::bimm12lo, });
  const InstructionTemplate bne = InstructionTemplate("bne", 0x1063U, {Args::bimm12hi, Args::rs1, Args::rs2, Args::bimm12lo, });
  const InstructionTemplate ebreak = InstructionTemplate("ebreak", 0x100073U, {});
  const InstructionTemplate ecall = InstructionTemplate("ecall", 0x73U, {});
  const InstructionTemplate fence = InstructionTemplate("fence", 0xfU, {Args::fm, Args::pred, Args::succ, Args::rs1, Args::rd, });
  const InstructionTemplate jal = InstructionTemplate("jal", 0x6fU, {Args::rd, Args::jimm20, });
  const InstructionTemplate jalr = InstructionTemplate("jalr", 0x67U, {Args::rd, Args::rs1, Args::imm12, });
  const InstructionTemplate lb = InstructionTemplate("lb", 0x3U, {Args::rd, Args::rs1, Args::imm12, });
  const InstructionTemplate lbu = InstructionTemplate("lbu", 0x4003U, {Args::rd, Args::rs1, Args::imm12, });
  const InstructionTemplate lh = InstructionTemplate("lh", 0x1003U, {Args::rd, Args::rs1, Args::imm12, });
  const InstructionTemplate lhu = InstructionTemplate("lhu", 0x5003U, {Args::rd, Args::rs1, Args::imm12, });
  const InstructionTemplate lui = InstructionTemplate("lui", 0x37U, {Args::rd, Args::imm20, });
  const InstructionTemplate lw = InstructionTemplate("lw", 0x2003U, {Args::rd, Args::rs1, Args::imm12, });
  const InstructionTemplate or_ = InstructionTemplate("or", 0x6033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate ori = InstructionTemplate("ori", 0x6013U, {Args::rd, Args::rs1, Args::imm12, });
  const InstructionTemplate sb = InstructionTemplate("sb", 0x23U, {Args::imm12hi, Args::rs1, Args::rs2, Args::imm12lo, });
  const InstructionTemplate sh = InstructionTemplate("sh", 0x1023U, {Args::imm12hi, Args::rs1, Args::rs2, Args::imm12lo, });
  const InstructionTemplate sll = InstructionTemplate("sll", 0x1033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate slt = InstructionTemplate("slt", 0x2033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate slti = InstructionTemplate("slti", 0x2013U, {Args::rd, Args::rs1, Args::imm12, });
  const InstructionTemplate sltiu = InstructionTemplate("sltiu", 0x3013U, {Args::rd, Args::rs1, Args::imm12, });
  const InstructionTemplate sltu = InstructionTemplate("sltu", 0x3033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate sra = InstructionTemplate("sra", 0x40005033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate srl = InstructionTemplate("srl", 0x5033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate sub = InstructionTemplate("sub", 0x40000033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate sw = InstructionTemplate("sw", 0x2023U, {Args::imm12hi, Args::rs1, Args::rs2, Args::imm12lo, });
  const InstructionTemplate xor_ = InstructionTemplate("xor", 0x4033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate xori = InstructionTemplate("xori", 0x4013U, {Args::rd, Args::rs1, Args::imm12, });
  const std::array<InstructionTemplate, 37> all = {
    add,
    addi,
    and_,
    andi,
    auipc,
    beq,
    bge,
    bgeu,
    blt,
    bltu,
    bne,
    ebreak,
    ecall,
    fence,
    jal,
    jalr,
    lb,
    lbu,
    lh,
    lhu,
    lui,
    lw,
    or_,
    ori,
    sb,
    sh,
    sll,
    slt,
    slti,
    sltiu,
    sltu,
    sra,
    srl,
    sub,
    sw,
    xor_,
    xori,
  };
}
namespace rv_m {
  const InstructionTemplate div = InstructionTemplate("div", 0x2004033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate divu = InstructionTemplate("divu", 0x2005033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate mul = InstructionTemplate("mul", 0x2000033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate mulh = InstructionTemplate("mulh", 0x2001033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate mulhsu = InstructionTemplate("mulhsu", 0x2002033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate mulhu = InstructionTemplate("mulhu", 0x2003033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate rem = InstructionTemplate("rem", 0x2006033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate remu = InstructionTemplate("remu", 0x2007033U, {Args::rd, Args::rs1, Args::rs2, });
  const std::array<InstructionTemplate, 8> all = {
    div,
    divu,
    mul,
    mulh,
    mulhsu,
    mulhu,
    rem,
    remu,
  };
}
namespace rv_q {
  const InstructionTemplate fadd_q = InstructionTemplate("fadd_q", 0x6000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const InstructionTemplate fclass_q = InstructionTemplate("fclass_q", 0xe6001053U, {Args::rd, Args::rs1, });
  const InstructionTemplate fcvt_d_q = InstructionTemplate("fcvt_d_q", 0x42300053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fcvt_q_d = InstructionTemplate("fcvt_q_d", 0x46100053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fcvt_q_s = InstructionTemplate("fcvt_q_s", 0x46000053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fcvt_q_w = InstructionTemplate("fcvt_q_w", 0xd6000053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fcvt_q_wu = InstructionTemplate("fcvt_q_wu", 0xd6100053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fcvt_s_q = InstructionTemplate("fcvt_s_q", 0x40300053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fcvt_w_q = InstructionTemplate("fcvt_w_q", 0xc6000053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fcvt_wu_q = InstructionTemplate("fcvt_wu_q", 0xc6100053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fdiv_q = InstructionTemplate("fdiv_q", 0x1e000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const InstructionTemplate feq_q = InstructionTemplate("feq_q", 0xa6002053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate fle_q = InstructionTemplate("fle_q", 0xa6000053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate flq = InstructionTemplate("flq", 0x4007U, {Args::rd, Args::rs1, Args::imm12, });
  const InstructionTemplate flt_q = InstructionTemplate("flt_q", 0xa6001053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate fmadd_q = InstructionTemplate("fmadd_q", 0x6000043U, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const InstructionTemplate fmax_q = InstructionTemplate("fmax_q", 0x2e001053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate fmin_q = InstructionTemplate("fmin_q", 0x2e000053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate fmsub_q = InstructionTemplate("fmsub_q", 0x6000047U, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const InstructionTemplate fmul_q = InstructionTemplate("fmul_q", 0x16000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const InstructionTemplate fnmadd_q = InstructionTemplate("fnmadd_q", 0x600004fU, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const InstructionTemplate fnmsub_q = InstructionTemplate("fnmsub_q", 0x600004bU, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const InstructionTemplate fsgnj_q = InstructionTemplate("fsgnj_q", 0x26000053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate fsgnjn_q = InstructionTemplate("fsgnjn_q", 0x26001053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate fsgnjx_q = InstructionTemplate("fsgnjx_q", 0x26002053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate fsq = InstructionTemplate("fsq", 0x4027U, {Args::imm12hi, Args::rs1, Args::rs2, Args::imm12lo, });
  const InstructionTemplate fsqrt_q = InstructionTemplate("fsqrt_q", 0x5e000053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fsub_q = InstructionTemplate("fsub_q", 0xe000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const std::array<InstructionTemplate, 28> all = {
    fadd_q,
    fclass_q,
    fcvt_d_q,
    fcvt_q_d,
    fcvt_q_s,
    fcvt_q_w,
    fcvt_q_wu,
    fcvt_s_q,
    fcvt_w_q,
    fcvt_wu_q,
    fdiv_q,
    feq_q,
    fle_q,
    flq,
    flt_q,
    fmadd_q,
    fmax_q,
    fmin_q,
    fmsub_q,
    fmul_q,
    fnmadd_q,
    fnmsub_q,
    fsgnj_q,
    fsgnjn_q,
    fsgnjx_q,
    fsq,
    fsqrt_q,
    fsub_q,
  };
}
namespace rv_q_zfh {
  const InstructionTemplate fcvt_h_q = InstructionTemplate("fcvt_h_q", 0x44300053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fcvt_q_h = InstructionTemplate("fcvt_q_h", 0x46200053U, {Args::rd, Args::rs1, Args::rm, });
  const std::array<InstructionTemplate, 2> all = {
    fcvt_h_q,
    fcvt_q_h,
  };
}
namespace rv_s {
  const InstructionTemplate sfence_vma = InstructionTemplate("sfence_vma", 0x12000073U, {Args::rs1, Args::rs2, });
  const InstructionTemplate sret = InstructionTemplate("sret", 0x10200073U, {});
  const std::array<InstructionTemplate, 2> all = {
    sfence_vma,
    sret,
  };
}
namespace rv_svinval {
  const InstructionTemplate hinval_gvma = InstructionTemplate("hinval_gvma", 0x66000073U, {Args::rs1, Args::rs2, });
  const InstructionTemplate hinval_vvma = InstructionTemplate("hinval_vvma", 0x26000073U, {Args::rs1, Args::rs2, });
  const InstructionTemplate sfence_inval_ir = InstructionTemplate("sfence_inval_ir", 0x18100073U, {});
  const InstructionTemplate sfence_w_inval = InstructionTemplate("sfence_w_inval", 0x18000073U, {});
  const InstructionTemplate sinval_vma = InstructionTemplate("sinval_vma", 0x16000073U, {Args::rs1, Args::rs2, });
  const std::array<InstructionTemplate, 5> all = {
    hinval_gvma,
    hinval_vvma,
    sfence_inval_ir,
    sfence_w_inval,
    sinval_vma,
  };
}
namespace rv_system {
  const InstructionTemplate dret = InstructionTemplate("dret", 0x7b200073U, {});
  const InstructionTemplate mret = InstructionTemplate("mret", 0x30200073U, {});
  const InstructionTemplate wfi = InstructionTemplate("wfi", 0x10500073U, {});
  const std::array<InstructionTemplate, 3> all = {
    dret,
    mret,
    wfi,
  };
}
namespace rv_v {
  const InstructionTemplate vaadd_vv = InstructionTemplate("vaadd_vv", 0x24002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vaadd_vx = InstructionTemplate("vaadd_vx", 0x24006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vaaddu_vv = InstructionTemplate("vaaddu_vv", 0x20002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vaaddu_vx = InstructionTemplate("vaaddu_vx", 0x20006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vadc_vim = InstructionTemplate("vadc_vim", 0x40003057U, {Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vadc_vvm = InstructionTemplate("vadc_vvm", 0x40000057U, {Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vadc_vxm = InstructionTemplate("vadc_vxm", 0x40004057U, {Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vadd_vi = InstructionTemplate("vadd_vi", 0x3057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vadd_vv = InstructionTemplate("vadd_vv", 0x57U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vadd_vx = InstructionTemplate("vadd_vx", 0x4057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamoaddei16_v = InstructionTemplate("vamoaddei16_v", 0x502fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamoaddei32_v = InstructionTemplate("vamoaddei32_v", 0x602fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamoaddei64_v = InstructionTemplate("vamoaddei64_v", 0x702fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamoaddei8_v = InstructionTemplate("vamoaddei8_v", 0x2fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamoandei16_v = InstructionTemplate("vamoandei16_v", 0x6000502fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamoandei32_v = InstructionTemplate("vamoandei32_v", 0x6000602fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamoandei64_v = InstructionTemplate("vamoandei64_v", 0x6000702fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamoandei8_v = InstructionTemplate("vamoandei8_v", 0x6000002fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamomaxei16_v = InstructionTemplate("vamomaxei16_v", 0xa000502fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamomaxei32_v = InstructionTemplate("vamomaxei32_v", 0xa000602fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamomaxei64_v = InstructionTemplate("vamomaxei64_v", 0xa000702fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamomaxei8_v = InstructionTemplate("vamomaxei8_v", 0xa000002fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamomaxuei16_v = InstructionTemplate("vamomaxuei16_v", 0xe000502fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamomaxuei32_v = InstructionTemplate("vamomaxuei32_v", 0xe000602fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamomaxuei64_v = InstructionTemplate("vamomaxuei64_v", 0xe000702fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamomaxuei8_v = InstructionTemplate("vamomaxuei8_v", 0xe000002fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamominei16_v = InstructionTemplate("vamominei16_v", 0x8000502fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamominei32_v = InstructionTemplate("vamominei32_v", 0x8000602fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamominei64_v = InstructionTemplate("vamominei64_v", 0x8000702fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamominei8_v = InstructionTemplate("vamominei8_v", 0x8000002fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamominuei16_v = InstructionTemplate("vamominuei16_v", 0xc000502fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamominuei32_v = InstructionTemplate("vamominuei32_v", 0xc000602fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamominuei64_v = InstructionTemplate("vamominuei64_v", 0xc000702fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamominuei8_v = InstructionTemplate("vamominuei8_v", 0xc000002fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamoorei16_v = InstructionTemplate("vamoorei16_v", 0x4000502fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamoorei32_v = InstructionTemplate("vamoorei32_v", 0x4000602fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamoorei64_v = InstructionTemplate("vamoorei64_v", 0x4000702fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamoorei8_v = InstructionTemplate("vamoorei8_v", 0x4000002fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamoswapei16_v = InstructionTemplate("vamoswapei16_v", 0x800502fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamoswapei32_v = InstructionTemplate("vamoswapei32_v", 0x800602fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamoswapei64_v = InstructionTemplate("vamoswapei64_v", 0x800702fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamoswapei8_v = InstructionTemplate("vamoswapei8_v", 0x800002fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamoxorei16_v = InstructionTemplate("vamoxorei16_v", 0x2000502fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamoxorei32_v = InstructionTemplate("vamoxorei32_v", 0x2000602fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamoxorei64_v = InstructionTemplate("vamoxorei64_v", 0x2000702fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vamoxorei8_v = InstructionTemplate("vamoxorei8_v", 0x2000002fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vand_vi = InstructionTemplate("vand_vi", 0x24003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vand_vv = InstructionTemplate("vand_vv", 0x24000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vand_vx = InstructionTemplate("vand_vx", 0x24004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vasub_vv = InstructionTemplate("vasub_vv", 0x2c002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vasub_vx = InstructionTemplate("vasub_vx", 0x2c006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vasubu_vv = InstructionTemplate("vasubu_vv", 0x28002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vasubu_vx = InstructionTemplate("vasubu_vx", 0x28006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vcompress_vm = InstructionTemplate("vcompress_vm", 0x5e002057U, {Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vcpop_m = InstructionTemplate("vcpop_m", 0x40082057U, {Args::vm, Args::vs2, Args::rd, });
  const InstructionTemplate vdiv_vv = InstructionTemplate("vdiv_vv", 0x84002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vdiv_vx = InstructionTemplate("vdiv_vx", 0x84006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vdivu_vv = InstructionTemplate("vdivu_vv", 0x80002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vdivu_vx = InstructionTemplate("vdivu_vx", 0x80006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfadd_vf = InstructionTemplate("vfadd_vf", 0x5057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfadd_vv = InstructionTemplate("vfadd_vv", 0x1057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfclass_v = InstructionTemplate("vfclass_v", 0x4c081057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vfcvt_f_x_v = InstructionTemplate("vfcvt_f_x_v", 0x48019057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vfcvt_f_xu_v = InstructionTemplate("vfcvt_f_xu_v", 0x48011057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vfcvt_rtz_x_f_v = InstructionTemplate("vfcvt_rtz_x_f_v", 0x48039057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vfcvt_rtz_xu_f_v = InstructionTemplate("vfcvt_rtz_xu_f_v", 0x48031057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vfcvt_x_f_v = InstructionTemplate("vfcvt_x_f_v", 0x48009057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vfcvt_xu_f_v = InstructionTemplate("vfcvt_xu_f_v", 0x48001057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vfdiv_vf = InstructionTemplate("vfdiv_vf", 0x80005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfdiv_vv = InstructionTemplate("vfdiv_vv", 0x80001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfirst_m = InstructionTemplate("vfirst_m", 0x4008a057U, {Args::vm, Args::vs2, Args::rd, });
  const InstructionTemplate vfmacc_vf = InstructionTemplate("vfmacc_vf", 0xb0005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfmacc_vv = InstructionTemplate("vfmacc_vv", 0xb0001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfmadd_vf = InstructionTemplate("vfmadd_vf", 0xa0005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfmadd_vv = InstructionTemplate("vfmadd_vv", 0xa0001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfmax_vf = InstructionTemplate("vfmax_vf", 0x18005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfmax_vv = InstructionTemplate("vfmax_vv", 0x18001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfmerge_vfm = InstructionTemplate("vfmerge_vfm", 0x5c005057U, {Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfmin_vf = InstructionTemplate("vfmin_vf", 0x10005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfmin_vv = InstructionTemplate("vfmin_vv", 0x10001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfmsac_vf = InstructionTemplate("vfmsac_vf", 0xb8005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfmsac_vv = InstructionTemplate("vfmsac_vv", 0xb8001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfmsub_vf = InstructionTemplate("vfmsub_vf", 0xa8005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfmsub_vv = InstructionTemplate("vfmsub_vv", 0xa8001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfmul_vf = InstructionTemplate("vfmul_vf", 0x90005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfmul_vv = InstructionTemplate("vfmul_vv", 0x90001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfmv_f_s = InstructionTemplate("vfmv_f_s", 0x42001057U, {Args::vs2, Args::rd, });
  const InstructionTemplate vfmv_s_f = InstructionTemplate("vfmv_s_f", 0x42005057U, {Args::rs1, Args::vd, });
  const InstructionTemplate vfmv_v_f = InstructionTemplate("vfmv_v_f", 0x5e005057U, {Args::rs1, Args::vd, });
  const InstructionTemplate vfncvt_f_f_w = InstructionTemplate("vfncvt_f_f_w", 0x480a1057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vfncvt_f_x_w = InstructionTemplate("vfncvt_f_x_w", 0x48099057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vfncvt_f_xu_w = InstructionTemplate("vfncvt_f_xu_w", 0x48091057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vfncvt_rod_f_f_w = InstructionTemplate("vfncvt_rod_f_f_w", 0x480a9057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vfncvt_rtz_x_f_w = InstructionTemplate("vfncvt_rtz_x_f_w", 0x480b9057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vfncvt_rtz_xu_f_w = InstructionTemplate("vfncvt_rtz_xu_f_w", 0x480b1057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vfncvt_x_f_w = InstructionTemplate("vfncvt_x_f_w", 0x48089057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vfncvt_xu_f_w = InstructionTemplate("vfncvt_xu_f_w", 0x48081057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vfnmacc_vf = InstructionTemplate("vfnmacc_vf", 0xb4005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfnmacc_vv = InstructionTemplate("vfnmacc_vv", 0xb4001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfnmadd_vf = InstructionTemplate("vfnmadd_vf", 0xa4005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfnmadd_vv = InstructionTemplate("vfnmadd_vv", 0xa4001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfnmsac_vf = InstructionTemplate("vfnmsac_vf", 0xbc005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfnmsac_vv = InstructionTemplate("vfnmsac_vv", 0xbc001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfnmsub_vf = InstructionTemplate("vfnmsub_vf", 0xac005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfnmsub_vv = InstructionTemplate("vfnmsub_vv", 0xac001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfrdiv_vf = InstructionTemplate("vfrdiv_vf", 0x84005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfrec7_v = InstructionTemplate("vfrec7_v", 0x4c029057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vfredmax_vs = InstructionTemplate("vfredmax_vs", 0x1c001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfredmin_vs = InstructionTemplate("vfredmin_vs", 0x14001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfredosum_vs = InstructionTemplate("vfredosum_vs", 0xc001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfredusum_vs = InstructionTemplate("vfredusum_vs", 0x4001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfrsqrt7_v = InstructionTemplate("vfrsqrt7_v", 0x4c021057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vfrsub_vf = InstructionTemplate("vfrsub_vf", 0x9c005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfsgnj_vf = InstructionTemplate("vfsgnj_vf", 0x20005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfsgnj_vv = InstructionTemplate("vfsgnj_vv", 0x20001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfsgnjn_vf = InstructionTemplate("vfsgnjn_vf", 0x24005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfsgnjn_vv = InstructionTemplate("vfsgnjn_vv", 0x24001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfsgnjx_vf = InstructionTemplate("vfsgnjx_vf", 0x28005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfsgnjx_vv = InstructionTemplate("vfsgnjx_vv", 0x28001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfslide1down_vf = InstructionTemplate("vfslide1down_vf", 0x3c005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfslide1up_vf = InstructionTemplate("vfslide1up_vf", 0x38005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfsqrt_v = InstructionTemplate("vfsqrt_v", 0x4c001057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vfsub_vf = InstructionTemplate("vfsub_vf", 0x8005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfsub_vv = InstructionTemplate("vfsub_vv", 0x8001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfwadd_vf = InstructionTemplate("vfwadd_vf", 0xc0005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfwadd_vv = InstructionTemplate("vfwadd_vv", 0xc0001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfwadd_wf = InstructionTemplate("vfwadd_wf", 0xd0005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfwadd_wv = InstructionTemplate("vfwadd_wv", 0xd0001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfwcvt_f_f_v = InstructionTemplate("vfwcvt_f_f_v", 0x48061057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vfwcvt_f_x_v = InstructionTemplate("vfwcvt_f_x_v", 0x48059057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vfwcvt_f_xu_v = InstructionTemplate("vfwcvt_f_xu_v", 0x48051057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vfwcvt_rtz_x_f_v = InstructionTemplate("vfwcvt_rtz_x_f_v", 0x48079057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vfwcvt_rtz_xu_f_v = InstructionTemplate("vfwcvt_rtz_xu_f_v", 0x48071057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vfwcvt_x_f_v = InstructionTemplate("vfwcvt_x_f_v", 0x48049057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vfwcvt_xu_f_v = InstructionTemplate("vfwcvt_xu_f_v", 0x48041057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vfwmacc_vf = InstructionTemplate("vfwmacc_vf", 0xf0005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfwmacc_vv = InstructionTemplate("vfwmacc_vv", 0xf0001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfwmsac_vf = InstructionTemplate("vfwmsac_vf", 0xf8005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfwmsac_vv = InstructionTemplate("vfwmsac_vv", 0xf8001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfwmul_vf = InstructionTemplate("vfwmul_vf", 0xe0005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfwmul_vv = InstructionTemplate("vfwmul_vv", 0xe0001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfwnmacc_vf = InstructionTemplate("vfwnmacc_vf", 0xf4005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfwnmacc_vv = InstructionTemplate("vfwnmacc_vv", 0xf4001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfwnmsac_vf = InstructionTemplate("vfwnmsac_vf", 0xfc005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfwnmsac_vv = InstructionTemplate("vfwnmsac_vv", 0xfc001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfwredosum_vs = InstructionTemplate("vfwredosum_vs", 0xcc001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfwredusum_vs = InstructionTemplate("vfwredusum_vs", 0xc4001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfwsub_vf = InstructionTemplate("vfwsub_vf", 0xc8005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfwsub_vv = InstructionTemplate("vfwsub_vv", 0xc8001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vfwsub_wf = InstructionTemplate("vfwsub_wf", 0xd8005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vfwsub_wv = InstructionTemplate("vfwsub_wv", 0xd8001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vid_v = InstructionTemplate("vid_v", 0x5008a057U, {Args::vm, Args::vd, });
  const InstructionTemplate viota_m = InstructionTemplate("viota_m", 0x50082057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vl1re16_v = InstructionTemplate("vl1re16_v", 0x2805007U, {Args::rs1, Args::vd, });
  const InstructionTemplate vl1re32_v = InstructionTemplate("vl1re32_v", 0x2806007U, {Args::rs1, Args::vd, });
  const InstructionTemplate vl1re64_v = InstructionTemplate("vl1re64_v", 0x2807007U, {Args::rs1, Args::vd, });
  const InstructionTemplate vl1re8_v = InstructionTemplate("vl1re8_v", 0x2800007U, {Args::rs1, Args::vd, });
  const InstructionTemplate vl2re16_v = InstructionTemplate("vl2re16_v", 0x22805007U, {Args::rs1, Args::vd, });
  const InstructionTemplate vl2re32_v = InstructionTemplate("vl2re32_v", 0x22806007U, {Args::rs1, Args::vd, });
  const InstructionTemplate vl2re64_v = InstructionTemplate("vl2re64_v", 0x22807007U, {Args::rs1, Args::vd, });
  const InstructionTemplate vl2re8_v = InstructionTemplate("vl2re8_v", 0x22800007U, {Args::rs1, Args::vd, });
  const InstructionTemplate vl4re16_v = InstructionTemplate("vl4re16_v", 0x62805007U, {Args::rs1, Args::vd, });
  const InstructionTemplate vl4re32_v = InstructionTemplate("vl4re32_v", 0x62806007U, {Args::rs1, Args::vd, });
  const InstructionTemplate vl4re64_v = InstructionTemplate("vl4re64_v", 0x62807007U, {Args::rs1, Args::vd, });
  const InstructionTemplate vl4re8_v = InstructionTemplate("vl4re8_v", 0x62800007U, {Args::rs1, Args::vd, });
  const InstructionTemplate vl8re16_v = InstructionTemplate("vl8re16_v", 0xe2805007U, {Args::rs1, Args::vd, });
  const InstructionTemplate vl8re32_v = InstructionTemplate("vl8re32_v", 0xe2806007U, {Args::rs1, Args::vd, });
  const InstructionTemplate vl8re64_v = InstructionTemplate("vl8re64_v", 0xe2807007U, {Args::rs1, Args::vd, });
  const InstructionTemplate vl8re8_v = InstructionTemplate("vl8re8_v", 0xe2800007U, {Args::rs1, Args::vd, });
  const InstructionTemplate vle1024_v = InstructionTemplate("vle1024_v", 0x10007007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const InstructionTemplate vle1024ff_v = InstructionTemplate("vle1024ff_v", 0x11007007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const InstructionTemplate vle128_v = InstructionTemplate("vle128_v", 0x10000007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const InstructionTemplate vle128ff_v = InstructionTemplate("vle128ff_v", 0x11000007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const InstructionTemplate vle16_v = InstructionTemplate("vle16_v", 0x5007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const InstructionTemplate vle16ff_v = InstructionTemplate("vle16ff_v", 0x1005007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const InstructionTemplate vle256_v = InstructionTemplate("vle256_v", 0x10005007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const InstructionTemplate vle256ff_v = InstructionTemplate("vle256ff_v", 0x11005007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const InstructionTemplate vle32_v = InstructionTemplate("vle32_v", 0x6007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const InstructionTemplate vle32ff_v = InstructionTemplate("vle32ff_v", 0x1006007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const InstructionTemplate vle512_v = InstructionTemplate("vle512_v", 0x10006007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const InstructionTemplate vle512ff_v = InstructionTemplate("vle512ff_v", 0x11006007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const InstructionTemplate vle64_v = InstructionTemplate("vle64_v", 0x7007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const InstructionTemplate vle64ff_v = InstructionTemplate("vle64ff_v", 0x1007007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const InstructionTemplate vle8_v = InstructionTemplate("vle8_v", 0x7U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const InstructionTemplate vle8ff_v = InstructionTemplate("vle8ff_v", 0x1000007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const InstructionTemplate vlm_v = InstructionTemplate("vlm_v", 0x2b00007U, {Args::rs1, Args::vd, });
  const InstructionTemplate vloxei1024_v = InstructionTemplate("vloxei1024_v", 0x1c007007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vloxei128_v = InstructionTemplate("vloxei128_v", 0x1c000007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vloxei16_v = InstructionTemplate("vloxei16_v", 0xc005007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vloxei256_v = InstructionTemplate("vloxei256_v", 0x1c005007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vloxei32_v = InstructionTemplate("vloxei32_v", 0xc006007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vloxei512_v = InstructionTemplate("vloxei512_v", 0x1c006007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vloxei64_v = InstructionTemplate("vloxei64_v", 0xc007007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vloxei8_v = InstructionTemplate("vloxei8_v", 0xc000007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vlse1024_v = InstructionTemplate("vlse1024_v", 0x18007007U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vd, });
  const InstructionTemplate vlse128_v = InstructionTemplate("vlse128_v", 0x18000007U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vd, });
  const InstructionTemplate vlse16_v = InstructionTemplate("vlse16_v", 0x8005007U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vd, });
  const InstructionTemplate vlse256_v = InstructionTemplate("vlse256_v", 0x18005007U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vd, });
  const InstructionTemplate vlse32_v = InstructionTemplate("vlse32_v", 0x8006007U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vd, });
  const InstructionTemplate vlse512_v = InstructionTemplate("vlse512_v", 0x18006007U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vd, });
  const InstructionTemplate vlse64_v = InstructionTemplate("vlse64_v", 0x8007007U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vd, });
  const InstructionTemplate vlse8_v = InstructionTemplate("vlse8_v", 0x8000007U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vd, });
  const InstructionTemplate vluxei1024_v = InstructionTemplate("vluxei1024_v", 0x14007007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vluxei128_v = InstructionTemplate("vluxei128_v", 0x14000007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vluxei16_v = InstructionTemplate("vluxei16_v", 0x4005007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vluxei256_v = InstructionTemplate("vluxei256_v", 0x14005007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vluxei32_v = InstructionTemplate("vluxei32_v", 0x4006007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vluxei512_v = InstructionTemplate("vluxei512_v", 0x14006007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vluxei64_v = InstructionTemplate("vluxei64_v", 0x4007007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vluxei8_v = InstructionTemplate("vluxei8_v", 0x4000007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmacc_vv = InstructionTemplate("vmacc_vv", 0xb4002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmacc_vx = InstructionTemplate("vmacc_vx", 0xb4006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmadc_vi = InstructionTemplate("vmadc_vi", 0x46003057U, {Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vmadc_vim = InstructionTemplate("vmadc_vim", 0x44003057U, {Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vmadc_vv = InstructionTemplate("vmadc_vv", 0x46000057U, {Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmadc_vvm = InstructionTemplate("vmadc_vvm", 0x44000057U, {Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmadc_vx = InstructionTemplate("vmadc_vx", 0x46004057U, {Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmadc_vxm = InstructionTemplate("vmadc_vxm", 0x44004057U, {Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmadd_vv = InstructionTemplate("vmadd_vv", 0xa4002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmadd_vx = InstructionTemplate("vmadd_vx", 0xa4006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmand_mm = InstructionTemplate("vmand_mm", 0x64002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmandn_mm = InstructionTemplate("vmandn_mm", 0x60002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmax_vv = InstructionTemplate("vmax_vv", 0x1c000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmax_vx = InstructionTemplate("vmax_vx", 0x1c004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmaxu_vv = InstructionTemplate("vmaxu_vv", 0x18000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmaxu_vx = InstructionTemplate("vmaxu_vx", 0x18004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmerge_vim = InstructionTemplate("vmerge_vim", 0x5c003057U, {Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vmerge_vvm = InstructionTemplate("vmerge_vvm", 0x5c000057U, {Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmerge_vxm = InstructionTemplate("vmerge_vxm", 0x5c004057U, {Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmfeq_vf = InstructionTemplate("vmfeq_vf", 0x60005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmfeq_vv = InstructionTemplate("vmfeq_vv", 0x60001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmfge_vf = InstructionTemplate("vmfge_vf", 0x7c005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmfgt_vf = InstructionTemplate("vmfgt_vf", 0x74005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmfle_vf = InstructionTemplate("vmfle_vf", 0x64005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmfle_vv = InstructionTemplate("vmfle_vv", 0x64001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmflt_vf = InstructionTemplate("vmflt_vf", 0x6c005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmflt_vv = InstructionTemplate("vmflt_vv", 0x6c001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmfne_vf = InstructionTemplate("vmfne_vf", 0x70005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmfne_vv = InstructionTemplate("vmfne_vv", 0x70001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmin_vv = InstructionTemplate("vmin_vv", 0x14000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmin_vx = InstructionTemplate("vmin_vx", 0x14004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vminu_vv = InstructionTemplate("vminu_vv", 0x10000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vminu_vx = InstructionTemplate("vminu_vx", 0x10004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmnand_mm = InstructionTemplate("vmnand_mm", 0x74002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmnor_mm = InstructionTemplate("vmnor_mm", 0x78002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmor_mm = InstructionTemplate("vmor_mm", 0x68002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmorn_mm = InstructionTemplate("vmorn_mm", 0x70002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmsbc_vv = InstructionTemplate("vmsbc_vv", 0x4e000057U, {Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmsbc_vvm = InstructionTemplate("vmsbc_vvm", 0x4c000057U, {Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmsbc_vx = InstructionTemplate("vmsbc_vx", 0x4e004057U, {Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmsbc_vxm = InstructionTemplate("vmsbc_vxm", 0x4c004057U, {Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmsbf_m = InstructionTemplate("vmsbf_m", 0x5000a057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vmseq_vi = InstructionTemplate("vmseq_vi", 0x60003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vmseq_vv = InstructionTemplate("vmseq_vv", 0x60000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmseq_vx = InstructionTemplate("vmseq_vx", 0x60004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmsgt_vi = InstructionTemplate("vmsgt_vi", 0x7c003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vmsgt_vx = InstructionTemplate("vmsgt_vx", 0x7c004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmsgtu_vi = InstructionTemplate("vmsgtu_vi", 0x78003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vmsgtu_vx = InstructionTemplate("vmsgtu_vx", 0x78004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmsif_m = InstructionTemplate("vmsif_m", 0x5001a057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vmsle_vi = InstructionTemplate("vmsle_vi", 0x74003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vmsle_vv = InstructionTemplate("vmsle_vv", 0x74000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmsle_vx = InstructionTemplate("vmsle_vx", 0x74004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmsleu_vi = InstructionTemplate("vmsleu_vi", 0x70003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vmsleu_vv = InstructionTemplate("vmsleu_vv", 0x70000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmsleu_vx = InstructionTemplate("vmsleu_vx", 0x70004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmslt_vv = InstructionTemplate("vmslt_vv", 0x6c000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmslt_vx = InstructionTemplate("vmslt_vx", 0x6c004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmsltu_vv = InstructionTemplate("vmsltu_vv", 0x68000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmsltu_vx = InstructionTemplate("vmsltu_vx", 0x68004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmsne_vi = InstructionTemplate("vmsne_vi", 0x64003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vmsne_vv = InstructionTemplate("vmsne_vv", 0x64000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmsne_vx = InstructionTemplate("vmsne_vx", 0x64004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmsof_m = InstructionTemplate("vmsof_m", 0x50012057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vmul_vv = InstructionTemplate("vmul_vv", 0x94002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmul_vx = InstructionTemplate("vmul_vx", 0x94006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmulh_vv = InstructionTemplate("vmulh_vv", 0x9c002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmulh_vx = InstructionTemplate("vmulh_vx", 0x9c006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmulhsu_vv = InstructionTemplate("vmulhsu_vv", 0x98002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmulhsu_vx = InstructionTemplate("vmulhsu_vx", 0x98006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmulhu_vv = InstructionTemplate("vmulhu_vv", 0x90002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmulhu_vx = InstructionTemplate("vmulhu_vx", 0x90006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vmv1r_v = InstructionTemplate("vmv1r_v", 0x9e003057U, {Args::vs2, Args::vd, });
  const InstructionTemplate vmv2r_v = InstructionTemplate("vmv2r_v", 0x9e00b057U, {Args::vs2, Args::vd, });
  const InstructionTemplate vmv4r_v = InstructionTemplate("vmv4r_v", 0x9e01b057U, {Args::vs2, Args::vd, });
  const InstructionTemplate vmv8r_v = InstructionTemplate("vmv8r_v", 0x9e03b057U, {Args::vs2, Args::vd, });
  const InstructionTemplate vmv_s_x = InstructionTemplate("vmv_s_x", 0x42006057U, {Args::rs1, Args::vd, });
  const InstructionTemplate vmv_v_i = InstructionTemplate("vmv_v_i", 0x5e003057U, {Args::simm5, Args::vd, });
  const InstructionTemplate vmv_v_v = InstructionTemplate("vmv_v_v", 0x5e000057U, {Args::vs1, Args::vd, });
  const InstructionTemplate vmv_v_x = InstructionTemplate("vmv_v_x", 0x5e004057U, {Args::rs1, Args::vd, });
  const InstructionTemplate vmv_x_s = InstructionTemplate("vmv_x_s", 0x42002057U, {Args::vs2, Args::rd, });
  const InstructionTemplate vmxnor_mm = InstructionTemplate("vmxnor_mm", 0x7c002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vmxor_mm = InstructionTemplate("vmxor_mm", 0x6c002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vnclip_wi = InstructionTemplate("vnclip_wi", 0xbc003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vnclip_wv = InstructionTemplate("vnclip_wv", 0xbc000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vnclip_wx = InstructionTemplate("vnclip_wx", 0xbc004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vnclipu_wi = InstructionTemplate("vnclipu_wi", 0xb8003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vnclipu_wv = InstructionTemplate("vnclipu_wv", 0xb8000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vnclipu_wx = InstructionTemplate("vnclipu_wx", 0xb8004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vnmsac_vv = InstructionTemplate("vnmsac_vv", 0xbc002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vnmsac_vx = InstructionTemplate("vnmsac_vx", 0xbc006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vnmsub_vv = InstructionTemplate("vnmsub_vv", 0xac002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vnmsub_vx = InstructionTemplate("vnmsub_vx", 0xac006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vnsra_wi = InstructionTemplate("vnsra_wi", 0xb4003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vnsra_wv = InstructionTemplate("vnsra_wv", 0xb4000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vnsra_wx = InstructionTemplate("vnsra_wx", 0xb4004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vnsrl_wi = InstructionTemplate("vnsrl_wi", 0xb0003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vnsrl_wv = InstructionTemplate("vnsrl_wv", 0xb0000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vnsrl_wx = InstructionTemplate("vnsrl_wx", 0xb0004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vor_vi = InstructionTemplate("vor_vi", 0x28003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vor_vv = InstructionTemplate("vor_vv", 0x28000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vor_vx = InstructionTemplate("vor_vx", 0x28004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vredand_vs = InstructionTemplate("vredand_vs", 0x4002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vredmax_vs = InstructionTemplate("vredmax_vs", 0x1c002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vredmaxu_vs = InstructionTemplate("vredmaxu_vs", 0x18002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vredmin_vs = InstructionTemplate("vredmin_vs", 0x14002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vredminu_vs = InstructionTemplate("vredminu_vs", 0x10002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vredor_vs = InstructionTemplate("vredor_vs", 0x8002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vredsum_vs = InstructionTemplate("vredsum_vs", 0x2057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vredxor_vs = InstructionTemplate("vredxor_vs", 0xc002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vrem_vv = InstructionTemplate("vrem_vv", 0x8c002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vrem_vx = InstructionTemplate("vrem_vx", 0x8c006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vremu_vv = InstructionTemplate("vremu_vv", 0x88002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vremu_vx = InstructionTemplate("vremu_vx", 0x88006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vrgather_vi = InstructionTemplate("vrgather_vi", 0x30003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vrgather_vv = InstructionTemplate("vrgather_vv", 0x30000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vrgather_vx = InstructionTemplate("vrgather_vx", 0x30004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vrgatherei16_vv = InstructionTemplate("vrgatherei16_vv", 0x38000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vrsub_vi = InstructionTemplate("vrsub_vi", 0xc003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vrsub_vx = InstructionTemplate("vrsub_vx", 0xc004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vs1r_v = InstructionTemplate("vs1r_v", 0x2800027U, {Args::rs1, Args::vs3, });
  const InstructionTemplate vs2r_v = InstructionTemplate("vs2r_v", 0x22800027U, {Args::rs1, Args::vs3, });
  const InstructionTemplate vs4r_v = InstructionTemplate("vs4r_v", 0x62800027U, {Args::rs1, Args::vs3, });
  const InstructionTemplate vs8r_v = InstructionTemplate("vs8r_v", 0xe2800027U, {Args::rs1, Args::vs3, });
  const InstructionTemplate vsadd_vi = InstructionTemplate("vsadd_vi", 0x84003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vsadd_vv = InstructionTemplate("vsadd_vv", 0x84000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vsadd_vx = InstructionTemplate("vsadd_vx", 0x84004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vsaddu_vi = InstructionTemplate("vsaddu_vi", 0x80003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vsaddu_vv = InstructionTemplate("vsaddu_vv", 0x80000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vsaddu_vx = InstructionTemplate("vsaddu_vx", 0x80004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vsbc_vvm = InstructionTemplate("vsbc_vvm", 0x48000057U, {Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vsbc_vxm = InstructionTemplate("vsbc_vxm", 0x48004057U, {Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vse1024_v = InstructionTemplate("vse1024_v", 0x10007027U, {Args::nf, Args::vm, Args::rs1, Args::vs3, });
  const InstructionTemplate vse128_v = InstructionTemplate("vse128_v", 0x10000027U, {Args::nf, Args::vm, Args::rs1, Args::vs3, });
  const InstructionTemplate vse16_v = InstructionTemplate("vse16_v", 0x5027U, {Args::nf, Args::vm, Args::rs1, Args::vs3, });
  const InstructionTemplate vse256_v = InstructionTemplate("vse256_v", 0x10005027U, {Args::nf, Args::vm, Args::rs1, Args::vs3, });
  const InstructionTemplate vse32_v = InstructionTemplate("vse32_v", 0x6027U, {Args::nf, Args::vm, Args::rs1, Args::vs3, });
  const InstructionTemplate vse512_v = InstructionTemplate("vse512_v", 0x10006027U, {Args::nf, Args::vm, Args::rs1, Args::vs3, });
  const InstructionTemplate vse64_v = InstructionTemplate("vse64_v", 0x7027U, {Args::nf, Args::vm, Args::rs1, Args::vs3, });
  const InstructionTemplate vse8_v = InstructionTemplate("vse8_v", 0x27U, {Args::nf, Args::vm, Args::rs1, Args::vs3, });
  const InstructionTemplate vsetivli = InstructionTemplate("vsetivli", 0xc0007057U, {Args::zimm10, Args::zimm, Args::rd, });
  const InstructionTemplate vsetvl = InstructionTemplate("vsetvl", 0x80007057U, {Args::rs2, Args::rs1, Args::rd, });
  const InstructionTemplate vsetvli = InstructionTemplate("vsetvli", 0x7057U, {Args::zimm11, Args::rs1, Args::rd, });
  const InstructionTemplate vsext_vf2 = InstructionTemplate("vsext_vf2", 0x4803a057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vsext_vf4 = InstructionTemplate("vsext_vf4", 0x4802a057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vsext_vf8 = InstructionTemplate("vsext_vf8", 0x4801a057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vslide1down_vx = InstructionTemplate("vslide1down_vx", 0x3c006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vslide1up_vx = InstructionTemplate("vslide1up_vx", 0x38006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vslidedown_vi = InstructionTemplate("vslidedown_vi", 0x3c003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vslidedown_vx = InstructionTemplate("vslidedown_vx", 0x3c004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vslideup_vi = InstructionTemplate("vslideup_vi", 0x38003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vslideup_vx = InstructionTemplate("vslideup_vx", 0x38004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vsll_vi = InstructionTemplate("vsll_vi", 0x94003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vsll_vv = InstructionTemplate("vsll_vv", 0x94000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vsll_vx = InstructionTemplate("vsll_vx", 0x94004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vsm_v = InstructionTemplate("vsm_v", 0x2b00027U, {Args::rs1, Args::vs3, });
  const InstructionTemplate vsmul_vv = InstructionTemplate("vsmul_vv", 0x9c000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vsmul_vx = InstructionTemplate("vsmul_vx", 0x9c004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vsoxei1024_v = InstructionTemplate("vsoxei1024_v", 0x1c007027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const InstructionTemplate vsoxei128_v = InstructionTemplate("vsoxei128_v", 0x1c000027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const InstructionTemplate vsoxei16_v = InstructionTemplate("vsoxei16_v", 0xc005027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const InstructionTemplate vsoxei256_v = InstructionTemplate("vsoxei256_v", 0x1c005027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const InstructionTemplate vsoxei32_v = InstructionTemplate("vsoxei32_v", 0xc006027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const InstructionTemplate vsoxei512_v = InstructionTemplate("vsoxei512_v", 0x1c006027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const InstructionTemplate vsoxei64_v = InstructionTemplate("vsoxei64_v", 0xc007027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const InstructionTemplate vsoxei8_v = InstructionTemplate("vsoxei8_v", 0xc000027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const InstructionTemplate vsra_vi = InstructionTemplate("vsra_vi", 0xa4003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vsra_vv = InstructionTemplate("vsra_vv", 0xa4000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vsra_vx = InstructionTemplate("vsra_vx", 0xa4004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vsrl_vi = InstructionTemplate("vsrl_vi", 0xa0003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vsrl_vv = InstructionTemplate("vsrl_vv", 0xa0000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vsrl_vx = InstructionTemplate("vsrl_vx", 0xa0004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vsse1024_v = InstructionTemplate("vsse1024_v", 0x18007027U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vs3, });
  const InstructionTemplate vsse128_v = InstructionTemplate("vsse128_v", 0x18000027U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vs3, });
  const InstructionTemplate vsse16_v = InstructionTemplate("vsse16_v", 0x8005027U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vs3, });
  const InstructionTemplate vsse256_v = InstructionTemplate("vsse256_v", 0x18005027U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vs3, });
  const InstructionTemplate vsse32_v = InstructionTemplate("vsse32_v", 0x8006027U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vs3, });
  const InstructionTemplate vsse512_v = InstructionTemplate("vsse512_v", 0x18006027U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vs3, });
  const InstructionTemplate vsse64_v = InstructionTemplate("vsse64_v", 0x8007027U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vs3, });
  const InstructionTemplate vsse8_v = InstructionTemplate("vsse8_v", 0x8000027U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vs3, });
  const InstructionTemplate vssra_vi = InstructionTemplate("vssra_vi", 0xac003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vssra_vv = InstructionTemplate("vssra_vv", 0xac000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vssra_vx = InstructionTemplate("vssra_vx", 0xac004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vssrl_vi = InstructionTemplate("vssrl_vi", 0xa8003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vssrl_vv = InstructionTemplate("vssrl_vv", 0xa8000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vssrl_vx = InstructionTemplate("vssrl_vx", 0xa8004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vssub_vv = InstructionTemplate("vssub_vv", 0x8c000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vssub_vx = InstructionTemplate("vssub_vx", 0x8c004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vssubu_vv = InstructionTemplate("vssubu_vv", 0x88000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vssubu_vx = InstructionTemplate("vssubu_vx", 0x88004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vsub_vv = InstructionTemplate("vsub_vv", 0x8000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vsub_vx = InstructionTemplate("vsub_vx", 0x8004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vsuxei1024_v = InstructionTemplate("vsuxei1024_v", 0x14007027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const InstructionTemplate vsuxei128_v = InstructionTemplate("vsuxei128_v", 0x14000027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const InstructionTemplate vsuxei16_v = InstructionTemplate("vsuxei16_v", 0x4005027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const InstructionTemplate vsuxei256_v = InstructionTemplate("vsuxei256_v", 0x14005027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const InstructionTemplate vsuxei32_v = InstructionTemplate("vsuxei32_v", 0x4006027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const InstructionTemplate vsuxei512_v = InstructionTemplate("vsuxei512_v", 0x14006027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const InstructionTemplate vsuxei64_v = InstructionTemplate("vsuxei64_v", 0x4007027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const InstructionTemplate vsuxei8_v = InstructionTemplate("vsuxei8_v", 0x4000027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const InstructionTemplate vwadd_vv = InstructionTemplate("vwadd_vv", 0xc4002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vwadd_vx = InstructionTemplate("vwadd_vx", 0xc4006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vwadd_wv = InstructionTemplate("vwadd_wv", 0xd4002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vwadd_wx = InstructionTemplate("vwadd_wx", 0xd4006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vwaddu_vv = InstructionTemplate("vwaddu_vv", 0xc0002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vwaddu_vx = InstructionTemplate("vwaddu_vx", 0xc0006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vwaddu_wv = InstructionTemplate("vwaddu_wv", 0xd0002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vwaddu_wx = InstructionTemplate("vwaddu_wx", 0xd0006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vwmacc_vv = InstructionTemplate("vwmacc_vv", 0xf4002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vwmacc_vx = InstructionTemplate("vwmacc_vx", 0xf4006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vwmaccsu_vv = InstructionTemplate("vwmaccsu_vv", 0xfc002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vwmaccsu_vx = InstructionTemplate("vwmaccsu_vx", 0xfc006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vwmaccu_vv = InstructionTemplate("vwmaccu_vv", 0xf0002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vwmaccu_vx = InstructionTemplate("vwmaccu_vx", 0xf0006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vwmaccus_vx = InstructionTemplate("vwmaccus_vx", 0xf8006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vwmul_vv = InstructionTemplate("vwmul_vv", 0xec002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vwmul_vx = InstructionTemplate("vwmul_vx", 0xec006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vwmulsu_vv = InstructionTemplate("vwmulsu_vv", 0xe8002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vwmulsu_vx = InstructionTemplate("vwmulsu_vx", 0xe8006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vwmulu_vv = InstructionTemplate("vwmulu_vv", 0xe0002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vwmulu_vx = InstructionTemplate("vwmulu_vx", 0xe0006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vwredsum_vs = InstructionTemplate("vwredsum_vs", 0xc4000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vwredsumu_vs = InstructionTemplate("vwredsumu_vs", 0xc0000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vwsub_vv = InstructionTemplate("vwsub_vv", 0xcc002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vwsub_vx = InstructionTemplate("vwsub_vx", 0xcc006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vwsub_wv = InstructionTemplate("vwsub_wv", 0xdc002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vwsub_wx = InstructionTemplate("vwsub_wx", 0xdc006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vwsubu_vv = InstructionTemplate("vwsubu_vv", 0xc8002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vwsubu_vx = InstructionTemplate("vwsubu_vx", 0xc8006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vwsubu_wv = InstructionTemplate("vwsubu_wv", 0xd8002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vwsubu_wx = InstructionTemplate("vwsubu_wx", 0xd8006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vxor_vi = InstructionTemplate("vxor_vi", 0x2c003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const InstructionTemplate vxor_vv = InstructionTemplate("vxor_vv", 0x2c000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const InstructionTemplate vxor_vx = InstructionTemplate("vxor_vx", 0x2c004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const InstructionTemplate vzext_vf2 = InstructionTemplate("vzext_vf2", 0x48032057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vzext_vf4 = InstructionTemplate("vzext_vf4", 0x48022057U, {Args::vm, Args::vs2, Args::vd, });
  const InstructionTemplate vzext_vf8 = InstructionTemplate("vzext_vf8", 0x48012057U, {Args::vm, Args::vs2, Args::vd, });
  const std::array<InstructionTemplate, 447> all = {
    vaadd_vv,
    vaadd_vx,
    vaaddu_vv,
    vaaddu_vx,
    vadc_vim,
    vadc_vvm,
    vadc_vxm,
    vadd_vi,
    vadd_vv,
    vadd_vx,
    vamoaddei16_v,
    vamoaddei32_v,
    vamoaddei64_v,
    vamoaddei8_v,
    vamoandei16_v,
    vamoandei32_v,
    vamoandei64_v,
    vamoandei8_v,
    vamomaxei16_v,
    vamomaxei32_v,
    vamomaxei64_v,
    vamomaxei8_v,
    vamomaxuei16_v,
    vamomaxuei32_v,
    vamomaxuei64_v,
    vamomaxuei8_v,
    vamominei16_v,
    vamominei32_v,
    vamominei64_v,
    vamominei8_v,
    vamominuei16_v,
    vamominuei32_v,
    vamominuei64_v,
    vamominuei8_v,
    vamoorei16_v,
    vamoorei32_v,
    vamoorei64_v,
    vamoorei8_v,
    vamoswapei16_v,
    vamoswapei32_v,
    vamoswapei64_v,
    vamoswapei8_v,
    vamoxorei16_v,
    vamoxorei32_v,
    vamoxorei64_v,
    vamoxorei8_v,
    vand_vi,
    vand_vv,
    vand_vx,
    vasub_vv,
    vasub_vx,
    vasubu_vv,
    vasubu_vx,
    vcompress_vm,
    vcpop_m,
    vdiv_vv,
    vdiv_vx,
    vdivu_vv,
    vdivu_vx,
    vfadd_vf,
    vfadd_vv,
    vfclass_v,
    vfcvt_f_x_v,
    vfcvt_f_xu_v,
    vfcvt_rtz_x_f_v,
    vfcvt_rtz_xu_f_v,
    vfcvt_x_f_v,
    vfcvt_xu_f_v,
    vfdiv_vf,
    vfdiv_vv,
    vfirst_m,
    vfmacc_vf,
    vfmacc_vv,
    vfmadd_vf,
    vfmadd_vv,
    vfmax_vf,
    vfmax_vv,
    vfmerge_vfm,
    vfmin_vf,
    vfmin_vv,
    vfmsac_vf,
    vfmsac_vv,
    vfmsub_vf,
    vfmsub_vv,
    vfmul_vf,
    vfmul_vv,
    vfmv_f_s,
    vfmv_s_f,
    vfmv_v_f,
    vfncvt_f_f_w,
    vfncvt_f_x_w,
    vfncvt_f_xu_w,
    vfncvt_rod_f_f_w,
    vfncvt_rtz_x_f_w,
    vfncvt_rtz_xu_f_w,
    vfncvt_x_f_w,
    vfncvt_xu_f_w,
    vfnmacc_vf,
    vfnmacc_vv,
    vfnmadd_vf,
    vfnmadd_vv,
    vfnmsac_vf,
    vfnmsac_vv,
    vfnmsub_vf,
    vfnmsub_vv,
    vfrdiv_vf,
    vfrec7_v,
    vfredmax_vs,
    vfredmin_vs,
    vfredosum_vs,
    vfredusum_vs,
    vfrsqrt7_v,
    vfrsub_vf,
    vfsgnj_vf,
    vfsgnj_vv,
    vfsgnjn_vf,
    vfsgnjn_vv,
    vfsgnjx_vf,
    vfsgnjx_vv,
    vfslide1down_vf,
    vfslide1up_vf,
    vfsqrt_v,
    vfsub_vf,
    vfsub_vv,
    vfwadd_vf,
    vfwadd_vv,
    vfwadd_wf,
    vfwadd_wv,
    vfwcvt_f_f_v,
    vfwcvt_f_x_v,
    vfwcvt_f_xu_v,
    vfwcvt_rtz_x_f_v,
    vfwcvt_rtz_xu_f_v,
    vfwcvt_x_f_v,
    vfwcvt_xu_f_v,
    vfwmacc_vf,
    vfwmacc_vv,
    vfwmsac_vf,
    vfwmsac_vv,
    vfwmul_vf,
    vfwmul_vv,
    vfwnmacc_vf,
    vfwnmacc_vv,
    vfwnmsac_vf,
    vfwnmsac_vv,
    vfwredosum_vs,
    vfwredusum_vs,
    vfwsub_vf,
    vfwsub_vv,
    vfwsub_wf,
    vfwsub_wv,
    vid_v,
    viota_m,
    vl1re16_v,
    vl1re32_v,
    vl1re64_v,
    vl1re8_v,
    vl2re16_v,
    vl2re32_v,
    vl2re64_v,
    vl2re8_v,
    vl4re16_v,
    vl4re32_v,
    vl4re64_v,
    vl4re8_v,
    vl8re16_v,
    vl8re32_v,
    vl8re64_v,
    vl8re8_v,
    vle1024_v,
    vle1024ff_v,
    vle128_v,
    vle128ff_v,
    vle16_v,
    vle16ff_v,
    vle256_v,
    vle256ff_v,
    vle32_v,
    vle32ff_v,
    vle512_v,
    vle512ff_v,
    vle64_v,
    vle64ff_v,
    vle8_v,
    vle8ff_v,
    vlm_v,
    vloxei1024_v,
    vloxei128_v,
    vloxei16_v,
    vloxei256_v,
    vloxei32_v,
    vloxei512_v,
    vloxei64_v,
    vloxei8_v,
    vlse1024_v,
    vlse128_v,
    vlse16_v,
    vlse256_v,
    vlse32_v,
    vlse512_v,
    vlse64_v,
    vlse8_v,
    vluxei1024_v,
    vluxei128_v,
    vluxei16_v,
    vluxei256_v,
    vluxei32_v,
    vluxei512_v,
    vluxei64_v,
    vluxei8_v,
    vmacc_vv,
    vmacc_vx,
    vmadc_vi,
    vmadc_vim,
    vmadc_vv,
    vmadc_vvm,
    vmadc_vx,
    vmadc_vxm,
    vmadd_vv,
    vmadd_vx,
    vmand_mm,
    vmandn_mm,
    vmax_vv,
    vmax_vx,
    vmaxu_vv,
    vmaxu_vx,
    vmerge_vim,
    vmerge_vvm,
    vmerge_vxm,
    vmfeq_vf,
    vmfeq_vv,
    vmfge_vf,
    vmfgt_vf,
    vmfle_vf,
    vmfle_vv,
    vmflt_vf,
    vmflt_vv,
    vmfne_vf,
    vmfne_vv,
    vmin_vv,
    vmin_vx,
    vminu_vv,
    vminu_vx,
    vmnand_mm,
    vmnor_mm,
    vmor_mm,
    vmorn_mm,
    vmsbc_vv,
    vmsbc_vvm,
    vmsbc_vx,
    vmsbc_vxm,
    vmsbf_m,
    vmseq_vi,
    vmseq_vv,
    vmseq_vx,
    vmsgt_vi,
    vmsgt_vx,
    vmsgtu_vi,
    vmsgtu_vx,
    vmsif_m,
    vmsle_vi,
    vmsle_vv,
    vmsle_vx,
    vmsleu_vi,
    vmsleu_vv,
    vmsleu_vx,
    vmslt_vv,
    vmslt_vx,
    vmsltu_vv,
    vmsltu_vx,
    vmsne_vi,
    vmsne_vv,
    vmsne_vx,
    vmsof_m,
    vmul_vv,
    vmul_vx,
    vmulh_vv,
    vmulh_vx,
    vmulhsu_vv,
    vmulhsu_vx,
    vmulhu_vv,
    vmulhu_vx,
    vmv1r_v,
    vmv2r_v,
    vmv4r_v,
    vmv8r_v,
    vmv_s_x,
    vmv_v_i,
    vmv_v_v,
    vmv_v_x,
    vmv_x_s,
    vmxnor_mm,
    vmxor_mm,
    vnclip_wi,
    vnclip_wv,
    vnclip_wx,
    vnclipu_wi,
    vnclipu_wv,
    vnclipu_wx,
    vnmsac_vv,
    vnmsac_vx,
    vnmsub_vv,
    vnmsub_vx,
    vnsra_wi,
    vnsra_wv,
    vnsra_wx,
    vnsrl_wi,
    vnsrl_wv,
    vnsrl_wx,
    vor_vi,
    vor_vv,
    vor_vx,
    vredand_vs,
    vredmax_vs,
    vredmaxu_vs,
    vredmin_vs,
    vredminu_vs,
    vredor_vs,
    vredsum_vs,
    vredxor_vs,
    vrem_vv,
    vrem_vx,
    vremu_vv,
    vremu_vx,
    vrgather_vi,
    vrgather_vv,
    vrgather_vx,
    vrgatherei16_vv,
    vrsub_vi,
    vrsub_vx,
    vs1r_v,
    vs2r_v,
    vs4r_v,
    vs8r_v,
    vsadd_vi,
    vsadd_vv,
    vsadd_vx,
    vsaddu_vi,
    vsaddu_vv,
    vsaddu_vx,
    vsbc_vvm,
    vsbc_vxm,
    vse1024_v,
    vse128_v,
    vse16_v,
    vse256_v,
    vse32_v,
    vse512_v,
    vse64_v,
    vse8_v,
    vsetivli,
    vsetvl,
    vsetvli,
    vsext_vf2,
    vsext_vf4,
    vsext_vf8,
    vslide1down_vx,
    vslide1up_vx,
    vslidedown_vi,
    vslidedown_vx,
    vslideup_vi,
    vslideup_vx,
    vsll_vi,
    vsll_vv,
    vsll_vx,
    vsm_v,
    vsmul_vv,
    vsmul_vx,
    vsoxei1024_v,
    vsoxei128_v,
    vsoxei16_v,
    vsoxei256_v,
    vsoxei32_v,
    vsoxei512_v,
    vsoxei64_v,
    vsoxei8_v,
    vsra_vi,
    vsra_vv,
    vsra_vx,
    vsrl_vi,
    vsrl_vv,
    vsrl_vx,
    vsse1024_v,
    vsse128_v,
    vsse16_v,
    vsse256_v,
    vsse32_v,
    vsse512_v,
    vsse64_v,
    vsse8_v,
    vssra_vi,
    vssra_vv,
    vssra_vx,
    vssrl_vi,
    vssrl_vv,
    vssrl_vx,
    vssub_vv,
    vssub_vx,
    vssubu_vv,
    vssubu_vx,
    vsub_vv,
    vsub_vx,
    vsuxei1024_v,
    vsuxei128_v,
    vsuxei16_v,
    vsuxei256_v,
    vsuxei32_v,
    vsuxei512_v,
    vsuxei64_v,
    vsuxei8_v,
    vwadd_vv,
    vwadd_vx,
    vwadd_wv,
    vwadd_wx,
    vwaddu_vv,
    vwaddu_vx,
    vwaddu_wv,
    vwaddu_wx,
    vwmacc_vv,
    vwmacc_vx,
    vwmaccsu_vv,
    vwmaccsu_vx,
    vwmaccu_vv,
    vwmaccu_vx,
    vwmaccus_vx,
    vwmul_vv,
    vwmul_vx,
    vwmulsu_vv,
    vwmulsu_vx,
    vwmulu_vv,
    vwmulu_vx,
    vwredsum_vs,
    vwredsumu_vs,
    vwsub_vv,
    vwsub_vx,
    vwsub_wv,
    vwsub_wx,
    vwsubu_vv,
    vwsubu_vx,
    vwsubu_wv,
    vwsubu_wx,
    vxor_vi,
    vxor_vv,
    vxor_vx,
    vzext_vf2,
    vzext_vf4,
    vzext_vf8,
  };
}
namespace rv_v_aliases {
  const std::array<InstructionTemplate, 0> all = {
  };
}
namespace rv_zawrs {
  const InstructionTemplate wrs_nto = InstructionTemplate("wrs_nto", 0xd00073U, {});
  const InstructionTemplate wrs_sto = InstructionTemplate("wrs_sto", 0x1d00073U, {});
  const std::array<InstructionTemplate, 2> all = {
    wrs_nto,
    wrs_sto,
  };
}
namespace rv_zba {
  const InstructionTemplate sh1add = InstructionTemplate("sh1add", 0x20002033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate sh2add = InstructionTemplate("sh2add", 0x20004033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate sh3add = InstructionTemplate("sh3add", 0x20006033U, {Args::rd, Args::rs1, Args::rs2, });
  const std::array<InstructionTemplate, 3> all = {
    sh1add,
    sh2add,
    sh3add,
  };
}
namespace rv_zbb {
  const InstructionTemplate andn = InstructionTemplate("andn", 0x40007033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate clz = InstructionTemplate("clz", 0x60001013U, {Args::rd, Args::rs1, });
  const InstructionTemplate cpop = InstructionTemplate("cpop", 0x60201013U, {Args::rd, Args::rs1, });
  const InstructionTemplate ctz = InstructionTemplate("ctz", 0x60101013U, {Args::rd, Args::rs1, });
  const InstructionTemplate max = InstructionTemplate("max", 0xa006033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate maxu = InstructionTemplate("maxu", 0xa007033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate min = InstructionTemplate("min", 0xa004033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate minu = InstructionTemplate("minu", 0xa005033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate orc_b = InstructionTemplate("orc_b", 0x28705013U, {Args::rd, Args::rs1, });
  const InstructionTemplate orn = InstructionTemplate("orn", 0x40006033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate rol = InstructionTemplate("rol", 0x60001033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate ror = InstructionTemplate("ror", 0x60005033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate sext_b = InstructionTemplate("sext_b", 0x60401013U, {Args::rd, Args::rs1, });
  const InstructionTemplate sext_h = InstructionTemplate("sext_h", 0x60501013U, {Args::rd, Args::rs1, });
  const InstructionTemplate xnor = InstructionTemplate("xnor", 0x40004033U, {Args::rd, Args::rs1, Args::rs2, });
  const std::array<InstructionTemplate, 15> all = {
    andn,
    clz,
    cpop,
    ctz,
    max,
    maxu,
    min,
    minu,
    orc_b,
    orn,
    rol,
    ror,
    sext_b,
    sext_h,
    xnor,
  };
}
namespace rv_zbc {
  const InstructionTemplate clmul = InstructionTemplate("clmul", 0xa001033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate clmulh = InstructionTemplate("clmulh", 0xa003033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate clmulr = InstructionTemplate("clmulr", 0xa002033U, {Args::rd, Args::rs1, Args::rs2, });
  const std::array<InstructionTemplate, 3> all = {
    clmul,
    clmulh,
    clmulr,
  };
}
namespace rv_zbkb {
  const InstructionTemplate andn = InstructionTemplate("andn", 0x40007033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate orn = InstructionTemplate("orn", 0x40006033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate pack = InstructionTemplate("pack", 0x8004033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate packh = InstructionTemplate("packh", 0x8007033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate rol = InstructionTemplate("rol", 0x60001033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate ror = InstructionTemplate("ror", 0x60005033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate xnor = InstructionTemplate("xnor", 0x40004033U, {Args::rd, Args::rs1, Args::rs2, });
  const std::array<InstructionTemplate, 7> all = {
    andn,
    orn,
    pack,
    packh,
    rol,
    ror,
    xnor,
  };
}
namespace rv_zbkc {
  const InstructionTemplate clmul = InstructionTemplate("clmul", 0xa001033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate clmulh = InstructionTemplate("clmulh", 0xa003033U, {Args::rd, Args::rs1, Args::rs2, });
  const std::array<InstructionTemplate, 2> all = {
    clmul,
    clmulh,
  };
}
namespace rv_zbkx {
  const InstructionTemplate xperm4 = InstructionTemplate("xperm4", 0x28002033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate xperm8 = InstructionTemplate("xperm8", 0x28004033U, {Args::rd, Args::rs1, Args::rs2, });
  const std::array<InstructionTemplate, 2> all = {
    xperm4,
    xperm8,
  };
}
namespace rv_zbs {
  const InstructionTemplate bclr = InstructionTemplate("bclr", 0x48001033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate bext = InstructionTemplate("bext", 0x48005033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate binv = InstructionTemplate("binv", 0x68001033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate bset = InstructionTemplate("bset", 0x28001033U, {Args::rd, Args::rs1, Args::rs2, });
  const std::array<InstructionTemplate, 4> all = {
    bclr,
    bext,
    binv,
    bset,
  };
}
namespace rv_zcb {
  const InstructionTemplate c_lbu = InstructionTemplate("c_lbu", 0x8000U, {Args::rd_p, Args::rs1_p, Args::c_uimm2, });
  const InstructionTemplate c_lh = InstructionTemplate("c_lh", 0x8440U, {Args::rd_p, Args::rs1_p, Args::c_uimm1, });
  const InstructionTemplate c_lhu = InstructionTemplate("c_lhu", 0x8400U, {Args::rd_p, Args::rs1_p, Args::c_uimm1, });
  const InstructionTemplate c_mul = InstructionTemplate("c_mul", 0x9c41U, {Args::rd_rs1_p, Args::rs2_p, });
  const InstructionTemplate c_not = InstructionTemplate("c_not", 0x9c75U, {Args::rd_rs1_p, });
  const InstructionTemplate c_sb = InstructionTemplate("c_sb", 0x8800U, {Args::rs2_p, Args::rs1_p, Args::c_uimm2, });
  const InstructionTemplate c_sext_b = InstructionTemplate("c_sext_b", 0x9c65U, {Args::rd_rs1_p, });
  const InstructionTemplate c_sext_h = InstructionTemplate("c_sext_h", 0x9c6dU, {Args::rd_rs1_p, });
  const InstructionTemplate c_sh = InstructionTemplate("c_sh", 0x8c00U, {Args::rs2_p, Args::rs1_p, Args::c_uimm1, });
  const InstructionTemplate c_zext_b = InstructionTemplate("c_zext_b", 0x9c61U, {Args::rd_rs1_p, });
  const InstructionTemplate c_zext_h = InstructionTemplate("c_zext_h", 0x9c69U, {Args::rd_rs1_p, });
  const std::array<InstructionTemplate, 11> all = {
    c_lbu,
    c_lh,
    c_lhu,
    c_mul,
    c_not,
    c_sb,
    c_sext_b,
    c_sext_h,
    c_sh,
    c_zext_b,
    c_zext_h,
  };
}
namespace rv_zcmp {
  const InstructionTemplate cm_mva01s = InstructionTemplate("cm_mva01s", 0xac62U, {Args::c_sreg1, Args::c_sreg2, });
  const InstructionTemplate cm_mvsa01 = InstructionTemplate("cm_mvsa01", 0xac22U, {Args::c_sreg1, Args::c_sreg2, });
  const InstructionTemplate cm_pop = InstructionTemplate("cm_pop", 0xba02U, {Args::c_rlist, Args::c_spimm, });
  const InstructionTemplate cm_popret = InstructionTemplate("cm_popret", 0xbe02U, {Args::c_rlist, Args::c_spimm, });
  const InstructionTemplate cm_popretz = InstructionTemplate("cm_popretz", 0xbc02U, {Args::c_rlist, Args::c_spimm, });
  const InstructionTemplate cm_push = InstructionTemplate("cm_push", 0xb802U, {Args::c_rlist, Args::c_spimm, });
  const std::array<InstructionTemplate, 6> all = {
    cm_mva01s,
    cm_mvsa01,
    cm_pop,
    cm_popret,
    cm_popretz,
    cm_push,
  };
}
namespace rv_zcmt {
  const InstructionTemplate cm_jalt = InstructionTemplate("cm_jalt", 0xa002U, {Args::c_index, });
  const std::array<InstructionTemplate, 1> all = {
    cm_jalt,
  };
}
namespace rv_zfh {
  const InstructionTemplate fadd_h = InstructionTemplate("fadd_h", 0x4000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const InstructionTemplate fclass_h = InstructionTemplate("fclass_h", 0xe4001053U, {Args::rd, Args::rs1, });
  const InstructionTemplate fcvt_h_s = InstructionTemplate("fcvt_h_s", 0x44000053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fcvt_h_w = InstructionTemplate("fcvt_h_w", 0xd4000053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fcvt_h_wu = InstructionTemplate("fcvt_h_wu", 0xd4100053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fcvt_s_h = InstructionTemplate("fcvt_s_h", 0x40200053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fcvt_w_h = InstructionTemplate("fcvt_w_h", 0xc4000053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fcvt_wu_h = InstructionTemplate("fcvt_wu_h", 0xc4100053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fdiv_h = InstructionTemplate("fdiv_h", 0x1c000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const InstructionTemplate feq_h = InstructionTemplate("feq_h", 0xa4002053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate fle_h = InstructionTemplate("fle_h", 0xa4000053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate flh = InstructionTemplate("flh", 0x1007U, {Args::rd, Args::rs1, Args::imm12, });
  const InstructionTemplate flt_h = InstructionTemplate("flt_h", 0xa4001053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate fmadd_h = InstructionTemplate("fmadd_h", 0x4000043U, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const InstructionTemplate fmax_h = InstructionTemplate("fmax_h", 0x2c001053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate fmin_h = InstructionTemplate("fmin_h", 0x2c000053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate fmsub_h = InstructionTemplate("fmsub_h", 0x4000047U, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const InstructionTemplate fmul_h = InstructionTemplate("fmul_h", 0x14000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const InstructionTemplate fmv_h_x = InstructionTemplate("fmv_h_x", 0xf4000053U, {Args::rd, Args::rs1, });
  const InstructionTemplate fmv_x_h = InstructionTemplate("fmv_x_h", 0xe4000053U, {Args::rd, Args::rs1, });
  const InstructionTemplate fnmadd_h = InstructionTemplate("fnmadd_h", 0x400004fU, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const InstructionTemplate fnmsub_h = InstructionTemplate("fnmsub_h", 0x400004bU, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const InstructionTemplate fsgnj_h = InstructionTemplate("fsgnj_h", 0x24000053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate fsgnjn_h = InstructionTemplate("fsgnjn_h", 0x24001053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate fsgnjx_h = InstructionTemplate("fsgnjx_h", 0x24002053U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate fsh = InstructionTemplate("fsh", 0x1027U, {Args::imm12hi, Args::rs1, Args::rs2, Args::imm12lo, });
  const InstructionTemplate fsqrt_h = InstructionTemplate("fsqrt_h", 0x5c000053U, {Args::rd, Args::rs1, Args::rm, });
  const InstructionTemplate fsub_h = InstructionTemplate("fsub_h", 0xc000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const std::array<InstructionTemplate, 28> all = {
    fadd_h,
    fclass_h,
    fcvt_h_s,
    fcvt_h_w,
    fcvt_h_wu,
    fcvt_s_h,
    fcvt_w_h,
    fcvt_wu_h,
    fdiv_h,
    feq_h,
    fle_h,
    flh,
    flt_h,
    fmadd_h,
    fmax_h,
    fmin_h,
    fmsub_h,
    fmul_h,
    fmv_h_x,
    fmv_x_h,
    fnmadd_h,
    fnmsub_h,
    fsgnj_h,
    fsgnjn_h,
    fsgnjx_h,
    fsh,
    fsqrt_h,
    fsub_h,
  };
}
namespace rv_zicbo {
  const InstructionTemplate cbo_clean = InstructionTemplate("cbo_clean", 0x10200fU, {Args::rs1, });
  const InstructionTemplate cbo_flush = InstructionTemplate("cbo_flush", 0x20200fU, {Args::rs1, });
  const InstructionTemplate cbo_inval = InstructionTemplate("cbo_inval", 0x200fU, {Args::rs1, });
  const InstructionTemplate cbo_zero = InstructionTemplate("cbo_zero", 0x40200fU, {Args::rs1, });
  const std::array<InstructionTemplate, 4> all = {
    cbo_clean,
    cbo_flush,
    cbo_inval,
    cbo_zero,
  };
}
namespace rv_zicsr {
  const InstructionTemplate csrrc = InstructionTemplate("csrrc", 0x3073U, {Args::rd, Args::rs1, Args::csr, });
  const InstructionTemplate csrrci = InstructionTemplate("csrrci", 0x7073U, {Args::rd, Args::csr, Args::zimm, });
  const InstructionTemplate csrrs = InstructionTemplate("csrrs", 0x2073U, {Args::rd, Args::rs1, Args::csr, });
  const InstructionTemplate csrrsi = InstructionTemplate("csrrsi", 0x6073U, {Args::rd, Args::csr, Args::zimm, });
  const InstructionTemplate csrrw = InstructionTemplate("csrrw", 0x1073U, {Args::rd, Args::rs1, Args::csr, });
  const InstructionTemplate csrrwi = InstructionTemplate("csrrwi", 0x5073U, {Args::rd, Args::csr, Args::zimm, });
  const std::array<InstructionTemplate, 6> all = {
    csrrc,
    csrrci,
    csrrs,
    csrrsi,
    csrrw,
    csrrwi,
  };
}
namespace rv_zifencei {
  const InstructionTemplate fence_i = InstructionTemplate("fence_i", 0x100fU, {Args::imm12, Args::rs1, Args::rd, });
  const std::array<InstructionTemplate, 1> all = {
    fence_i,
  };
}
namespace rv_zk {
  const InstructionTemplate andn = InstructionTemplate("andn", 0x40007033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate clmul = InstructionTemplate("clmul", 0xa001033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate clmulh = InstructionTemplate("clmulh", 0xa003033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate orn = InstructionTemplate("orn", 0x40006033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate pack = InstructionTemplate("pack", 0x8004033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate packh = InstructionTemplate("packh", 0x8007033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate rol = InstructionTemplate("rol", 0x60001033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate ror = InstructionTemplate("ror", 0x60005033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate sha256sig0 = InstructionTemplate("sha256sig0", 0x10201013U, {Args::rd, Args::rs1, });
  const InstructionTemplate sha256sig1 = InstructionTemplate("sha256sig1", 0x10301013U, {Args::rd, Args::rs1, });
  const InstructionTemplate sha256sum0 = InstructionTemplate("sha256sum0", 0x10001013U, {Args::rd, Args::rs1, });
  const InstructionTemplate sha256sum1 = InstructionTemplate("sha256sum1", 0x10101013U, {Args::rd, Args::rs1, });
  const InstructionTemplate xnor = InstructionTemplate("xnor", 0x40004033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate xperm4 = InstructionTemplate("xperm4", 0x28002033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate xperm8 = InstructionTemplate("xperm8", 0x28004033U, {Args::rd, Args::rs1, Args::rs2, });
  const std::array<InstructionTemplate, 15> all = {
    andn,
    clmul,
    clmulh,
    orn,
    pack,
    packh,
    rol,
    ror,
    sha256sig0,
    sha256sig1,
    sha256sum0,
    sha256sum1,
    xnor,
    xperm4,
    xperm8,
  };
}
namespace rv_zkn {
  const InstructionTemplate andn = InstructionTemplate("andn", 0x40007033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate clmul = InstructionTemplate("clmul", 0xa001033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate clmulh = InstructionTemplate("clmulh", 0xa003033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate orn = InstructionTemplate("orn", 0x40006033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate pack = InstructionTemplate("pack", 0x8004033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate packh = InstructionTemplate("packh", 0x8007033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate rol = InstructionTemplate("rol", 0x60001033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate ror = InstructionTemplate("ror", 0x60005033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate sha256sig0 = InstructionTemplate("sha256sig0", 0x10201013U, {Args::rd, Args::rs1, });
  const InstructionTemplate sha256sig1 = InstructionTemplate("sha256sig1", 0x10301013U, {Args::rd, Args::rs1, });
  const InstructionTemplate sha256sum0 = InstructionTemplate("sha256sum0", 0x10001013U, {Args::rd, Args::rs1, });
  const InstructionTemplate sha256sum1 = InstructionTemplate("sha256sum1", 0x10101013U, {Args::rd, Args::rs1, });
  const InstructionTemplate xnor = InstructionTemplate("xnor", 0x40004033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate xperm4 = InstructionTemplate("xperm4", 0x28002033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate xperm8 = InstructionTemplate("xperm8", 0x28004033U, {Args::rd, Args::rs1, Args::rs2, });
  const std::array<InstructionTemplate, 15> all = {
    andn,
    clmul,
    clmulh,
    orn,
    pack,
    packh,
    rol,
    ror,
    sha256sig0,
    sha256sig1,
    sha256sum0,
    sha256sum1,
    xnor,
    xperm4,
    xperm8,
  };
}
namespace rv_zknh {
  const InstructionTemplate sha256sig0 = InstructionTemplate("sha256sig0", 0x10201013U, {Args::rd, Args::rs1, });
  const InstructionTemplate sha256sig1 = InstructionTemplate("sha256sig1", 0x10301013U, {Args::rd, Args::rs1, });
  const InstructionTemplate sha256sum0 = InstructionTemplate("sha256sum0", 0x10001013U, {Args::rd, Args::rs1, });
  const InstructionTemplate sha256sum1 = InstructionTemplate("sha256sum1", 0x10101013U, {Args::rd, Args::rs1, });
  const std::array<InstructionTemplate, 4> all = {
    sha256sig0,
    sha256sig1,
    sha256sum0,
    sha256sum1,
  };
}
namespace rv_zks {
  const InstructionTemplate andn = InstructionTemplate("andn", 0x40007033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate brev8 = InstructionTemplate("brev8", 0x68705013U, {Args::rd, Args::rs1, });
  const InstructionTemplate clmul = InstructionTemplate("clmul", 0xa001033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate clmulh = InstructionTemplate("clmulh", 0xa003033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate orn = InstructionTemplate("orn", 0x40006033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate pack = InstructionTemplate("pack", 0x8004033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate packh = InstructionTemplate("packh", 0x8007033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate rol = InstructionTemplate("rol", 0x60001033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate ror = InstructionTemplate("ror", 0x60005033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate sm3p0 = InstructionTemplate("sm3p0", 0x10801013U, {Args::rd, Args::rs1, });
  const InstructionTemplate sm3p1 = InstructionTemplate("sm3p1", 0x10901013U, {Args::rd, Args::rs1, });
  const InstructionTemplate sm4ed = InstructionTemplate("sm4ed", 0x30000033U, {Args::rd, Args::rs1, Args::rs2, Args::bs, });
  const InstructionTemplate sm4ks = InstructionTemplate("sm4ks", 0x34000033U, {Args::rd, Args::rs1, Args::rs2, Args::bs, });
  const InstructionTemplate xnor = InstructionTemplate("xnor", 0x40004033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate xperm4 = InstructionTemplate("xperm4", 0x28002033U, {Args::rd, Args::rs1, Args::rs2, });
  const InstructionTemplate xperm8 = InstructionTemplate("xperm8", 0x28004033U, {Args::rd, Args::rs1, Args::rs2, });
  const std::array<InstructionTemplate, 16> all = {
    andn,
    brev8,
    clmul,
    clmulh,
    orn,
    pack,
    packh,
    rol,
    ror,
    sm3p0,
    sm3p1,
    sm4ed,
    sm4ks,
    xnor,
    xperm4,
    xperm8,
  };
}
namespace rv_zksed {
  const InstructionTemplate sm4ed = InstructionTemplate("sm4ed", 0x30000033U, {Args::rd, Args::rs1, Args::rs2, Args::bs, });
  const InstructionTemplate sm4ks = InstructionTemplate("sm4ks", 0x34000033U, {Args::rd, Args::rs1, Args::rs2, Args::bs, });
  const std::array<InstructionTemplate, 2> all = {
    sm4ed,
    sm4ks,
  };
}
namespace rv_zksh {
  const InstructionTemplate sm3p0 = InstructionTemplate("sm3p0", 0x10801013U, {Args::rd, Args::rs1, });
  const InstructionTemplate sm3p1 = InstructionTemplate("sm3p1", 0x10901013U, {Args::rd, Args::rs1, });
  const std::array<InstructionTemplate, 2> all = {
    sm3p0,
    sm3p1,
  };
}
} // namespace RISCV

#pragma once
#include <array>
#include "CppPrefix.h"
#include <vector>

namespace RISCV {
namespace Args {
  const Argument rd = Argument(11, 7);
  const Argument rt = Argument(19, 15);
  const Argument rs1 = Argument(19, 15);
  const Argument rs2 = Argument(24, 20);
  const Argument rs3 = Argument(31, 27);
  const Argument aqrl = Argument(26, 25);
  const Argument aq = Argument(26, 26);
  const Argument rl = Argument(25, 25);
  const Argument fm = Argument(31, 28);
  const Argument pred = Argument(27, 24);
  const Argument succ = Argument(23, 20);
  const Argument rm = Argument(14, 12);
  const Argument funct3 = Argument(14, 12);
  const Argument funct2 = Argument(26, 25);
  const Argument imm20 = Argument(31, 12);
  const Argument jimm20 = Argument(31, 12);
  const Argument imm12 = Argument(31, 20);
  const Argument csr = Argument(31, 20);
  const Argument imm12hi = Argument(31, 25);
  const Argument bimm12hi = Argument(31, 25);
  const Argument imm12lo = Argument(11, 7);
  const Argument bimm12lo = Argument(11, 7);
  const Argument zimm = Argument(19, 15);
  const Argument shamtq = Argument(26, 20);
  const Argument shamtw = Argument(24, 20);
  const Argument shamtw4 = Argument(23, 20);
  const Argument shamtd = Argument(25, 20);
  const Argument bs = Argument(31, 30);
  const Argument rnum = Argument(23, 20);
  const Argument rc = Argument(29, 25);
  const Argument imm2 = Argument(21, 20);
  const Argument imm3 = Argument(22, 20);
  const Argument imm4 = Argument(23, 20);
  const Argument imm5 = Argument(24, 20);
  const Argument imm6 = Argument(25, 20);
  const Argument opcode = Argument(6, 0);
  const Argument funct7 = Argument(31, 25);
  const Argument vd = Argument(11, 7);
  const Argument vs3 = Argument(11, 7);
  const Argument vs1 = Argument(19, 15);
  const Argument vs2 = Argument(24, 20);
  const Argument vm = Argument(25, 25);
  const Argument wd = Argument(26, 26);
  const Argument amoop = Argument(31, 27);
  const Argument nf = Argument(31, 29);
  const Argument simm5 = Argument(19, 15);
  const Argument zimm10 = Argument(29, 20);
  const Argument zimm11 = Argument(30, 20);
  const Argument c_nzuimm10 = Argument(12, 5);
  const Argument c_uimm7lo = Argument(6, 5);
  const Argument c_uimm7hi = Argument(12, 10);
  const Argument c_uimm8lo = Argument(6, 5);
  const Argument c_uimm8hi = Argument(12, 10);
  const Argument c_uimm9lo = Argument(6, 5);
  const Argument c_uimm9hi = Argument(12, 10);
  const Argument c_nzimm6lo = Argument(6, 2);
  const Argument c_nzimm6hi = Argument(12, 12);
  const Argument c_imm6lo = Argument(6, 2);
  const Argument c_imm6hi = Argument(12, 12);
  const Argument c_nzimm10hi = Argument(12, 12);
  const Argument c_nzimm10lo = Argument(6, 2);
  const Argument c_nzimm18hi = Argument(12, 12);
  const Argument c_nzimm18lo = Argument(6, 2);
  const Argument c_imm12 = Argument(12, 2);
  const Argument c_bimm9lo = Argument(6, 2);
  const Argument c_bimm9hi = Argument(12, 10);
  const Argument c_nzuimm5 = Argument(6, 2);
  const Argument c_nzuimm6lo = Argument(6, 2);
  const Argument c_nzuimm6hi = Argument(12, 12);
  const Argument c_uimm8splo = Argument(6, 2);
  const Argument c_uimm8sphi = Argument(12, 12);
  const Argument c_uimm8sp_s = Argument(12, 7);
  const Argument c_uimm10splo = Argument(6, 2);
  const Argument c_uimm10sphi = Argument(12, 12);
  const Argument c_uimm9splo = Argument(6, 2);
  const Argument c_uimm9sphi = Argument(12, 12);
  const Argument c_uimm10sp_s = Argument(12, 7);
  const Argument c_uimm9sp_s = Argument(12, 7);
  const Argument c_uimm2 = Argument(6, 5);
  const Argument c_uimm1 = Argument(5, 5);
  const Argument c_rlist = Argument(7, 4);
  const Argument c_spimm = Argument(3, 2);
  const Argument c_index = Argument(9, 2);
  const Argument rs1_p = Argument(9, 7);
  const Argument rs2_p = Argument(4, 2);
  const Argument rd_p = Argument(4, 2);
  const Argument rd_rs1_n0 = Argument(11, 7);
  const Argument rd_rs1_p = Argument(9, 7);
  const Argument rd_rs1 = Argument(11, 7);
  const Argument rd_n2 = Argument(11, 7);
  const Argument rd_n0 = Argument(11, 7);
  const Argument rs1_n0 = Argument(11, 7);
  const Argument c_rs2_n0 = Argument(6, 2);
  const Argument c_rs1_n0 = Argument(11, 7);
  const Argument c_rs2 = Argument(6, 2);
  const Argument c_sreg1 = Argument(9, 7);
  const Argument c_sreg2 = Argument(4, 2);
} // namespace Args

namespace rv_a {
  const Instruction amoadd_w = Instruction("amoadd_w", 0x202fU, {Args::rd, Args::rs1, Args::rs2, Args::aq, Args::rl, });
  const Instruction amoand_w = Instruction("amoand_w", 0x6000202fU, {Args::rd, Args::rs1, Args::rs2, Args::aq, Args::rl, });
  const Instruction amomax_w = Instruction("amomax_w", 0xa000202fU, {Args::rd, Args::rs1, Args::rs2, Args::aq, Args::rl, });
  const Instruction amomaxu_w = Instruction("amomaxu_w", 0xe000202fU, {Args::rd, Args::rs1, Args::rs2, Args::aq, Args::rl, });
  const Instruction amomin_w = Instruction("amomin_w", 0x8000202fU, {Args::rd, Args::rs1, Args::rs2, Args::aq, Args::rl, });
  const Instruction amominu_w = Instruction("amominu_w", 0xc000202fU, {Args::rd, Args::rs1, Args::rs2, Args::aq, Args::rl, });
  const Instruction amoor_w = Instruction("amoor_w", 0x4000202fU, {Args::rd, Args::rs1, Args::rs2, Args::aq, Args::rl, });
  const Instruction amoswap_w = Instruction("amoswap_w", 0x800202fU, {Args::rd, Args::rs1, Args::rs2, Args::aq, Args::rl, });
  const Instruction amoxor_w = Instruction("amoxor_w", 0x2000202fU, {Args::rd, Args::rs1, Args::rs2, Args::aq, Args::rl, });
  const Instruction lr_w = Instruction("lr_w", 0x1000202fU, {Args::rd, Args::rs1, Args::aq, Args::rl, });
  const Instruction sc_w = Instruction("sc_w", 0x1800202fU, {Args::rd, Args::rs1, Args::rs2, Args::aq, Args::rl, });
  const std::array<Instruction, 11> all = {
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
  const Instruction c_add = Instruction("c_add", 0x9002U, {Args::rd_rs1, Args::c_rs2_n0, });
  const Instruction c_addi = Instruction("c_addi", 0x1U, {Args::rd_rs1_n0, Args::c_nzimm6lo, Args::c_nzimm6hi, });
  const Instruction c_addi16sp = Instruction("c_addi16sp", 0x6101U, {Args::c_nzimm10hi, Args::c_nzimm10lo, });
  const Instruction c_addi4spn = Instruction("c_addi4spn", 0x0U, {Args::rd_p, Args::c_nzuimm10, });
  const Instruction c_and = Instruction("c_and", 0x8c61U, {Args::rd_rs1_p, Args::rs2_p, });
  const Instruction c_andi = Instruction("c_andi", 0x8801U, {Args::rd_rs1_p, Args::c_imm6hi, Args::c_imm6lo, });
  const Instruction c_beqz = Instruction("c_beqz", 0xc001U, {Args::rs1_p, Args::c_bimm9lo, Args::c_bimm9hi, });
  const Instruction c_bnez = Instruction("c_bnez", 0xe001U, {Args::rs1_p, Args::c_bimm9lo, Args::c_bimm9hi, });
  const Instruction c_ebreak = Instruction("c_ebreak", 0x9002U, {});
  const Instruction c_j = Instruction("c_j", 0xa001U, {Args::c_imm12, });
  const Instruction c_jalr = Instruction("c_jalr", 0x9002U, {Args::c_rs1_n0, });
  const Instruction c_jr = Instruction("c_jr", 0x8002U, {Args::rs1_n0, });
  const Instruction c_li = Instruction("c_li", 0x4001U, {Args::rd, Args::c_imm6lo, Args::c_imm6hi, });
  const Instruction c_lui = Instruction("c_lui", 0x6001U, {Args::rd_n2, Args::c_nzimm18hi, Args::c_nzimm18lo, });
  const Instruction c_lw = Instruction("c_lw", 0x4000U, {Args::rd_p, Args::rs1_p, Args::c_uimm7lo, Args::c_uimm7hi, });
  const Instruction c_lwsp = Instruction("c_lwsp", 0x4002U, {Args::rd_n0, Args::c_uimm8sphi, Args::c_uimm8splo, });
  const Instruction c_mv = Instruction("c_mv", 0x8002U, {Args::rd, Args::c_rs2_n0, });
  const Instruction c_nop = Instruction("c_nop", 0x1U, {Args::c_nzimm6hi, Args::c_nzimm6lo, });
  const Instruction c_or = Instruction("c_or", 0x8c41U, {Args::rd_rs1_p, Args::rs2_p, });
  const Instruction c_sub = Instruction("c_sub", 0x8c01U, {Args::rd_rs1_p, Args::rs2_p, });
  const Instruction c_sw = Instruction("c_sw", 0xc000U, {Args::rs1_p, Args::rs2_p, Args::c_uimm7lo, Args::c_uimm7hi, });
  const Instruction c_swsp = Instruction("c_swsp", 0xc002U, {Args::c_rs2, Args::c_uimm8sp_s, });
  const Instruction c_xor = Instruction("c_xor", 0x8c21U, {Args::rd_rs1_p, Args::rs2_p, });
  const std::array<Instruction, 23> all = {
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
  const Instruction c_fld = Instruction("c_fld", 0x2000U, {Args::rd_p, Args::rs1_p, Args::c_uimm8lo, Args::c_uimm8hi, });
  const Instruction c_fldsp = Instruction("c_fldsp", 0x2002U, {Args::rd, Args::c_uimm9sphi, Args::c_uimm9splo, });
  const Instruction c_fsd = Instruction("c_fsd", 0xa000U, {Args::rs1_p, Args::rs2_p, Args::c_uimm8lo, Args::c_uimm8hi, });
  const Instruction c_fsdsp = Instruction("c_fsdsp", 0xa002U, {Args::c_rs2, Args::c_uimm9sp_s, });
  const std::array<Instruction, 4> all = {
    c_fld,
    c_fldsp,
    c_fsd,
    c_fsdsp,
  };
}
namespace rv_d {
  const Instruction fadd_d = Instruction("fadd_d", 0x2000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const Instruction fclass_d = Instruction("fclass_d", 0xe2001053U, {Args::rd, Args::rs1, });
  const Instruction fcvt_d_s = Instruction("fcvt_d_s", 0x42000053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fcvt_d_w = Instruction("fcvt_d_w", 0xd2000053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fcvt_d_wu = Instruction("fcvt_d_wu", 0xd2100053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fcvt_s_d = Instruction("fcvt_s_d", 0x40100053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fcvt_w_d = Instruction("fcvt_w_d", 0xc2000053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fcvt_wu_d = Instruction("fcvt_wu_d", 0xc2100053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fdiv_d = Instruction("fdiv_d", 0x1a000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const Instruction feq_d = Instruction("feq_d", 0xa2002053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction fld = Instruction("fld", 0x3007U, {Args::rd, Args::rs1, Args::imm12, });
  const Instruction fle_d = Instruction("fle_d", 0xa2000053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction flt_d = Instruction("flt_d", 0xa2001053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction fmadd_d = Instruction("fmadd_d", 0x2000043U, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const Instruction fmax_d = Instruction("fmax_d", 0x2a001053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction fmin_d = Instruction("fmin_d", 0x2a000053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction fmsub_d = Instruction("fmsub_d", 0x2000047U, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const Instruction fmul_d = Instruction("fmul_d", 0x12000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const Instruction fnmadd_d = Instruction("fnmadd_d", 0x200004fU, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const Instruction fnmsub_d = Instruction("fnmsub_d", 0x200004bU, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const Instruction fsd = Instruction("fsd", 0x3027U, {Args::imm12hi, Args::rs1, Args::rs2, Args::imm12lo, });
  const Instruction fsgnj_d = Instruction("fsgnj_d", 0x22000053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction fsgnjn_d = Instruction("fsgnjn_d", 0x22001053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction fsgnjx_d = Instruction("fsgnjx_d", 0x22002053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction fsqrt_d = Instruction("fsqrt_d", 0x5a000053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fsub_d = Instruction("fsub_d", 0xa000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const std::array<Instruction, 26> all = {
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
  const Instruction fcvt_d_h = Instruction("fcvt_d_h", 0x42200053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fcvt_h_d = Instruction("fcvt_h_d", 0x44100053U, {Args::rd, Args::rs1, Args::rm, });
  const std::array<Instruction, 2> all = {
    fcvt_d_h,
    fcvt_h_d,
  };
}
namespace rv_f {
  const Instruction fadd_s = Instruction("fadd_s", 0x53U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const Instruction fclass_s = Instruction("fclass_s", 0xe0001053U, {Args::rd, Args::rs1, });
  const Instruction fcvt_s_w = Instruction("fcvt_s_w", 0xd0000053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fcvt_s_wu = Instruction("fcvt_s_wu", 0xd0100053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fcvt_w_s = Instruction("fcvt_w_s", 0xc0000053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fcvt_wu_s = Instruction("fcvt_wu_s", 0xc0100053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fdiv_s = Instruction("fdiv_s", 0x18000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const Instruction feq_s = Instruction("feq_s", 0xa0002053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction fle_s = Instruction("fle_s", 0xa0000053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction flt_s = Instruction("flt_s", 0xa0001053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction flw = Instruction("flw", 0x2007U, {Args::rd, Args::rs1, Args::imm12, });
  const Instruction fmadd_s = Instruction("fmadd_s", 0x43U, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const Instruction fmax_s = Instruction("fmax_s", 0x28001053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction fmin_s = Instruction("fmin_s", 0x28000053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction fmsub_s = Instruction("fmsub_s", 0x47U, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const Instruction fmul_s = Instruction("fmul_s", 0x10000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const Instruction fmv_w_x = Instruction("fmv_w_x", 0xf0000053U, {Args::rd, Args::rs1, });
  const Instruction fmv_x_w = Instruction("fmv_x_w", 0xe0000053U, {Args::rd, Args::rs1, });
  const Instruction fnmadd_s = Instruction("fnmadd_s", 0x4fU, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const Instruction fnmsub_s = Instruction("fnmsub_s", 0x4bU, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const Instruction fsgnj_s = Instruction("fsgnj_s", 0x20000053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction fsgnjn_s = Instruction("fsgnjn_s", 0x20001053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction fsgnjx_s = Instruction("fsgnjx_s", 0x20002053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction fsqrt_s = Instruction("fsqrt_s", 0x58000053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fsub_s = Instruction("fsub_s", 0x8000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const Instruction fsw = Instruction("fsw", 0x2027U, {Args::imm12hi, Args::rs1, Args::rs2, Args::imm12lo, });
  const std::array<Instruction, 26> all = {
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
  const Instruction hfence_gvma = Instruction("hfence_gvma", 0x62000073U, {Args::rs1, Args::rs2, });
  const Instruction hfence_vvma = Instruction("hfence_vvma", 0x22000073U, {Args::rs1, Args::rs2, });
  const Instruction hlv_b = Instruction("hlv_b", 0x60004073U, {Args::rd, Args::rs1, });
  const Instruction hlv_bu = Instruction("hlv_bu", 0x60104073U, {Args::rd, Args::rs1, });
  const Instruction hlv_h = Instruction("hlv_h", 0x64004073U, {Args::rd, Args::rs1, });
  const Instruction hlv_hu = Instruction("hlv_hu", 0x64104073U, {Args::rd, Args::rs1, });
  const Instruction hlv_w = Instruction("hlv_w", 0x68004073U, {Args::rd, Args::rs1, });
  const Instruction hlvx_hu = Instruction("hlvx_hu", 0x64304073U, {Args::rd, Args::rs1, });
  const Instruction hlvx_wu = Instruction("hlvx_wu", 0x68304073U, {Args::rd, Args::rs1, });
  const Instruction hsv_b = Instruction("hsv_b", 0x62004073U, {Args::rs1, Args::rs2, });
  const Instruction hsv_h = Instruction("hsv_h", 0x66004073U, {Args::rs1, Args::rs2, });
  const Instruction hsv_w = Instruction("hsv_w", 0x6a004073U, {Args::rs1, Args::rs2, });
  const std::array<Instruction, 12> all = {
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
  const Instruction add = Instruction("add", 0x33U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction addi = Instruction("addi", 0x13U, {Args::rd, Args::rs1, Args::imm12, });
  const Instruction and_ = Instruction("and", 0x7033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction andi = Instruction("andi", 0x7013U, {Args::rd, Args::rs1, Args::imm12, });
  const Instruction auipc = Instruction("auipc", 0x17U, {Args::rd, Args::imm20, });
  const Instruction beq = Instruction("beq", 0x63U, {Args::bimm12hi, Args::rs1, Args::rs2, Args::bimm12lo, });
  const Instruction bge = Instruction("bge", 0x5063U, {Args::bimm12hi, Args::rs1, Args::rs2, Args::bimm12lo, });
  const Instruction bgeu = Instruction("bgeu", 0x7063U, {Args::bimm12hi, Args::rs1, Args::rs2, Args::bimm12lo, });
  const Instruction blt = Instruction("blt", 0x4063U, {Args::bimm12hi, Args::rs1, Args::rs2, Args::bimm12lo, });
  const Instruction bltu = Instruction("bltu", 0x6063U, {Args::bimm12hi, Args::rs1, Args::rs2, Args::bimm12lo, });
  const Instruction bne = Instruction("bne", 0x1063U, {Args::bimm12hi, Args::rs1, Args::rs2, Args::bimm12lo, });
  const Instruction ebreak = Instruction("ebreak", 0x100073U, {});
  const Instruction ecall = Instruction("ecall", 0x73U, {});
  const Instruction fence = Instruction("fence", 0xfU, {Args::fm, Args::pred, Args::succ, Args::rs1, Args::rd, });
  const Instruction jal = Instruction("jal", 0x6fU, {Args::rd, Args::jimm20, });
  const Instruction jalr = Instruction("jalr", 0x67U, {Args::rd, Args::rs1, Args::imm12, });
  const Instruction lb = Instruction("lb", 0x3U, {Args::rd, Args::rs1, Args::imm12, });
  const Instruction lbu = Instruction("lbu", 0x4003U, {Args::rd, Args::rs1, Args::imm12, });
  const Instruction lh = Instruction("lh", 0x1003U, {Args::rd, Args::rs1, Args::imm12, });
  const Instruction lhu = Instruction("lhu", 0x5003U, {Args::rd, Args::rs1, Args::imm12, });
  const Instruction lui = Instruction("lui", 0x37U, {Args::rd, Args::imm20, });
  const Instruction lw = Instruction("lw", 0x2003U, {Args::rd, Args::rs1, Args::imm12, });
  const Instruction or_ = Instruction("or", 0x6033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction ori = Instruction("ori", 0x6013U, {Args::rd, Args::rs1, Args::imm12, });
  const Instruction sb = Instruction("sb", 0x23U, {Args::imm12hi, Args::rs1, Args::rs2, Args::imm12lo, });
  const Instruction sh = Instruction("sh", 0x1023U, {Args::imm12hi, Args::rs1, Args::rs2, Args::imm12lo, });
  const Instruction sll = Instruction("sll", 0x1033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction slt = Instruction("slt", 0x2033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction slti = Instruction("slti", 0x2013U, {Args::rd, Args::rs1, Args::imm12, });
  const Instruction sltiu = Instruction("sltiu", 0x3013U, {Args::rd, Args::rs1, Args::imm12, });
  const Instruction sltu = Instruction("sltu", 0x3033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction sra = Instruction("sra", 0x40005033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction srl = Instruction("srl", 0x5033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction sub = Instruction("sub", 0x40000033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction sw = Instruction("sw", 0x2023U, {Args::imm12hi, Args::rs1, Args::rs2, Args::imm12lo, });
  const Instruction xor_ = Instruction("xor", 0x4033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction xori = Instruction("xori", 0x4013U, {Args::rd, Args::rs1, Args::imm12, });
  const std::array<Instruction, 37> all = {
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
  const Instruction div = Instruction("div", 0x2004033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction divu = Instruction("divu", 0x2005033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction mul = Instruction("mul", 0x2000033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction mulh = Instruction("mulh", 0x2001033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction mulhsu = Instruction("mulhsu", 0x2002033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction mulhu = Instruction("mulhu", 0x2003033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction rem = Instruction("rem", 0x2006033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction remu = Instruction("remu", 0x2007033U, {Args::rd, Args::rs1, Args::rs2, });
  const std::array<Instruction, 8> all = {
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
  const Instruction fadd_q = Instruction("fadd_q", 0x6000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const Instruction fclass_q = Instruction("fclass_q", 0xe6001053U, {Args::rd, Args::rs1, });
  const Instruction fcvt_d_q = Instruction("fcvt_d_q", 0x42300053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fcvt_q_d = Instruction("fcvt_q_d", 0x46100053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fcvt_q_s = Instruction("fcvt_q_s", 0x46000053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fcvt_q_w = Instruction("fcvt_q_w", 0xd6000053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fcvt_q_wu = Instruction("fcvt_q_wu", 0xd6100053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fcvt_s_q = Instruction("fcvt_s_q", 0x40300053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fcvt_w_q = Instruction("fcvt_w_q", 0xc6000053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fcvt_wu_q = Instruction("fcvt_wu_q", 0xc6100053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fdiv_q = Instruction("fdiv_q", 0x1e000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const Instruction feq_q = Instruction("feq_q", 0xa6002053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction fle_q = Instruction("fle_q", 0xa6000053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction flq = Instruction("flq", 0x4007U, {Args::rd, Args::rs1, Args::imm12, });
  const Instruction flt_q = Instruction("flt_q", 0xa6001053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction fmadd_q = Instruction("fmadd_q", 0x6000043U, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const Instruction fmax_q = Instruction("fmax_q", 0x2e001053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction fmin_q = Instruction("fmin_q", 0x2e000053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction fmsub_q = Instruction("fmsub_q", 0x6000047U, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const Instruction fmul_q = Instruction("fmul_q", 0x16000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const Instruction fnmadd_q = Instruction("fnmadd_q", 0x600004fU, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const Instruction fnmsub_q = Instruction("fnmsub_q", 0x600004bU, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const Instruction fsgnj_q = Instruction("fsgnj_q", 0x26000053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction fsgnjn_q = Instruction("fsgnjn_q", 0x26001053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction fsgnjx_q = Instruction("fsgnjx_q", 0x26002053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction fsq = Instruction("fsq", 0x4027U, {Args::imm12hi, Args::rs1, Args::rs2, Args::imm12lo, });
  const Instruction fsqrt_q = Instruction("fsqrt_q", 0x5e000053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fsub_q = Instruction("fsub_q", 0xe000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const std::array<Instruction, 28> all = {
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
  const Instruction fcvt_h_q = Instruction("fcvt_h_q", 0x44300053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fcvt_q_h = Instruction("fcvt_q_h", 0x46200053U, {Args::rd, Args::rs1, Args::rm, });
  const std::array<Instruction, 2> all = {
    fcvt_h_q,
    fcvt_q_h,
  };
}
namespace rv_s {
  const Instruction sfence_vma = Instruction("sfence_vma", 0x12000073U, {Args::rs1, Args::rs2, });
  const Instruction sret = Instruction("sret", 0x10200073U, {});
  const std::array<Instruction, 2> all = {
    sfence_vma,
    sret,
  };
}
namespace rv_svinval {
  const Instruction hinval_gvma = Instruction("hinval_gvma", 0x66000073U, {Args::rs1, Args::rs2, });
  const Instruction hinval_vvma = Instruction("hinval_vvma", 0x26000073U, {Args::rs1, Args::rs2, });
  const Instruction sfence_inval_ir = Instruction("sfence_inval_ir", 0x18100073U, {});
  const Instruction sfence_w_inval = Instruction("sfence_w_inval", 0x18000073U, {});
  const Instruction sinval_vma = Instruction("sinval_vma", 0x16000073U, {Args::rs1, Args::rs2, });
  const std::array<Instruction, 5> all = {
    hinval_gvma,
    hinval_vvma,
    sfence_inval_ir,
    sfence_w_inval,
    sinval_vma,
  };
}
namespace rv_system {
  const Instruction dret = Instruction("dret", 0x7b200073U, {});
  const Instruction mret = Instruction("mret", 0x30200073U, {});
  const Instruction wfi = Instruction("wfi", 0x10500073U, {});
  const std::array<Instruction, 3> all = {
    dret,
    mret,
    wfi,
  };
}
namespace rv_v {
  const Instruction vaadd_vv = Instruction("vaadd_vv", 0x24002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vaadd_vx = Instruction("vaadd_vx", 0x24006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vaaddu_vv = Instruction("vaaddu_vv", 0x20002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vaaddu_vx = Instruction("vaaddu_vx", 0x20006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vadc_vim = Instruction("vadc_vim", 0x40003057U, {Args::vs2, Args::simm5, Args::vd, });
  const Instruction vadc_vvm = Instruction("vadc_vvm", 0x40000057U, {Args::vs2, Args::vs1, Args::vd, });
  const Instruction vadc_vxm = Instruction("vadc_vxm", 0x40004057U, {Args::vs2, Args::rs1, Args::vd, });
  const Instruction vadd_vi = Instruction("vadd_vi", 0x3057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const Instruction vadd_vv = Instruction("vadd_vv", 0x57U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vadd_vx = Instruction("vadd_vx", 0x4057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamoaddei16_v = Instruction("vamoaddei16_v", 0x502fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamoaddei32_v = Instruction("vamoaddei32_v", 0x602fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamoaddei64_v = Instruction("vamoaddei64_v", 0x702fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamoaddei8_v = Instruction("vamoaddei8_v", 0x2fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamoandei16_v = Instruction("vamoandei16_v", 0x6000502fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamoandei32_v = Instruction("vamoandei32_v", 0x6000602fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamoandei64_v = Instruction("vamoandei64_v", 0x6000702fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamoandei8_v = Instruction("vamoandei8_v", 0x6000002fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamomaxei16_v = Instruction("vamomaxei16_v", 0xa000502fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamomaxei32_v = Instruction("vamomaxei32_v", 0xa000602fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamomaxei64_v = Instruction("vamomaxei64_v", 0xa000702fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamomaxei8_v = Instruction("vamomaxei8_v", 0xa000002fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamomaxuei16_v = Instruction("vamomaxuei16_v", 0xe000502fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamomaxuei32_v = Instruction("vamomaxuei32_v", 0xe000602fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamomaxuei64_v = Instruction("vamomaxuei64_v", 0xe000702fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamomaxuei8_v = Instruction("vamomaxuei8_v", 0xe000002fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamominei16_v = Instruction("vamominei16_v", 0x8000502fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamominei32_v = Instruction("vamominei32_v", 0x8000602fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamominei64_v = Instruction("vamominei64_v", 0x8000702fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamominei8_v = Instruction("vamominei8_v", 0x8000002fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamominuei16_v = Instruction("vamominuei16_v", 0xc000502fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamominuei32_v = Instruction("vamominuei32_v", 0xc000602fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamominuei64_v = Instruction("vamominuei64_v", 0xc000702fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamominuei8_v = Instruction("vamominuei8_v", 0xc000002fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamoorei16_v = Instruction("vamoorei16_v", 0x4000502fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamoorei32_v = Instruction("vamoorei32_v", 0x4000602fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamoorei64_v = Instruction("vamoorei64_v", 0x4000702fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamoorei8_v = Instruction("vamoorei8_v", 0x4000002fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamoswapei16_v = Instruction("vamoswapei16_v", 0x800502fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamoswapei32_v = Instruction("vamoswapei32_v", 0x800602fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamoswapei64_v = Instruction("vamoswapei64_v", 0x800702fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamoswapei8_v = Instruction("vamoswapei8_v", 0x800002fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamoxorei16_v = Instruction("vamoxorei16_v", 0x2000502fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamoxorei32_v = Instruction("vamoxorei32_v", 0x2000602fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamoxorei64_v = Instruction("vamoxorei64_v", 0x2000702fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vamoxorei8_v = Instruction("vamoxorei8_v", 0x2000002fU, {Args::wd, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vand_vi = Instruction("vand_vi", 0x24003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const Instruction vand_vv = Instruction("vand_vv", 0x24000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vand_vx = Instruction("vand_vx", 0x24004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vasub_vv = Instruction("vasub_vv", 0x2c002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vasub_vx = Instruction("vasub_vx", 0x2c006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vasubu_vv = Instruction("vasubu_vv", 0x28002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vasubu_vx = Instruction("vasubu_vx", 0x28006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vcompress_vm = Instruction("vcompress_vm", 0x5e002057U, {Args::vs2, Args::vs1, Args::vd, });
  const Instruction vcpop_m = Instruction("vcpop_m", 0x40082057U, {Args::vm, Args::vs2, Args::rd, });
  const Instruction vdiv_vv = Instruction("vdiv_vv", 0x84002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vdiv_vx = Instruction("vdiv_vx", 0x84006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vdivu_vv = Instruction("vdivu_vv", 0x80002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vdivu_vx = Instruction("vdivu_vx", 0x80006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfadd_vf = Instruction("vfadd_vf", 0x5057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfadd_vv = Instruction("vfadd_vv", 0x1057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfclass_v = Instruction("vfclass_v", 0x4c081057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vfcvt_f_x_v = Instruction("vfcvt_f_x_v", 0x48019057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vfcvt_f_xu_v = Instruction("vfcvt_f_xu_v", 0x48011057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vfcvt_rtz_x_f_v = Instruction("vfcvt_rtz_x_f_v", 0x48039057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vfcvt_rtz_xu_f_v = Instruction("vfcvt_rtz_xu_f_v", 0x48031057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vfcvt_x_f_v = Instruction("vfcvt_x_f_v", 0x48009057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vfcvt_xu_f_v = Instruction("vfcvt_xu_f_v", 0x48001057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vfdiv_vf = Instruction("vfdiv_vf", 0x80005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfdiv_vv = Instruction("vfdiv_vv", 0x80001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfirst_m = Instruction("vfirst_m", 0x4008a057U, {Args::vm, Args::vs2, Args::rd, });
  const Instruction vfmacc_vf = Instruction("vfmacc_vf", 0xb0005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfmacc_vv = Instruction("vfmacc_vv", 0xb0001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfmadd_vf = Instruction("vfmadd_vf", 0xa0005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfmadd_vv = Instruction("vfmadd_vv", 0xa0001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfmax_vf = Instruction("vfmax_vf", 0x18005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfmax_vv = Instruction("vfmax_vv", 0x18001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfmerge_vfm = Instruction("vfmerge_vfm", 0x5c005057U, {Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfmin_vf = Instruction("vfmin_vf", 0x10005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfmin_vv = Instruction("vfmin_vv", 0x10001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfmsac_vf = Instruction("vfmsac_vf", 0xb8005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfmsac_vv = Instruction("vfmsac_vv", 0xb8001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfmsub_vf = Instruction("vfmsub_vf", 0xa8005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfmsub_vv = Instruction("vfmsub_vv", 0xa8001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfmul_vf = Instruction("vfmul_vf", 0x90005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfmul_vv = Instruction("vfmul_vv", 0x90001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfmv_f_s = Instruction("vfmv_f_s", 0x42001057U, {Args::vs2, Args::rd, });
  const Instruction vfmv_s_f = Instruction("vfmv_s_f", 0x42005057U, {Args::rs1, Args::vd, });
  const Instruction vfmv_v_f = Instruction("vfmv_v_f", 0x5e005057U, {Args::rs1, Args::vd, });
  const Instruction vfncvt_f_f_w = Instruction("vfncvt_f_f_w", 0x480a1057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vfncvt_f_x_w = Instruction("vfncvt_f_x_w", 0x48099057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vfncvt_f_xu_w = Instruction("vfncvt_f_xu_w", 0x48091057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vfncvt_rod_f_f_w = Instruction("vfncvt_rod_f_f_w", 0x480a9057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vfncvt_rtz_x_f_w = Instruction("vfncvt_rtz_x_f_w", 0x480b9057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vfncvt_rtz_xu_f_w = Instruction("vfncvt_rtz_xu_f_w", 0x480b1057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vfncvt_x_f_w = Instruction("vfncvt_x_f_w", 0x48089057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vfncvt_xu_f_w = Instruction("vfncvt_xu_f_w", 0x48081057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vfnmacc_vf = Instruction("vfnmacc_vf", 0xb4005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfnmacc_vv = Instruction("vfnmacc_vv", 0xb4001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfnmadd_vf = Instruction("vfnmadd_vf", 0xa4005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfnmadd_vv = Instruction("vfnmadd_vv", 0xa4001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfnmsac_vf = Instruction("vfnmsac_vf", 0xbc005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfnmsac_vv = Instruction("vfnmsac_vv", 0xbc001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfnmsub_vf = Instruction("vfnmsub_vf", 0xac005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfnmsub_vv = Instruction("vfnmsub_vv", 0xac001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfrdiv_vf = Instruction("vfrdiv_vf", 0x84005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfrec7_v = Instruction("vfrec7_v", 0x4c029057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vfredmax_vs = Instruction("vfredmax_vs", 0x1c001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfredmin_vs = Instruction("vfredmin_vs", 0x14001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfredosum_vs = Instruction("vfredosum_vs", 0xc001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfredusum_vs = Instruction("vfredusum_vs", 0x4001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfrsqrt7_v = Instruction("vfrsqrt7_v", 0x4c021057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vfrsub_vf = Instruction("vfrsub_vf", 0x9c005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfsgnj_vf = Instruction("vfsgnj_vf", 0x20005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfsgnj_vv = Instruction("vfsgnj_vv", 0x20001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfsgnjn_vf = Instruction("vfsgnjn_vf", 0x24005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfsgnjn_vv = Instruction("vfsgnjn_vv", 0x24001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfsgnjx_vf = Instruction("vfsgnjx_vf", 0x28005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfsgnjx_vv = Instruction("vfsgnjx_vv", 0x28001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfslide1down_vf = Instruction("vfslide1down_vf", 0x3c005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfslide1up_vf = Instruction("vfslide1up_vf", 0x38005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfsqrt_v = Instruction("vfsqrt_v", 0x4c001057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vfsub_vf = Instruction("vfsub_vf", 0x8005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfsub_vv = Instruction("vfsub_vv", 0x8001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfwadd_vf = Instruction("vfwadd_vf", 0xc0005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfwadd_vv = Instruction("vfwadd_vv", 0xc0001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfwadd_wf = Instruction("vfwadd_wf", 0xd0005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfwadd_wv = Instruction("vfwadd_wv", 0xd0001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfwcvt_f_f_v = Instruction("vfwcvt_f_f_v", 0x48061057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vfwcvt_f_x_v = Instruction("vfwcvt_f_x_v", 0x48059057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vfwcvt_f_xu_v = Instruction("vfwcvt_f_xu_v", 0x48051057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vfwcvt_rtz_x_f_v = Instruction("vfwcvt_rtz_x_f_v", 0x48079057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vfwcvt_rtz_xu_f_v = Instruction("vfwcvt_rtz_xu_f_v", 0x48071057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vfwcvt_x_f_v = Instruction("vfwcvt_x_f_v", 0x48049057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vfwcvt_xu_f_v = Instruction("vfwcvt_xu_f_v", 0x48041057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vfwmacc_vf = Instruction("vfwmacc_vf", 0xf0005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfwmacc_vv = Instruction("vfwmacc_vv", 0xf0001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfwmsac_vf = Instruction("vfwmsac_vf", 0xf8005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfwmsac_vv = Instruction("vfwmsac_vv", 0xf8001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfwmul_vf = Instruction("vfwmul_vf", 0xe0005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfwmul_vv = Instruction("vfwmul_vv", 0xe0001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfwnmacc_vf = Instruction("vfwnmacc_vf", 0xf4005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfwnmacc_vv = Instruction("vfwnmacc_vv", 0xf4001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfwnmsac_vf = Instruction("vfwnmsac_vf", 0xfc005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfwnmsac_vv = Instruction("vfwnmsac_vv", 0xfc001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfwredosum_vs = Instruction("vfwredosum_vs", 0xcc001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfwredusum_vs = Instruction("vfwredusum_vs", 0xc4001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfwsub_vf = Instruction("vfwsub_vf", 0xc8005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfwsub_vv = Instruction("vfwsub_vv", 0xc8001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vfwsub_wf = Instruction("vfwsub_wf", 0xd8005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vfwsub_wv = Instruction("vfwsub_wv", 0xd8001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vid_v = Instruction("vid_v", 0x5008a057U, {Args::vm, Args::vd, });
  const Instruction viota_m = Instruction("viota_m", 0x50082057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vl1re16_v = Instruction("vl1re16_v", 0x2805007U, {Args::rs1, Args::vd, });
  const Instruction vl1re32_v = Instruction("vl1re32_v", 0x2806007U, {Args::rs1, Args::vd, });
  const Instruction vl1re64_v = Instruction("vl1re64_v", 0x2807007U, {Args::rs1, Args::vd, });
  const Instruction vl1re8_v = Instruction("vl1re8_v", 0x2800007U, {Args::rs1, Args::vd, });
  const Instruction vl2re16_v = Instruction("vl2re16_v", 0x22805007U, {Args::rs1, Args::vd, });
  const Instruction vl2re32_v = Instruction("vl2re32_v", 0x22806007U, {Args::rs1, Args::vd, });
  const Instruction vl2re64_v = Instruction("vl2re64_v", 0x22807007U, {Args::rs1, Args::vd, });
  const Instruction vl2re8_v = Instruction("vl2re8_v", 0x22800007U, {Args::rs1, Args::vd, });
  const Instruction vl4re16_v = Instruction("vl4re16_v", 0x62805007U, {Args::rs1, Args::vd, });
  const Instruction vl4re32_v = Instruction("vl4re32_v", 0x62806007U, {Args::rs1, Args::vd, });
  const Instruction vl4re64_v = Instruction("vl4re64_v", 0x62807007U, {Args::rs1, Args::vd, });
  const Instruction vl4re8_v = Instruction("vl4re8_v", 0x62800007U, {Args::rs1, Args::vd, });
  const Instruction vl8re16_v = Instruction("vl8re16_v", 0xe2805007U, {Args::rs1, Args::vd, });
  const Instruction vl8re32_v = Instruction("vl8re32_v", 0xe2806007U, {Args::rs1, Args::vd, });
  const Instruction vl8re64_v = Instruction("vl8re64_v", 0xe2807007U, {Args::rs1, Args::vd, });
  const Instruction vl8re8_v = Instruction("vl8re8_v", 0xe2800007U, {Args::rs1, Args::vd, });
  const Instruction vle1024_v = Instruction("vle1024_v", 0x10007007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const Instruction vle1024ff_v = Instruction("vle1024ff_v", 0x11007007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const Instruction vle128_v = Instruction("vle128_v", 0x10000007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const Instruction vle128ff_v = Instruction("vle128ff_v", 0x11000007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const Instruction vle16_v = Instruction("vle16_v", 0x5007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const Instruction vle16ff_v = Instruction("vle16ff_v", 0x1005007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const Instruction vle256_v = Instruction("vle256_v", 0x10005007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const Instruction vle256ff_v = Instruction("vle256ff_v", 0x11005007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const Instruction vle32_v = Instruction("vle32_v", 0x6007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const Instruction vle32ff_v = Instruction("vle32ff_v", 0x1006007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const Instruction vle512_v = Instruction("vle512_v", 0x10006007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const Instruction vle512ff_v = Instruction("vle512ff_v", 0x11006007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const Instruction vle64_v = Instruction("vle64_v", 0x7007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const Instruction vle64ff_v = Instruction("vle64ff_v", 0x1007007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const Instruction vle8_v = Instruction("vle8_v", 0x7U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const Instruction vle8ff_v = Instruction("vle8ff_v", 0x1000007U, {Args::nf, Args::vm, Args::rs1, Args::vd, });
  const Instruction vlm_v = Instruction("vlm_v", 0x2b00007U, {Args::rs1, Args::vd, });
  const Instruction vloxei1024_v = Instruction("vloxei1024_v", 0x1c007007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vloxei128_v = Instruction("vloxei128_v", 0x1c000007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vloxei16_v = Instruction("vloxei16_v", 0xc005007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vloxei256_v = Instruction("vloxei256_v", 0x1c005007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vloxei32_v = Instruction("vloxei32_v", 0xc006007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vloxei512_v = Instruction("vloxei512_v", 0x1c006007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vloxei64_v = Instruction("vloxei64_v", 0xc007007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vloxei8_v = Instruction("vloxei8_v", 0xc000007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vlse1024_v = Instruction("vlse1024_v", 0x18007007U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vd, });
  const Instruction vlse128_v = Instruction("vlse128_v", 0x18000007U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vd, });
  const Instruction vlse16_v = Instruction("vlse16_v", 0x8005007U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vd, });
  const Instruction vlse256_v = Instruction("vlse256_v", 0x18005007U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vd, });
  const Instruction vlse32_v = Instruction("vlse32_v", 0x8006007U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vd, });
  const Instruction vlse512_v = Instruction("vlse512_v", 0x18006007U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vd, });
  const Instruction vlse64_v = Instruction("vlse64_v", 0x8007007U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vd, });
  const Instruction vlse8_v = Instruction("vlse8_v", 0x8000007U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vd, });
  const Instruction vluxei1024_v = Instruction("vluxei1024_v", 0x14007007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vluxei128_v = Instruction("vluxei128_v", 0x14000007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vluxei16_v = Instruction("vluxei16_v", 0x4005007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vluxei256_v = Instruction("vluxei256_v", 0x14005007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vluxei32_v = Instruction("vluxei32_v", 0x4006007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vluxei512_v = Instruction("vluxei512_v", 0x14006007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vluxei64_v = Instruction("vluxei64_v", 0x4007007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vluxei8_v = Instruction("vluxei8_v", 0x4000007U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmacc_vv = Instruction("vmacc_vv", 0xb4002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmacc_vx = Instruction("vmacc_vx", 0xb4006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmadc_vi = Instruction("vmadc_vi", 0x46003057U, {Args::vs2, Args::simm5, Args::vd, });
  const Instruction vmadc_vim = Instruction("vmadc_vim", 0x44003057U, {Args::vs2, Args::simm5, Args::vd, });
  const Instruction vmadc_vv = Instruction("vmadc_vv", 0x46000057U, {Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmadc_vvm = Instruction("vmadc_vvm", 0x44000057U, {Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmadc_vx = Instruction("vmadc_vx", 0x46004057U, {Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmadc_vxm = Instruction("vmadc_vxm", 0x44004057U, {Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmadd_vv = Instruction("vmadd_vv", 0xa4002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmadd_vx = Instruction("vmadd_vx", 0xa4006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmand_mm = Instruction("vmand_mm", 0x64002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmandn_mm = Instruction("vmandn_mm", 0x60002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmax_vv = Instruction("vmax_vv", 0x1c000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmax_vx = Instruction("vmax_vx", 0x1c004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmaxu_vv = Instruction("vmaxu_vv", 0x18000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmaxu_vx = Instruction("vmaxu_vx", 0x18004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmerge_vim = Instruction("vmerge_vim", 0x5c003057U, {Args::vs2, Args::simm5, Args::vd, });
  const Instruction vmerge_vvm = Instruction("vmerge_vvm", 0x5c000057U, {Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmerge_vxm = Instruction("vmerge_vxm", 0x5c004057U, {Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmfeq_vf = Instruction("vmfeq_vf", 0x60005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmfeq_vv = Instruction("vmfeq_vv", 0x60001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmfge_vf = Instruction("vmfge_vf", 0x7c005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmfgt_vf = Instruction("vmfgt_vf", 0x74005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmfle_vf = Instruction("vmfle_vf", 0x64005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmfle_vv = Instruction("vmfle_vv", 0x64001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmflt_vf = Instruction("vmflt_vf", 0x6c005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmflt_vv = Instruction("vmflt_vv", 0x6c001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmfne_vf = Instruction("vmfne_vf", 0x70005057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmfne_vv = Instruction("vmfne_vv", 0x70001057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmin_vv = Instruction("vmin_vv", 0x14000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmin_vx = Instruction("vmin_vx", 0x14004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vminu_vv = Instruction("vminu_vv", 0x10000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vminu_vx = Instruction("vminu_vx", 0x10004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmnand_mm = Instruction("vmnand_mm", 0x74002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmnor_mm = Instruction("vmnor_mm", 0x78002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmor_mm = Instruction("vmor_mm", 0x68002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmorn_mm = Instruction("vmorn_mm", 0x70002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmsbc_vv = Instruction("vmsbc_vv", 0x4e000057U, {Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmsbc_vvm = Instruction("vmsbc_vvm", 0x4c000057U, {Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmsbc_vx = Instruction("vmsbc_vx", 0x4e004057U, {Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmsbc_vxm = Instruction("vmsbc_vxm", 0x4c004057U, {Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmsbf_m = Instruction("vmsbf_m", 0x5000a057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vmseq_vi = Instruction("vmseq_vi", 0x60003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const Instruction vmseq_vv = Instruction("vmseq_vv", 0x60000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmseq_vx = Instruction("vmseq_vx", 0x60004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmsgt_vi = Instruction("vmsgt_vi", 0x7c003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const Instruction vmsgt_vx = Instruction("vmsgt_vx", 0x7c004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmsgtu_vi = Instruction("vmsgtu_vi", 0x78003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const Instruction vmsgtu_vx = Instruction("vmsgtu_vx", 0x78004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmsif_m = Instruction("vmsif_m", 0x5001a057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vmsle_vi = Instruction("vmsle_vi", 0x74003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const Instruction vmsle_vv = Instruction("vmsle_vv", 0x74000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmsle_vx = Instruction("vmsle_vx", 0x74004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmsleu_vi = Instruction("vmsleu_vi", 0x70003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const Instruction vmsleu_vv = Instruction("vmsleu_vv", 0x70000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmsleu_vx = Instruction("vmsleu_vx", 0x70004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmslt_vv = Instruction("vmslt_vv", 0x6c000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmslt_vx = Instruction("vmslt_vx", 0x6c004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmsltu_vv = Instruction("vmsltu_vv", 0x68000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmsltu_vx = Instruction("vmsltu_vx", 0x68004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmsne_vi = Instruction("vmsne_vi", 0x64003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const Instruction vmsne_vv = Instruction("vmsne_vv", 0x64000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmsne_vx = Instruction("vmsne_vx", 0x64004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmsof_m = Instruction("vmsof_m", 0x50012057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vmul_vv = Instruction("vmul_vv", 0x94002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmul_vx = Instruction("vmul_vx", 0x94006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmulh_vv = Instruction("vmulh_vv", 0x9c002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmulh_vx = Instruction("vmulh_vx", 0x9c006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmulhsu_vv = Instruction("vmulhsu_vv", 0x98002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmulhsu_vx = Instruction("vmulhsu_vx", 0x98006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmulhu_vv = Instruction("vmulhu_vv", 0x90002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmulhu_vx = Instruction("vmulhu_vx", 0x90006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vmv1r_v = Instruction("vmv1r_v", 0x9e003057U, {Args::vs2, Args::vd, });
  const Instruction vmv2r_v = Instruction("vmv2r_v", 0x9e00b057U, {Args::vs2, Args::vd, });
  const Instruction vmv4r_v = Instruction("vmv4r_v", 0x9e01b057U, {Args::vs2, Args::vd, });
  const Instruction vmv8r_v = Instruction("vmv8r_v", 0x9e03b057U, {Args::vs2, Args::vd, });
  const Instruction vmv_s_x = Instruction("vmv_s_x", 0x42006057U, {Args::rs1, Args::vd, });
  const Instruction vmv_v_i = Instruction("vmv_v_i", 0x5e003057U, {Args::simm5, Args::vd, });
  const Instruction vmv_v_v = Instruction("vmv_v_v", 0x5e000057U, {Args::vs1, Args::vd, });
  const Instruction vmv_v_x = Instruction("vmv_v_x", 0x5e004057U, {Args::rs1, Args::vd, });
  const Instruction vmv_x_s = Instruction("vmv_x_s", 0x42002057U, {Args::vs2, Args::rd, });
  const Instruction vmxnor_mm = Instruction("vmxnor_mm", 0x7c002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vmxor_mm = Instruction("vmxor_mm", 0x6c002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vnclip_wi = Instruction("vnclip_wi", 0xbc003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const Instruction vnclip_wv = Instruction("vnclip_wv", 0xbc000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vnclip_wx = Instruction("vnclip_wx", 0xbc004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vnclipu_wi = Instruction("vnclipu_wi", 0xb8003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const Instruction vnclipu_wv = Instruction("vnclipu_wv", 0xb8000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vnclipu_wx = Instruction("vnclipu_wx", 0xb8004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vnmsac_vv = Instruction("vnmsac_vv", 0xbc002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vnmsac_vx = Instruction("vnmsac_vx", 0xbc006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vnmsub_vv = Instruction("vnmsub_vv", 0xac002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vnmsub_vx = Instruction("vnmsub_vx", 0xac006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vnsra_wi = Instruction("vnsra_wi", 0xb4003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const Instruction vnsra_wv = Instruction("vnsra_wv", 0xb4000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vnsra_wx = Instruction("vnsra_wx", 0xb4004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vnsrl_wi = Instruction("vnsrl_wi", 0xb0003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const Instruction vnsrl_wv = Instruction("vnsrl_wv", 0xb0000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vnsrl_wx = Instruction("vnsrl_wx", 0xb0004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vor_vi = Instruction("vor_vi", 0x28003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const Instruction vor_vv = Instruction("vor_vv", 0x28000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vor_vx = Instruction("vor_vx", 0x28004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vredand_vs = Instruction("vredand_vs", 0x4002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vredmax_vs = Instruction("vredmax_vs", 0x1c002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vredmaxu_vs = Instruction("vredmaxu_vs", 0x18002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vredmin_vs = Instruction("vredmin_vs", 0x14002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vredminu_vs = Instruction("vredminu_vs", 0x10002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vredor_vs = Instruction("vredor_vs", 0x8002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vredsum_vs = Instruction("vredsum_vs", 0x2057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vredxor_vs = Instruction("vredxor_vs", 0xc002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vrem_vv = Instruction("vrem_vv", 0x8c002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vrem_vx = Instruction("vrem_vx", 0x8c006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vremu_vv = Instruction("vremu_vv", 0x88002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vremu_vx = Instruction("vremu_vx", 0x88006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vrgather_vi = Instruction("vrgather_vi", 0x30003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const Instruction vrgather_vv = Instruction("vrgather_vv", 0x30000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vrgather_vx = Instruction("vrgather_vx", 0x30004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vrgatherei16_vv = Instruction("vrgatherei16_vv", 0x38000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vrsub_vi = Instruction("vrsub_vi", 0xc003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const Instruction vrsub_vx = Instruction("vrsub_vx", 0xc004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vs1r_v = Instruction("vs1r_v", 0x2800027U, {Args::rs1, Args::vs3, });
  const Instruction vs2r_v = Instruction("vs2r_v", 0x22800027U, {Args::rs1, Args::vs3, });
  const Instruction vs4r_v = Instruction("vs4r_v", 0x62800027U, {Args::rs1, Args::vs3, });
  const Instruction vs8r_v = Instruction("vs8r_v", 0xe2800027U, {Args::rs1, Args::vs3, });
  const Instruction vsadd_vi = Instruction("vsadd_vi", 0x84003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const Instruction vsadd_vv = Instruction("vsadd_vv", 0x84000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vsadd_vx = Instruction("vsadd_vx", 0x84004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vsaddu_vi = Instruction("vsaddu_vi", 0x80003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const Instruction vsaddu_vv = Instruction("vsaddu_vv", 0x80000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vsaddu_vx = Instruction("vsaddu_vx", 0x80004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vsbc_vvm = Instruction("vsbc_vvm", 0x48000057U, {Args::vs2, Args::vs1, Args::vd, });
  const Instruction vsbc_vxm = Instruction("vsbc_vxm", 0x48004057U, {Args::vs2, Args::rs1, Args::vd, });
  const Instruction vse1024_v = Instruction("vse1024_v", 0x10007027U, {Args::nf, Args::vm, Args::rs1, Args::vs3, });
  const Instruction vse128_v = Instruction("vse128_v", 0x10000027U, {Args::nf, Args::vm, Args::rs1, Args::vs3, });
  const Instruction vse16_v = Instruction("vse16_v", 0x5027U, {Args::nf, Args::vm, Args::rs1, Args::vs3, });
  const Instruction vse256_v = Instruction("vse256_v", 0x10005027U, {Args::nf, Args::vm, Args::rs1, Args::vs3, });
  const Instruction vse32_v = Instruction("vse32_v", 0x6027U, {Args::nf, Args::vm, Args::rs1, Args::vs3, });
  const Instruction vse512_v = Instruction("vse512_v", 0x10006027U, {Args::nf, Args::vm, Args::rs1, Args::vs3, });
  const Instruction vse64_v = Instruction("vse64_v", 0x7027U, {Args::nf, Args::vm, Args::rs1, Args::vs3, });
  const Instruction vse8_v = Instruction("vse8_v", 0x27U, {Args::nf, Args::vm, Args::rs1, Args::vs3, });
  const Instruction vsetivli = Instruction("vsetivli", 0xc0007057U, {Args::zimm10, Args::zimm, Args::rd, });
  const Instruction vsetvl = Instruction("vsetvl", 0x80007057U, {Args::rs2, Args::rs1, Args::rd, });
  const Instruction vsetvli = Instruction("vsetvli", 0x7057U, {Args::zimm11, Args::rs1, Args::rd, });
  const Instruction vsext_vf2 = Instruction("vsext_vf2", 0x4803a057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vsext_vf4 = Instruction("vsext_vf4", 0x4802a057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vsext_vf8 = Instruction("vsext_vf8", 0x4801a057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vslide1down_vx = Instruction("vslide1down_vx", 0x3c006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vslide1up_vx = Instruction("vslide1up_vx", 0x38006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vslidedown_vi = Instruction("vslidedown_vi", 0x3c003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const Instruction vslidedown_vx = Instruction("vslidedown_vx", 0x3c004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vslideup_vi = Instruction("vslideup_vi", 0x38003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const Instruction vslideup_vx = Instruction("vslideup_vx", 0x38004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vsll_vi = Instruction("vsll_vi", 0x94003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const Instruction vsll_vv = Instruction("vsll_vv", 0x94000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vsll_vx = Instruction("vsll_vx", 0x94004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vsm_v = Instruction("vsm_v", 0x2b00027U, {Args::rs1, Args::vs3, });
  const Instruction vsmul_vv = Instruction("vsmul_vv", 0x9c000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vsmul_vx = Instruction("vsmul_vx", 0x9c004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vsoxei1024_v = Instruction("vsoxei1024_v", 0x1c007027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const Instruction vsoxei128_v = Instruction("vsoxei128_v", 0x1c000027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const Instruction vsoxei16_v = Instruction("vsoxei16_v", 0xc005027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const Instruction vsoxei256_v = Instruction("vsoxei256_v", 0x1c005027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const Instruction vsoxei32_v = Instruction("vsoxei32_v", 0xc006027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const Instruction vsoxei512_v = Instruction("vsoxei512_v", 0x1c006027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const Instruction vsoxei64_v = Instruction("vsoxei64_v", 0xc007027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const Instruction vsoxei8_v = Instruction("vsoxei8_v", 0xc000027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const Instruction vsra_vi = Instruction("vsra_vi", 0xa4003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const Instruction vsra_vv = Instruction("vsra_vv", 0xa4000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vsra_vx = Instruction("vsra_vx", 0xa4004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vsrl_vi = Instruction("vsrl_vi", 0xa0003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const Instruction vsrl_vv = Instruction("vsrl_vv", 0xa0000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vsrl_vx = Instruction("vsrl_vx", 0xa0004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vsse1024_v = Instruction("vsse1024_v", 0x18007027U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vs3, });
  const Instruction vsse128_v = Instruction("vsse128_v", 0x18000027U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vs3, });
  const Instruction vsse16_v = Instruction("vsse16_v", 0x8005027U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vs3, });
  const Instruction vsse256_v = Instruction("vsse256_v", 0x18005027U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vs3, });
  const Instruction vsse32_v = Instruction("vsse32_v", 0x8006027U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vs3, });
  const Instruction vsse512_v = Instruction("vsse512_v", 0x18006027U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vs3, });
  const Instruction vsse64_v = Instruction("vsse64_v", 0x8007027U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vs3, });
  const Instruction vsse8_v = Instruction("vsse8_v", 0x8000027U, {Args::nf, Args::vm, Args::rs2, Args::rs1, Args::vs3, });
  const Instruction vssra_vi = Instruction("vssra_vi", 0xac003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const Instruction vssra_vv = Instruction("vssra_vv", 0xac000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vssra_vx = Instruction("vssra_vx", 0xac004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vssrl_vi = Instruction("vssrl_vi", 0xa8003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const Instruction vssrl_vv = Instruction("vssrl_vv", 0xa8000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vssrl_vx = Instruction("vssrl_vx", 0xa8004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vssub_vv = Instruction("vssub_vv", 0x8c000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vssub_vx = Instruction("vssub_vx", 0x8c004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vssubu_vv = Instruction("vssubu_vv", 0x88000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vssubu_vx = Instruction("vssubu_vx", 0x88004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vsub_vv = Instruction("vsub_vv", 0x8000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vsub_vx = Instruction("vsub_vx", 0x8004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vsuxei1024_v = Instruction("vsuxei1024_v", 0x14007027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const Instruction vsuxei128_v = Instruction("vsuxei128_v", 0x14000027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const Instruction vsuxei16_v = Instruction("vsuxei16_v", 0x4005027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const Instruction vsuxei256_v = Instruction("vsuxei256_v", 0x14005027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const Instruction vsuxei32_v = Instruction("vsuxei32_v", 0x4006027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const Instruction vsuxei512_v = Instruction("vsuxei512_v", 0x14006027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const Instruction vsuxei64_v = Instruction("vsuxei64_v", 0x4007027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const Instruction vsuxei8_v = Instruction("vsuxei8_v", 0x4000027U, {Args::nf, Args::vm, Args::vs2, Args::rs1, Args::vs3, });
  const Instruction vwadd_vv = Instruction("vwadd_vv", 0xc4002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vwadd_vx = Instruction("vwadd_vx", 0xc4006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vwadd_wv = Instruction("vwadd_wv", 0xd4002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vwadd_wx = Instruction("vwadd_wx", 0xd4006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vwaddu_vv = Instruction("vwaddu_vv", 0xc0002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vwaddu_vx = Instruction("vwaddu_vx", 0xc0006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vwaddu_wv = Instruction("vwaddu_wv", 0xd0002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vwaddu_wx = Instruction("vwaddu_wx", 0xd0006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vwmacc_vv = Instruction("vwmacc_vv", 0xf4002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vwmacc_vx = Instruction("vwmacc_vx", 0xf4006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vwmaccsu_vv = Instruction("vwmaccsu_vv", 0xfc002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vwmaccsu_vx = Instruction("vwmaccsu_vx", 0xfc006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vwmaccu_vv = Instruction("vwmaccu_vv", 0xf0002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vwmaccu_vx = Instruction("vwmaccu_vx", 0xf0006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vwmaccus_vx = Instruction("vwmaccus_vx", 0xf8006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vwmul_vv = Instruction("vwmul_vv", 0xec002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vwmul_vx = Instruction("vwmul_vx", 0xec006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vwmulsu_vv = Instruction("vwmulsu_vv", 0xe8002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vwmulsu_vx = Instruction("vwmulsu_vx", 0xe8006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vwmulu_vv = Instruction("vwmulu_vv", 0xe0002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vwmulu_vx = Instruction("vwmulu_vx", 0xe0006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vwredsum_vs = Instruction("vwredsum_vs", 0xc4000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vwredsumu_vs = Instruction("vwredsumu_vs", 0xc0000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vwsub_vv = Instruction("vwsub_vv", 0xcc002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vwsub_vx = Instruction("vwsub_vx", 0xcc006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vwsub_wv = Instruction("vwsub_wv", 0xdc002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vwsub_wx = Instruction("vwsub_wx", 0xdc006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vwsubu_vv = Instruction("vwsubu_vv", 0xc8002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vwsubu_vx = Instruction("vwsubu_vx", 0xc8006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vwsubu_wv = Instruction("vwsubu_wv", 0xd8002057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vwsubu_wx = Instruction("vwsubu_wx", 0xd8006057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vxor_vi = Instruction("vxor_vi", 0x2c003057U, {Args::vm, Args::vs2, Args::simm5, Args::vd, });
  const Instruction vxor_vv = Instruction("vxor_vv", 0x2c000057U, {Args::vm, Args::vs2, Args::vs1, Args::vd, });
  const Instruction vxor_vx = Instruction("vxor_vx", 0x2c004057U, {Args::vm, Args::vs2, Args::rs1, Args::vd, });
  const Instruction vzext_vf2 = Instruction("vzext_vf2", 0x48032057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vzext_vf4 = Instruction("vzext_vf4", 0x48022057U, {Args::vm, Args::vs2, Args::vd, });
  const Instruction vzext_vf8 = Instruction("vzext_vf8", 0x48012057U, {Args::vm, Args::vs2, Args::vd, });
  const std::array<Instruction, 447> all = {
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
  const std::array<Instruction, 0> all = {
  };
}
namespace rv_zawrs {
  const Instruction wrs_nto = Instruction("wrs_nto", 0xd00073U, {});
  const Instruction wrs_sto = Instruction("wrs_sto", 0x1d00073U, {});
  const std::array<Instruction, 2> all = {
    wrs_nto,
    wrs_sto,
  };
}
namespace rv_zba {
  const Instruction sh1add = Instruction("sh1add", 0x20002033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction sh2add = Instruction("sh2add", 0x20004033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction sh3add = Instruction("sh3add", 0x20006033U, {Args::rd, Args::rs1, Args::rs2, });
  const std::array<Instruction, 3> all = {
    sh1add,
    sh2add,
    sh3add,
  };
}
namespace rv_zbb {
  const Instruction andn = Instruction("andn", 0x40007033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction clz = Instruction("clz", 0x60001013U, {Args::rd, Args::rs1, });
  const Instruction cpop = Instruction("cpop", 0x60201013U, {Args::rd, Args::rs1, });
  const Instruction ctz = Instruction("ctz", 0x60101013U, {Args::rd, Args::rs1, });
  const Instruction max = Instruction("max", 0xa006033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction maxu = Instruction("maxu", 0xa007033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction min = Instruction("min", 0xa004033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction minu = Instruction("minu", 0xa005033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction orc_b = Instruction("orc_b", 0x28705013U, {Args::rd, Args::rs1, });
  const Instruction orn = Instruction("orn", 0x40006033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction rol = Instruction("rol", 0x60001033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction ror = Instruction("ror", 0x60005033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction sext_b = Instruction("sext_b", 0x60401013U, {Args::rd, Args::rs1, });
  const Instruction sext_h = Instruction("sext_h", 0x60501013U, {Args::rd, Args::rs1, });
  const Instruction xnor = Instruction("xnor", 0x40004033U, {Args::rd, Args::rs1, Args::rs2, });
  const std::array<Instruction, 15> all = {
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
  const Instruction clmul = Instruction("clmul", 0xa001033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction clmulh = Instruction("clmulh", 0xa003033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction clmulr = Instruction("clmulr", 0xa002033U, {Args::rd, Args::rs1, Args::rs2, });
  const std::array<Instruction, 3> all = {
    clmul,
    clmulh,
    clmulr,
  };
}
namespace rv_zbkb {
  const Instruction andn = Instruction("andn", 0x40007033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction orn = Instruction("orn", 0x40006033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction pack = Instruction("pack", 0x8004033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction packh = Instruction("packh", 0x8007033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction rol = Instruction("rol", 0x60001033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction ror = Instruction("ror", 0x60005033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction xnor = Instruction("xnor", 0x40004033U, {Args::rd, Args::rs1, Args::rs2, });
  const std::array<Instruction, 7> all = {
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
  const Instruction clmul = Instruction("clmul", 0xa001033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction clmulh = Instruction("clmulh", 0xa003033U, {Args::rd, Args::rs1, Args::rs2, });
  const std::array<Instruction, 2> all = {
    clmul,
    clmulh,
  };
}
namespace rv_zbkx {
  const Instruction xperm4 = Instruction("xperm4", 0x28002033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction xperm8 = Instruction("xperm8", 0x28004033U, {Args::rd, Args::rs1, Args::rs2, });
  const std::array<Instruction, 2> all = {
    xperm4,
    xperm8,
  };
}
namespace rv_zbs {
  const Instruction bclr = Instruction("bclr", 0x48001033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction bext = Instruction("bext", 0x48005033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction binv = Instruction("binv", 0x68001033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction bset = Instruction("bset", 0x28001033U, {Args::rd, Args::rs1, Args::rs2, });
  const std::array<Instruction, 4> all = {
    bclr,
    bext,
    binv,
    bset,
  };
}
namespace rv_zcb {
  const Instruction c_lbu = Instruction("c_lbu", 0x8000U, {Args::rd_p, Args::rs1_p, Args::c_uimm2, });
  const Instruction c_lh = Instruction("c_lh", 0x8440U, {Args::rd_p, Args::rs1_p, Args::c_uimm1, });
  const Instruction c_lhu = Instruction("c_lhu", 0x8400U, {Args::rd_p, Args::rs1_p, Args::c_uimm1, });
  const Instruction c_mul = Instruction("c_mul", 0x9c41U, {Args::rd_rs1_p, Args::rs2_p, });
  const Instruction c_not = Instruction("c_not", 0x9c75U, {Args::rd_rs1_p, });
  const Instruction c_sb = Instruction("c_sb", 0x8800U, {Args::rs2_p, Args::rs1_p, Args::c_uimm2, });
  const Instruction c_sext_b = Instruction("c_sext_b", 0x9c65U, {Args::rd_rs1_p, });
  const Instruction c_sext_h = Instruction("c_sext_h", 0x9c6dU, {Args::rd_rs1_p, });
  const Instruction c_sh = Instruction("c_sh", 0x8c00U, {Args::rs2_p, Args::rs1_p, Args::c_uimm1, });
  const Instruction c_zext_b = Instruction("c_zext_b", 0x9c61U, {Args::rd_rs1_p, });
  const Instruction c_zext_h = Instruction("c_zext_h", 0x9c69U, {Args::rd_rs1_p, });
  const std::array<Instruction, 11> all = {
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
  const Instruction cm_mva01s = Instruction("cm_mva01s", 0xac62U, {Args::c_sreg1, Args::c_sreg2, });
  const Instruction cm_mvsa01 = Instruction("cm_mvsa01", 0xac22U, {Args::c_sreg1, Args::c_sreg2, });
  const Instruction cm_pop = Instruction("cm_pop", 0xba02U, {Args::c_rlist, Args::c_spimm, });
  const Instruction cm_popret = Instruction("cm_popret", 0xbe02U, {Args::c_rlist, Args::c_spimm, });
  const Instruction cm_popretz = Instruction("cm_popretz", 0xbc02U, {Args::c_rlist, Args::c_spimm, });
  const Instruction cm_push = Instruction("cm_push", 0xb802U, {Args::c_rlist, Args::c_spimm, });
  const std::array<Instruction, 6> all = {
    cm_mva01s,
    cm_mvsa01,
    cm_pop,
    cm_popret,
    cm_popretz,
    cm_push,
  };
}
namespace rv_zcmt {
  const Instruction cm_jalt = Instruction("cm_jalt", 0xa002U, {Args::c_index, });
  const std::array<Instruction, 1> all = {
    cm_jalt,
  };
}
namespace rv_zfh {
  const Instruction fadd_h = Instruction("fadd_h", 0x4000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const Instruction fclass_h = Instruction("fclass_h", 0xe4001053U, {Args::rd, Args::rs1, });
  const Instruction fcvt_h_s = Instruction("fcvt_h_s", 0x44000053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fcvt_h_w = Instruction("fcvt_h_w", 0xd4000053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fcvt_h_wu = Instruction("fcvt_h_wu", 0xd4100053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fcvt_s_h = Instruction("fcvt_s_h", 0x40200053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fcvt_w_h = Instruction("fcvt_w_h", 0xc4000053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fcvt_wu_h = Instruction("fcvt_wu_h", 0xc4100053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fdiv_h = Instruction("fdiv_h", 0x1c000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const Instruction feq_h = Instruction("feq_h", 0xa4002053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction fle_h = Instruction("fle_h", 0xa4000053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction flh = Instruction("flh", 0x1007U, {Args::rd, Args::rs1, Args::imm12, });
  const Instruction flt_h = Instruction("flt_h", 0xa4001053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction fmadd_h = Instruction("fmadd_h", 0x4000043U, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const Instruction fmax_h = Instruction("fmax_h", 0x2c001053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction fmin_h = Instruction("fmin_h", 0x2c000053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction fmsub_h = Instruction("fmsub_h", 0x4000047U, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const Instruction fmul_h = Instruction("fmul_h", 0x14000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const Instruction fmv_h_x = Instruction("fmv_h_x", 0xf4000053U, {Args::rd, Args::rs1, });
  const Instruction fmv_x_h = Instruction("fmv_x_h", 0xe4000053U, {Args::rd, Args::rs1, });
  const Instruction fnmadd_h = Instruction("fnmadd_h", 0x400004fU, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const Instruction fnmsub_h = Instruction("fnmsub_h", 0x400004bU, {Args::rd, Args::rs1, Args::rs2, Args::rs3, Args::rm, });
  const Instruction fsgnj_h = Instruction("fsgnj_h", 0x24000053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction fsgnjn_h = Instruction("fsgnjn_h", 0x24001053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction fsgnjx_h = Instruction("fsgnjx_h", 0x24002053U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction fsh = Instruction("fsh", 0x1027U, {Args::imm12hi, Args::rs1, Args::rs2, Args::imm12lo, });
  const Instruction fsqrt_h = Instruction("fsqrt_h", 0x5c000053U, {Args::rd, Args::rs1, Args::rm, });
  const Instruction fsub_h = Instruction("fsub_h", 0xc000053U, {Args::rd, Args::rs1, Args::rs2, Args::rm, });
  const std::array<Instruction, 28> all = {
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
  const Instruction cbo_clean = Instruction("cbo_clean", 0x10200fU, {Args::rs1, });
  const Instruction cbo_flush = Instruction("cbo_flush", 0x20200fU, {Args::rs1, });
  const Instruction cbo_inval = Instruction("cbo_inval", 0x200fU, {Args::rs1, });
  const Instruction cbo_zero = Instruction("cbo_zero", 0x40200fU, {Args::rs1, });
  const std::array<Instruction, 4> all = {
    cbo_clean,
    cbo_flush,
    cbo_inval,
    cbo_zero,
  };
}
namespace rv_zicsr {
  const Instruction csrrc = Instruction("csrrc", 0x3073U, {Args::rd, Args::rs1, Args::csr, });
  const Instruction csrrci = Instruction("csrrci", 0x7073U, {Args::rd, Args::csr, Args::zimm, });
  const Instruction csrrs = Instruction("csrrs", 0x2073U, {Args::rd, Args::rs1, Args::csr, });
  const Instruction csrrsi = Instruction("csrrsi", 0x6073U, {Args::rd, Args::csr, Args::zimm, });
  const Instruction csrrw = Instruction("csrrw", 0x1073U, {Args::rd, Args::rs1, Args::csr, });
  const Instruction csrrwi = Instruction("csrrwi", 0x5073U, {Args::rd, Args::csr, Args::zimm, });
  const std::array<Instruction, 6> all = {
    csrrc,
    csrrci,
    csrrs,
    csrrsi,
    csrrw,
    csrrwi,
  };
}
namespace rv_zifencei {
  const Instruction fence_i = Instruction("fence_i", 0x100fU, {Args::imm12, Args::rs1, Args::rd, });
  const std::array<Instruction, 1> all = {
    fence_i,
  };
}
namespace rv_zk {
  const Instruction andn = Instruction("andn", 0x40007033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction clmul = Instruction("clmul", 0xa001033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction clmulh = Instruction("clmulh", 0xa003033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction orn = Instruction("orn", 0x40006033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction pack = Instruction("pack", 0x8004033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction packh = Instruction("packh", 0x8007033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction rol = Instruction("rol", 0x60001033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction ror = Instruction("ror", 0x60005033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction sha256sig0 = Instruction("sha256sig0", 0x10201013U, {Args::rd, Args::rs1, });
  const Instruction sha256sig1 = Instruction("sha256sig1", 0x10301013U, {Args::rd, Args::rs1, });
  const Instruction sha256sum0 = Instruction("sha256sum0", 0x10001013U, {Args::rd, Args::rs1, });
  const Instruction sha256sum1 = Instruction("sha256sum1", 0x10101013U, {Args::rd, Args::rs1, });
  const Instruction xnor = Instruction("xnor", 0x40004033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction xperm4 = Instruction("xperm4", 0x28002033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction xperm8 = Instruction("xperm8", 0x28004033U, {Args::rd, Args::rs1, Args::rs2, });
  const std::array<Instruction, 15> all = {
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
  const Instruction andn = Instruction("andn", 0x40007033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction clmul = Instruction("clmul", 0xa001033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction clmulh = Instruction("clmulh", 0xa003033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction orn = Instruction("orn", 0x40006033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction pack = Instruction("pack", 0x8004033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction packh = Instruction("packh", 0x8007033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction rol = Instruction("rol", 0x60001033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction ror = Instruction("ror", 0x60005033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction sha256sig0 = Instruction("sha256sig0", 0x10201013U, {Args::rd, Args::rs1, });
  const Instruction sha256sig1 = Instruction("sha256sig1", 0x10301013U, {Args::rd, Args::rs1, });
  const Instruction sha256sum0 = Instruction("sha256sum0", 0x10001013U, {Args::rd, Args::rs1, });
  const Instruction sha256sum1 = Instruction("sha256sum1", 0x10101013U, {Args::rd, Args::rs1, });
  const Instruction xnor = Instruction("xnor", 0x40004033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction xperm4 = Instruction("xperm4", 0x28002033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction xperm8 = Instruction("xperm8", 0x28004033U, {Args::rd, Args::rs1, Args::rs2, });
  const std::array<Instruction, 15> all = {
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
  const Instruction sha256sig0 = Instruction("sha256sig0", 0x10201013U, {Args::rd, Args::rs1, });
  const Instruction sha256sig1 = Instruction("sha256sig1", 0x10301013U, {Args::rd, Args::rs1, });
  const Instruction sha256sum0 = Instruction("sha256sum0", 0x10001013U, {Args::rd, Args::rs1, });
  const Instruction sha256sum1 = Instruction("sha256sum1", 0x10101013U, {Args::rd, Args::rs1, });
  const std::array<Instruction, 4> all = {
    sha256sig0,
    sha256sig1,
    sha256sum0,
    sha256sum1,
  };
}
namespace rv_zks {
  const Instruction andn = Instruction("andn", 0x40007033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction brev8 = Instruction("brev8", 0x68705013U, {Args::rd, Args::rs1, });
  const Instruction clmul = Instruction("clmul", 0xa001033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction clmulh = Instruction("clmulh", 0xa003033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction orn = Instruction("orn", 0x40006033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction pack = Instruction("pack", 0x8004033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction packh = Instruction("packh", 0x8007033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction rol = Instruction("rol", 0x60001033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction ror = Instruction("ror", 0x60005033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction sm3p0 = Instruction("sm3p0", 0x10801013U, {Args::rd, Args::rs1, });
  const Instruction sm3p1 = Instruction("sm3p1", 0x10901013U, {Args::rd, Args::rs1, });
  const Instruction sm4ed = Instruction("sm4ed", 0x30000033U, {Args::rd, Args::rs1, Args::rs2, Args::bs, });
  const Instruction sm4ks = Instruction("sm4ks", 0x34000033U, {Args::rd, Args::rs1, Args::rs2, Args::bs, });
  const Instruction xnor = Instruction("xnor", 0x40004033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction xperm4 = Instruction("xperm4", 0x28002033U, {Args::rd, Args::rs1, Args::rs2, });
  const Instruction xperm8 = Instruction("xperm8", 0x28004033U, {Args::rd, Args::rs1, Args::rs2, });
  const std::array<Instruction, 16> all = {
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
  const Instruction sm4ed = Instruction("sm4ed", 0x30000033U, {Args::rd, Args::rs1, Args::rs2, Args::bs, });
  const Instruction sm4ks = Instruction("sm4ks", 0x34000033U, {Args::rd, Args::rs1, Args::rs2, Args::bs, });
  const std::array<Instruction, 2> all = {
    sm4ed,
    sm4ks,
  };
}
namespace rv_zksh {
  const Instruction sm3p0 = Instruction("sm3p0", 0x10801013U, {Args::rd, Args::rs1, });
  const Instruction sm3p1 = Instruction("sm3p1", 0x10901013U, {Args::rd, Args::rs1, });
  const std::array<Instruction, 2> all = {
    sm3p0,
    sm3p1,
  };
}
} // namespace RISCV

/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/10791/P6_vesion2/P6_code/grf.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {32, 0};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {1, 0};



static void Always_37_0(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    int t39;
    char *t40;
    int t41;
    int t42;
    int t43;
    int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    char *t51;
    char *t52;

LAB0:    t1 = (t0 + 4104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4920);
    *((int *)t2) = 1;
    t3 = (t0 + 4136);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(44, ng0);

LAB20:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);

LAB21:    t2 = ((char*)((ng1)));
    t39 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 1);
    if (t39 == 1)
        goto LAB22;

LAB23:
LAB25:
LAB24:
LAB26:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(40, ng0);

LAB13:    xsi_set_current_line(41, ng0);
    xsi_set_current_line(41, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 3184);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 32);

LAB14:    t2 = (t0 + 3184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB15;

LAB16:    goto LAB12;

LAB15:    xsi_set_current_line(41, ng0);

LAB17:    xsi_set_current_line(42, ng0);
    t8 = ((char*)((ng4)));
    t21 = (t0 + 3024);
    t22 = (t0 + 3024);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t32 = (t0 + 3024);
    t33 = (t32 + 64U);
    t34 = *((char **)t33);
    t35 = (t0 + 3184);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    xsi_vlog_generic_convert_array_indices(t30, t31, t29, t34, 2, 1, t37, 32, 1);
    t38 = (t30 + 4);
    t14 = *((unsigned int *)t38);
    t39 = (!(t14));
    t40 = (t31 + 4);
    t15 = *((unsigned int *)t40);
    t41 = (!(t15));
    t42 = (t39 && t41);
    if (t42 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3184);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB14;

LAB18:    t16 = *((unsigned int *)t30);
    t17 = *((unsigned int *)t31);
    t43 = (t16 - t17);
    t44 = (t43 + 1);
    xsi_vlogvar_wait_assign_value(t21, t8, 0, *((unsigned int *)t31), t44, 0LL);
    goto LAB19;

LAB22:    xsi_set_current_line(46, ng0);

LAB27:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1984U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB29;

LAB28:    if (t18 != 0)
        goto LAB30;

LAB31:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(50, ng0);

LAB38:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3024);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 3024);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = (t0 + 3024);
    t28 = (t22 + 64U);
    t29 = *((char **)t28);
    t32 = (t0 + 1984U);
    t33 = *((char **)t32);
    xsi_vlog_generic_get_array_select_value(t6, 32, t5, t21, t29, 2, 1, t33, 5, 2);
    t32 = (t0 + 3024);
    t34 = (t0 + 3024);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = (t0 + 3024);
    t38 = (t37 + 64U);
    t40 = *((char **)t38);
    t46 = (t0 + 1984U);
    t51 = *((char **)t46);
    xsi_vlog_generic_convert_array_indices(t30, t31, t36, t40, 2, 1, t51, 5, 2);
    t46 = (t30 + 4);
    t9 = *((unsigned int *)t46);
    t39 = (!(t9));
    t52 = (t31 + 4);
    t10 = *((unsigned int *)t52);
    t41 = (!(t10));
    t42 = (t39 && t41);
    if (t42 == 1)
        goto LAB39;

LAB40:
LAB34:    goto LAB26;

LAB29:    *((unsigned int *)t6) = 1;
    goto LAB31;

LAB30:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(47, ng0);

LAB35:    xsi_set_current_line(48, ng0);
    t28 = (t0 + 2144U);
    t29 = *((char **)t28);
    t28 = (t0 + 3024);
    t32 = (t0 + 3024);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 3024);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t38 = (t0 + 1984U);
    t40 = *((char **)t38);
    xsi_vlog_generic_convert_array_indices(t30, t31, t34, t37, 2, 1, t40, 5, 2);
    t38 = (t30 + 4);
    t45 = *((unsigned int *)t38);
    t41 = (!(t45));
    t46 = (t31 + 4);
    t47 = *((unsigned int *)t46);
    t42 = (!(t47));
    t43 = (t41 && t42);
    if (t43 == 1)
        goto LAB36;

LAB37:    goto LAB34;

LAB36:    t48 = *((unsigned int *)t30);
    t49 = *((unsigned int *)t31);
    t44 = (t48 - t49);
    t50 = (t44 + 1);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, *((unsigned int *)t31), t50, 0LL);
    goto LAB37;

LAB39:    t11 = *((unsigned int *)t30);
    t12 = *((unsigned int *)t31);
    t43 = (t11 - t12);
    t44 = (t43 + 1);
    xsi_vlogvar_wait_assign_value(t32, t6, 0, *((unsigned int *)t31), t44, 0LL);
    goto LAB40;

}

static void Cont_65_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t23[8];
    char t57[8];
    char t73[8];
    char t124[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;

LAB0:    t1 = (t0 + 4352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1504U);
    t5 = *((char **)t2);
    t2 = (t0 + 1664U);
    t6 = *((char **)t2);
    t2 = (t0 + 1984U);
    t7 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t6 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t7);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t2);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB7;

LAB4:    if (t19 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    t24 = *((unsigned int *)t5);
    t25 = *((unsigned int *)t8);
    t26 = (t24 & t25);
    *((unsigned int *)t23) = t26;
    t27 = (t5 + 4);
    t28 = (t8 + 4);
    t29 = (t23 + 4);
    t30 = *((unsigned int *)t27);
    t31 = *((unsigned int *)t28);
    t32 = (t30 | t31);
    *((unsigned int *)t29) = t32;
    t33 = *((unsigned int *)t29);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB8;

LAB9:
LAB10:    t55 = (t0 + 1984U);
    t56 = *((char **)t55);
    t55 = ((char*)((ng4)));
    memset(t57, 0, 8);
    t58 = (t56 + 4);
    t59 = (t55 + 4);
    t60 = *((unsigned int *)t56);
    t61 = *((unsigned int *)t55);
    t62 = (t60 ^ t61);
    t63 = *((unsigned int *)t58);
    t64 = *((unsigned int *)t59);
    t65 = (t63 ^ t64);
    t66 = (t62 | t65);
    t67 = *((unsigned int *)t58);
    t68 = *((unsigned int *)t59);
    t69 = (t67 | t68);
    t70 = (~(t69));
    t71 = (t66 & t70);
    if (t71 != 0)
        goto LAB12;

LAB11:    if (t69 != 0)
        goto LAB13;

LAB14:    t74 = *((unsigned int *)t23);
    t75 = *((unsigned int *)t57);
    t76 = (t74 & t75);
    *((unsigned int *)t73) = t76;
    t77 = (t23 + 4);
    t78 = (t57 + 4);
    t79 = (t73 + 4);
    t80 = *((unsigned int *)t77);
    t81 = *((unsigned int *)t78);
    t82 = (t80 | t81);
    *((unsigned int *)t79) = t82;
    t83 = *((unsigned int *)t79);
    t84 = (t83 != 0);
    if (t84 == 1)
        goto LAB15;

LAB16:
LAB17:    memset(t4, 0, 8);
    t105 = (t73 + 4);
    t106 = *((unsigned int *)t105);
    t107 = (~(t106));
    t108 = *((unsigned int *)t73);
    t109 = (t108 & t107);
    t110 = (t109 & 1U);
    if (t110 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t105) != 0)
        goto LAB20;

LAB21:    t112 = (t4 + 4);
    t113 = *((unsigned int *)t4);
    t114 = *((unsigned int *)t112);
    t115 = (t113 || t114);
    if (t115 > 0)
        goto LAB22;

LAB23:    t118 = *((unsigned int *)t4);
    t119 = (~(t118));
    t120 = *((unsigned int *)t112);
    t121 = (t119 || t120);
    if (t121 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t112) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t4) > 0)
        goto LAB28;

LAB29:    memcpy(t3, t124, 8);

LAB30:    t131 = (t0 + 5032);
    t133 = (t131 + 56U);
    t134 = *((char **)t133);
    t135 = (t134 + 56U);
    t136 = *((char **)t135);
    memcpy(t136, t3, 8);
    xsi_driver_vfirst_trans(t131, 0, 31);
    t137 = (t0 + 4936);
    *((int *)t137) = 1;

LAB1:    return;
LAB6:    t22 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB7;

LAB8:    t35 = *((unsigned int *)t23);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t23) = (t35 | t36);
    t37 = (t5 + 4);
    t38 = (t8 + 4);
    t39 = *((unsigned int *)t5);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (~(t41));
    t43 = *((unsigned int *)t8);
    t44 = (~(t43));
    t45 = *((unsigned int *)t38);
    t46 = (~(t45));
    t47 = (t40 & t42);
    t48 = (t44 & t46);
    t49 = (~(t47));
    t50 = (~(t48));
    t51 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t51 & t49);
    t52 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t52 & t50);
    t53 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t53 & t49);
    t54 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t54 & t50);
    goto LAB10;

LAB12:    *((unsigned int *)t57) = 1;
    goto LAB14;

LAB13:    t72 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB14;

LAB15:    t85 = *((unsigned int *)t73);
    t86 = *((unsigned int *)t79);
    *((unsigned int *)t73) = (t85 | t86);
    t87 = (t23 + 4);
    t88 = (t57 + 4);
    t89 = *((unsigned int *)t23);
    t90 = (~(t89));
    t91 = *((unsigned int *)t87);
    t92 = (~(t91));
    t93 = *((unsigned int *)t57);
    t94 = (~(t93));
    t95 = *((unsigned int *)t88);
    t96 = (~(t95));
    t97 = (t90 & t92);
    t98 = (t94 & t96);
    t99 = (~(t97));
    t100 = (~(t98));
    t101 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t101 & t99);
    t102 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t102 & t100);
    t103 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t103 & t99);
    t104 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t104 & t100);
    goto LAB17;

LAB18:    *((unsigned int *)t4) = 1;
    goto LAB21;

LAB20:    t111 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t111) = 1;
    goto LAB21;

LAB22:    t116 = (t0 + 2144U);
    t117 = *((char **)t116);
    goto LAB23;

LAB24:    t116 = (t0 + 3024);
    t122 = (t116 + 56U);
    t123 = *((char **)t122);
    t125 = (t0 + 3024);
    t126 = (t125 + 72U);
    t127 = *((char **)t126);
    t128 = (t0 + 3024);
    t129 = (t128 + 64U);
    t130 = *((char **)t129);
    t131 = (t0 + 1664U);
    t132 = *((char **)t131);
    xsi_vlog_generic_get_array_select_value(t124, 32, t123, t127, t130, 2, 1, t132, 5, 2);
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t3, 32, t117, 32, t124, 32);
    goto LAB30;

LAB28:    memcpy(t3, t117, 8);
    goto LAB30;

}

static void Cont_67_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t23[8];
    char t57[8];
    char t73[8];
    char t124[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;

LAB0:    t1 = (t0 + 4600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1504U);
    t5 = *((char **)t2);
    t2 = (t0 + 1824U);
    t6 = *((char **)t2);
    t2 = (t0 + 1984U);
    t7 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t6 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t7);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t2);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB7;

LAB4:    if (t19 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    t24 = *((unsigned int *)t5);
    t25 = *((unsigned int *)t8);
    t26 = (t24 & t25);
    *((unsigned int *)t23) = t26;
    t27 = (t5 + 4);
    t28 = (t8 + 4);
    t29 = (t23 + 4);
    t30 = *((unsigned int *)t27);
    t31 = *((unsigned int *)t28);
    t32 = (t30 | t31);
    *((unsigned int *)t29) = t32;
    t33 = *((unsigned int *)t29);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB8;

LAB9:
LAB10:    t55 = (t0 + 1984U);
    t56 = *((char **)t55);
    t55 = ((char*)((ng4)));
    memset(t57, 0, 8);
    t58 = (t56 + 4);
    t59 = (t55 + 4);
    t60 = *((unsigned int *)t56);
    t61 = *((unsigned int *)t55);
    t62 = (t60 ^ t61);
    t63 = *((unsigned int *)t58);
    t64 = *((unsigned int *)t59);
    t65 = (t63 ^ t64);
    t66 = (t62 | t65);
    t67 = *((unsigned int *)t58);
    t68 = *((unsigned int *)t59);
    t69 = (t67 | t68);
    t70 = (~(t69));
    t71 = (t66 & t70);
    if (t71 != 0)
        goto LAB12;

LAB11:    if (t69 != 0)
        goto LAB13;

LAB14:    t74 = *((unsigned int *)t23);
    t75 = *((unsigned int *)t57);
    t76 = (t74 & t75);
    *((unsigned int *)t73) = t76;
    t77 = (t23 + 4);
    t78 = (t57 + 4);
    t79 = (t73 + 4);
    t80 = *((unsigned int *)t77);
    t81 = *((unsigned int *)t78);
    t82 = (t80 | t81);
    *((unsigned int *)t79) = t82;
    t83 = *((unsigned int *)t79);
    t84 = (t83 != 0);
    if (t84 == 1)
        goto LAB15;

LAB16:
LAB17:    memset(t4, 0, 8);
    t105 = (t73 + 4);
    t106 = *((unsigned int *)t105);
    t107 = (~(t106));
    t108 = *((unsigned int *)t73);
    t109 = (t108 & t107);
    t110 = (t109 & 1U);
    if (t110 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t105) != 0)
        goto LAB20;

LAB21:    t112 = (t4 + 4);
    t113 = *((unsigned int *)t4);
    t114 = *((unsigned int *)t112);
    t115 = (t113 || t114);
    if (t115 > 0)
        goto LAB22;

LAB23:    t118 = *((unsigned int *)t4);
    t119 = (~(t118));
    t120 = *((unsigned int *)t112);
    t121 = (t119 || t120);
    if (t121 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t112) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t4) > 0)
        goto LAB28;

LAB29:    memcpy(t3, t124, 8);

LAB30:    t131 = (t0 + 5096);
    t133 = (t131 + 56U);
    t134 = *((char **)t133);
    t135 = (t134 + 56U);
    t136 = *((char **)t135);
    memcpy(t136, t3, 8);
    xsi_driver_vfirst_trans(t131, 0, 31);
    t137 = (t0 + 4952);
    *((int *)t137) = 1;

LAB1:    return;
LAB6:    t22 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB7;

LAB8:    t35 = *((unsigned int *)t23);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t23) = (t35 | t36);
    t37 = (t5 + 4);
    t38 = (t8 + 4);
    t39 = *((unsigned int *)t5);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (~(t41));
    t43 = *((unsigned int *)t8);
    t44 = (~(t43));
    t45 = *((unsigned int *)t38);
    t46 = (~(t45));
    t47 = (t40 & t42);
    t48 = (t44 & t46);
    t49 = (~(t47));
    t50 = (~(t48));
    t51 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t51 & t49);
    t52 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t52 & t50);
    t53 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t53 & t49);
    t54 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t54 & t50);
    goto LAB10;

LAB12:    *((unsigned int *)t57) = 1;
    goto LAB14;

LAB13:    t72 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB14;

LAB15:    t85 = *((unsigned int *)t73);
    t86 = *((unsigned int *)t79);
    *((unsigned int *)t73) = (t85 | t86);
    t87 = (t23 + 4);
    t88 = (t57 + 4);
    t89 = *((unsigned int *)t23);
    t90 = (~(t89));
    t91 = *((unsigned int *)t87);
    t92 = (~(t91));
    t93 = *((unsigned int *)t57);
    t94 = (~(t93));
    t95 = *((unsigned int *)t88);
    t96 = (~(t95));
    t97 = (t90 & t92);
    t98 = (t94 & t96);
    t99 = (~(t97));
    t100 = (~(t98));
    t101 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t101 & t99);
    t102 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t102 & t100);
    t103 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t103 & t99);
    t104 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t104 & t100);
    goto LAB17;

LAB18:    *((unsigned int *)t4) = 1;
    goto LAB21;

LAB20:    t111 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t111) = 1;
    goto LAB21;

LAB22:    t116 = (t0 + 2144U);
    t117 = *((char **)t116);
    goto LAB23;

LAB24:    t116 = (t0 + 3024);
    t122 = (t116 + 56U);
    t123 = *((char **)t122);
    t125 = (t0 + 3024);
    t126 = (t125 + 72U);
    t127 = *((char **)t126);
    t128 = (t0 + 3024);
    t129 = (t128 + 64U);
    t130 = *((char **)t129);
    t131 = (t0 + 1824U);
    t132 = *((char **)t131);
    xsi_vlog_generic_get_array_select_value(t124, 32, t123, t127, t130, 2, 1, t132, 5, 2);
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t3, 32, t117, 32, t124, 32);
    goto LAB30;

LAB28:    memcpy(t3, t117, 8);
    goto LAB30;

}


extern void work_m_00000000003784510532_4127636709_init()
{
	static char *pe[] = {(void *)Always_37_0,(void *)Cont_65_1,(void *)Cont_67_2};
	xsi_register_didat("work_m_00000000003784510532_4127636709", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000003784510532_4127636709.didat");
	xsi_register_executes(pe);
}

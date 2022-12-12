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
static const char *ng0 = "C:/Users/10791/P6_vesion2/P6_code/Comparator.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {16, 0};
static int ng4[] = {31, 0};



static void Always_41_0(char *t0)
{
    char t6[8];
    char t15[8];
    char t23[8];
    char t30[8];
    char t31[8];
    char t47[8];
    char t62[8];
    char t70[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    int t94;
    int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    goto LAB2;

LAB7:    xsi_set_current_line(43, ng0);

LAB9:    xsi_set_current_line(44, ng0);
    t13 = (t0 + 1048U);
    t14 = *((char **)t13);
    t13 = (t0 + 1008U);
    t16 = (t13 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 1608);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_index_select_value(t15, 1, t14, t17, 2, t20, 32, 1);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = (t0 + 1008U);
    t24 = (t21 + 72U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng4)));
    t27 = (t0 + 1608);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t30, 0, 8);
    xsi_vlog_signed_minus(t30, 32, t26, 32, t29, 32);
    xsi_vlog_generic_get_index_select_value(t23, 1, t22, t25, 2, t30, 32, 1);
    memset(t31, 0, 8);
    t32 = (t15 + 4);
    t33 = (t23 + 4);
    t34 = *((unsigned int *)t15);
    t35 = *((unsigned int *)t23);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t32);
    t42 = *((unsigned int *)t33);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB13;

LAB10:    if (t43 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t31) = 1;

LAB13:    memset(t47, 0, 8);
    t48 = (t31 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t31);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t48) != 0)
        goto LAB16;

LAB17:    t55 = (t47 + 4);
    t56 = *((unsigned int *)t47);
    t57 = *((unsigned int *)t55);
    t58 = (t56 || t57);
    if (t58 > 0)
        goto LAB18;

LAB19:    memcpy(t70, t47, 8);

LAB20:    t102 = (t70 + 4);
    t103 = *((unsigned int *)t102);
    t104 = (~(t103));
    t105 = *((unsigned int *)t70);
    t106 = (t105 & t104);
    t107 = (t106 != 0);
    if (t107 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(46, ng0);

LAB32:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB30:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB12:    t46 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB13;

LAB14:    *((unsigned int *)t47) = 1;
    goto LAB17;

LAB16:    t54 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB17;

LAB18:    t59 = (t0 + 1448);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memset(t62, 0, 8);
    t63 = (t61 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (~(t64));
    t66 = *((unsigned int *)t61);
    t67 = (t66 & t65);
    t68 = (t67 & 1U);
    if (t68 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t63) != 0)
        goto LAB23;

LAB24:    t71 = *((unsigned int *)t47);
    t72 = *((unsigned int *)t62);
    t73 = (t71 & t72);
    *((unsigned int *)t70) = t73;
    t74 = (t47 + 4);
    t75 = (t62 + 4);
    t76 = (t70 + 4);
    t77 = *((unsigned int *)t74);
    t78 = *((unsigned int *)t75);
    t79 = (t77 | t78);
    *((unsigned int *)t76) = t79;
    t80 = *((unsigned int *)t76);
    t81 = (t80 != 0);
    if (t81 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB20;

LAB21:    *((unsigned int *)t62) = 1;
    goto LAB24;

LAB23:    t69 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB24;

LAB25:    t82 = *((unsigned int *)t70);
    t83 = *((unsigned int *)t76);
    *((unsigned int *)t70) = (t82 | t83);
    t84 = (t47 + 4);
    t85 = (t62 + 4);
    t86 = *((unsigned int *)t47);
    t87 = (~(t86));
    t88 = *((unsigned int *)t84);
    t89 = (~(t88));
    t90 = *((unsigned int *)t62);
    t91 = (~(t90));
    t92 = *((unsigned int *)t85);
    t93 = (~(t92));
    t94 = (t87 & t89);
    t95 = (t91 & t93);
    t96 = (~(t94));
    t97 = (~(t95));
    t98 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t98 & t96);
    t99 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t99 & t97);
    t100 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t100 & t96);
    t101 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t101 & t97);
    goto LAB27;

LAB28:    xsi_set_current_line(44, ng0);

LAB31:    xsi_set_current_line(45, ng0);
    t108 = (t0 + 1448);
    t109 = (t108 + 56U);
    t110 = *((char **)t109);
    t111 = (t0 + 1448);
    xsi_vlogvar_assign_value(t111, t110, 0, 0, 1);
    goto LAB30;

}


extern void work_m_00000000001865495833_0981899902_init()
{
	static char *pe[] = {(void *)Always_41_0};
	xsi_register_didat("work_m_00000000001865495833_0981899902", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000001865495833_0981899902.didat");
	xsi_register_executes(pe);
}

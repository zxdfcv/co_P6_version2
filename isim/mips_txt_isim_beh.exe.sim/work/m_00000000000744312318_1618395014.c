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
static const char *ng0 = "C:/Users/10791/P6_vesion2/P6_code/muldiv.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {7U, 0U};
static int ng7[] = {0, 0};
static int ng8[] = {31, 0};
static int ng9[] = {63, 0};
static int ng10[] = {32, 0};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {5U, 0U};
static unsigned int ng13[] = {6U, 0U};



static void Initial_13_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(13, ng0);

LAB2:    xsi_set_current_line(14, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2840);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(15, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3000);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Cont_24_1(char *t0)
{
    char t3[16];
    char t8[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t10;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1320U);
    t5 = *((char **)t2);
    t2 = (t0 + 1480U);
    t7 = *((char **)t2);
    memset(t8, 0, 8);
    xsi_vlog_signed_divide(t8, 32, t5, 32, t7, 32);
    t2 = (t0 + 1320U);
    t10 = *((char **)t2);
    t2 = (t0 + 1480U);
    t12 = *((char **)t2);
    memset(t13, 0, 8);
    xsi_vlog_signed_mod(t13, 32, t10, 32, t12, 32);
    xsi_vlogtype_concat(t3, 64, 64, 2U, t13, 32, t8, 32);
    t2 = (t0 + 6000);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_bit_copy(t17, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t2, 0, 63);
    t18 = (t0 + 5872);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_25_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 5056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 5888);
    *((int *)t2) = 1;
    t3 = (t0 + 5088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(26, ng0);
    t4 = (t0 + 1640U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(42, ng0);

LAB25:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(27, ng0);

LAB20:    xsi_set_current_line(28, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 3000);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    goto LAB19;

LAB9:    xsi_set_current_line(30, ng0);

LAB21:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3000);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB19;

LAB11:    xsi_set_current_line(33, ng0);

LAB22:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3000);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB19;

LAB13:    xsi_set_current_line(36, ng0);

LAB23:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3000);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB19;

LAB15:    xsi_set_current_line(39, ng0);

LAB24:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3000);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB19;

}

static void Always_48_3(char *t0)
{
    char t6[8];
    char t31[16];
    char t34[16];
    char t36[16];
    char t37[8];
    char t38[8];
    char t46[8];
    char t57[8];
    char t58[8];
    char t59[8];
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
    int t30;
    char *t32;
    char *t33;
    char *t35;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    int t67;
    char *t68;
    unsigned int t69;
    int t70;
    int t71;
    char *t72;
    unsigned int t73;
    int t74;
    int t75;
    unsigned int t76;
    int t77;
    unsigned int t78;
    unsigned int t79;
    int t80;
    int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;

LAB0:    t1 = (t0 + 5304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 5904);
    *((int *)t2) = 1;
    t3 = (t0 + 5336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 2120U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
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

LAB11:    xsi_set_current_line(52, ng0);

LAB14:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t6) = 1;

LAB18:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(82, ng0);

LAB157:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);

LAB158:    t2 = ((char*)((ng12)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t30 == 1)
        goto LAB159;

LAB160:    t2 = ((char*)((ng13)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t30 == 1)
        goto LAB161;

LAB162:
LAB164:
LAB163:    xsi_set_current_line(90, ng0);

LAB168:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3640);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng1)));
    memset(t38, 0, 8);
    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB170;

LAB169:    t21 = (t7 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB170;

LAB173:    if (*((unsigned int *)t5) > *((unsigned int *)t7))
        goto LAB171;

LAB172:    memset(t46, 0, 8);
    t28 = (t38 + 4);
    t9 = *((unsigned int *)t28);
    t10 = (~(t9));
    t11 = *((unsigned int *)t38);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB174;

LAB175:    if (*((unsigned int *)t28) != 0)
        goto LAB176;

LAB177:    t33 = (t46 + 4);
    t14 = *((unsigned int *)t46);
    t15 = (!(t14));
    t16 = *((unsigned int *)t33);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB178;

LAB179:    memcpy(t58, t46, 8);

LAB180:    memset(t37, 0, 8);
    t65 = (t58 + 4);
    t78 = *((unsigned int *)t65);
    t79 = (~(t78));
    t82 = *((unsigned int *)t58);
    t83 = (t82 & t79);
    t84 = (t83 & 1U);
    if (t84 != 0)
        goto LAB188;

LAB189:    if (*((unsigned int *)t65) != 0)
        goto LAB190;

LAB191:    t72 = (t37 + 4);
    t85 = *((unsigned int *)t37);
    t86 = *((unsigned int *)t72);
    t87 = (t85 || t86);
    if (t87 > 0)
        goto LAB192;

LAB193:    t99 = *((unsigned int *)t37);
    t100 = (~(t99));
    t101 = *((unsigned int *)t72);
    t102 = (t100 || t101);
    if (t102 > 0)
        goto LAB194;

LAB195:    if (*((unsigned int *)t72) > 0)
        goto LAB196;

LAB197:    if (*((unsigned int *)t37) > 0)
        goto LAB198;

LAB199:    memcpy(t6, t105, 8);

LAB200:    t106 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t106, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3640);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng1)));
    memset(t38, 0, 8);
    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB202;

LAB201:    t21 = (t7 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB202;

LAB205:    if (*((unsigned int *)t5) > *((unsigned int *)t7))
        goto LAB203;

LAB204:    memset(t46, 0, 8);
    t28 = (t38 + 4);
    t9 = *((unsigned int *)t28);
    t10 = (~(t9));
    t11 = *((unsigned int *)t38);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB206;

LAB207:    if (*((unsigned int *)t28) != 0)
        goto LAB208;

LAB209:    t33 = (t46 + 4);
    t14 = *((unsigned int *)t46);
    t15 = (!(t14));
    t16 = *((unsigned int *)t33);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB210;

LAB211:    memcpy(t58, t46, 8);

LAB212:    memset(t37, 0, 8);
    t65 = (t58 + 4);
    t78 = *((unsigned int *)t65);
    t79 = (~(t78));
    t82 = *((unsigned int *)t58);
    t83 = (t82 & t79);
    t84 = (t83 & 1U);
    if (t84 != 0)
        goto LAB220;

LAB221:    if (*((unsigned int *)t65) != 0)
        goto LAB222;

LAB223:    t72 = (t37 + 4);
    t85 = *((unsigned int *)t37);
    t86 = *((unsigned int *)t72);
    t87 = (t85 || t86);
    if (t87 > 0)
        goto LAB224;

LAB225:    t99 = *((unsigned int *)t37);
    t100 = (~(t99));
    t101 = *((unsigned int *)t72);
    t102 = (t100 || t101);
    if (t102 > 0)
        goto LAB226;

LAB227:    if (*((unsigned int *)t72) > 0)
        goto LAB228;

LAB229:    if (*((unsigned int *)t37) > 0)
        goto LAB230;

LAB231:    memcpy(t6, t106, 8);

LAB232:    t107 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t107, t6, 0, 0, 32, 0LL);

LAB165:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3640);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng1)));
    memset(t38, 0, 8);
    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB234;

LAB233:    t21 = (t7 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB234;

LAB237:    if (*((unsigned int *)t5) > *((unsigned int *)t7))
        goto LAB235;

LAB236:    memset(t37, 0, 8);
    t28 = (t38 + 4);
    t9 = *((unsigned int *)t28);
    t10 = (~(t9));
    t11 = *((unsigned int *)t38);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB238;

LAB239:    if (*((unsigned int *)t28) != 0)
        goto LAB240;

LAB241:    t33 = (t37 + 4);
    t14 = *((unsigned int *)t37);
    t15 = *((unsigned int *)t33);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB242;

LAB243:    t17 = *((unsigned int *)t37);
    t18 = (~(t17));
    t19 = *((unsigned int *)t33);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB244;

LAB245:    if (*((unsigned int *)t33) > 0)
        goto LAB246;

LAB247:    if (*((unsigned int *)t37) > 0)
        goto LAB248;

LAB249:    memcpy(t6, t56, 8);

LAB250:    t60 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t60, t6, 0, 0, 4, 0LL);

LAB21:
LAB12:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3640);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB252;

LAB251:    t21 = (t7 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB252;

LAB255:    if (*((unsigned int *)t5) > *((unsigned int *)t7))
        goto LAB253;

LAB254:    memset(t37, 0, 8);
    t28 = (t6 + 4);
    t9 = *((unsigned int *)t28);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB256;

LAB257:    if (*((unsigned int *)t28) != 0)
        goto LAB258;

LAB259:    t33 = (t37 + 4);
    t14 = *((unsigned int *)t37);
    t15 = (!(t14));
    t16 = *((unsigned int *)t33);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB260;

LAB261:    memcpy(t46, t37, 8);

LAB262:    t65 = (t46 + 4);
    t78 = *((unsigned int *)t65);
    t79 = (~(t78));
    t82 = *((unsigned int *)t46);
    t83 = (t82 & t79);
    t84 = (t83 != 0);
    if (t84 > 0)
        goto LAB270;

LAB271:    xsi_set_current_line(100, ng0);

LAB274:    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);

LAB272:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(49, ng0);

LAB13:    xsi_set_current_line(50, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 4, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB17:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(53, ng0);

LAB22:    xsi_set_current_line(54, ng0);
    t28 = (t0 + 1640U);
    t29 = *((char **)t28);

LAB23:    t28 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t28, 4);
    if (t30 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB32;

LAB33:
LAB35:
LAB34:    xsi_set_current_line(78, ng0);

LAB156:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 64, 0LL);

LAB36:    goto LAB21;

LAB24:    xsi_set_current_line(55, ng0);

LAB37:    xsi_set_current_line(56, ng0);
    t32 = (t0 + 1320U);
    t33 = *((char **)t32);
    xsi_vlogtype_sign_extend(t31, 64, t33, 32);
    t32 = (t0 + 1480U);
    t35 = *((char **)t32);
    xsi_vlogtype_sign_extend(t34, 64, t35, 32);
    xsi_vlog_signed_multiply(t36, 64, t31, 64, t34, 64);
    t32 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t32, t36, 0, 0, 64, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB36;

LAB26:    xsi_set_current_line(59, ng0);

LAB38:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 1320U);
    t4 = *((char **)t3);
    t3 = (t0 + 1480U);
    t5 = *((char **)t3);
    xsi_vlog_unsigned_multiply(t31, 64, t4, 32, t5, 32);
    t3 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t3, t31, 0, 0, 64, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB36;

LAB28:    xsi_set_current_line(63, ng0);

LAB39:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng7)));
    memset(t38, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB43;

LAB40:    if (t18 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t38) = 1;

LAB43:    memset(t37, 0, 8);
    t21 = (t38 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t38);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t21) != 0)
        goto LAB46;

LAB47:    t28 = (t37 + 4);
    t39 = *((unsigned int *)t37);
    t40 = *((unsigned int *)t28);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB48;

LAB49:    t42 = *((unsigned int *)t37);
    t43 = (~(t42));
    t44 = *((unsigned int *)t28);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t28) > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t37) > 0)
        goto LAB54;

LAB55:    memcpy(t6, t46, 8);

LAB56:    t56 = (t0 + 3480);
    t60 = (t0 + 3480);
    t61 = (t60 + 72U);
    t62 = *((char **)t61);
    t63 = ((char*)((ng8)));
    t64 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t57, t58, t59, ((int*)(t62)), 2, t63, 32, 1, t64, 32, 1);
    t65 = (t57 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (!(t66));
    t68 = (t58 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (!(t69));
    t71 = (t67 && t70);
    t72 = (t59 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (!(t73));
    t75 = (t71 && t74);
    if (t75 == 1)
        goto LAB57;

LAB58:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t38, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB62;

LAB59:    if (t18 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t38) = 1;

LAB62:    memset(t37, 0, 8);
    t8 = (t38 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t38);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t8) != 0)
        goto LAB65;

LAB66:    t22 = (t37 + 4);
    t39 = *((unsigned int *)t37);
    t40 = *((unsigned int *)t22);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB67;

LAB68:    t42 = *((unsigned int *)t37);
    t43 = (~(t42));
    t44 = *((unsigned int *)t22);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t22) > 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t37) > 0)
        goto LAB73;

LAB74:    memcpy(t6, t46, 8);

LAB75:    t56 = (t0 + 3480);
    t60 = (t0 + 3480);
    t61 = (t60 + 72U);
    t62 = *((char **)t61);
    t63 = ((char*)((ng9)));
    t64 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t57, t58, t59, ((int*)(t62)), 2, t63, 32, 1, t64, 32, 1);
    t65 = (t57 + 4);
    t66 = *((unsigned int *)t65);
    t30 = (!(t66));
    t68 = (t58 + 4);
    t69 = *((unsigned int *)t68);
    t67 = (!(t69));
    t70 = (t30 && t67);
    t72 = (t59 + 4);
    t73 = *((unsigned int *)t72);
    t71 = (!(t73));
    t74 = (t70 && t71);
    if (t74 == 1)
        goto LAB76;

LAB77:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB36;

LAB30:    xsi_set_current_line(68, ng0);

LAB78:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng7)));
    memset(t38, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB82;

LAB79:    if (t18 != 0)
        goto LAB81;

LAB80:    *((unsigned int *)t38) = 1;

LAB82:    memset(t37, 0, 8);
    t21 = (t38 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t38);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t21) != 0)
        goto LAB85;

LAB86:    t28 = (t37 + 4);
    t39 = *((unsigned int *)t37);
    t40 = *((unsigned int *)t28);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB87;

LAB88:    t42 = *((unsigned int *)t37);
    t43 = (~(t42));
    t44 = *((unsigned int *)t28);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t28) > 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t37) > 0)
        goto LAB93;

LAB94:    memcpy(t6, t46, 8);

LAB95:    t47 = (t0 + 3480);
    t56 = (t0 + 3480);
    t60 = (t56 + 72U);
    t61 = *((char **)t60);
    t62 = ((char*)((ng8)));
    t63 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t57, t58, t59, ((int*)(t61)), 2, t62, 32, 1, t63, 32, 1);
    t64 = (t57 + 4);
    t50 = *((unsigned int *)t64);
    t67 = (!(t50));
    t65 = (t58 + 4);
    t51 = *((unsigned int *)t65);
    t70 = (!(t51));
    t71 = (t67 && t70);
    t68 = (t59 + 4);
    t52 = *((unsigned int *)t68);
    t74 = (!(t52));
    t75 = (t71 && t74);
    if (t75 == 1)
        goto LAB96;

LAB97:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t38, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB101;

LAB98:    if (t18 != 0)
        goto LAB100;

LAB99:    *((unsigned int *)t38) = 1;

LAB101:    memset(t37, 0, 8);
    t8 = (t38 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t38);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t8) != 0)
        goto LAB104;

LAB105:    t22 = (t37 + 4);
    t39 = *((unsigned int *)t37);
    t40 = *((unsigned int *)t22);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB106;

LAB107:    t42 = *((unsigned int *)t37);
    t43 = (~(t42));
    t44 = *((unsigned int *)t22);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB108;

LAB109:    if (*((unsigned int *)t22) > 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t37) > 0)
        goto LAB112;

LAB113:    memcpy(t6, t46, 8);

LAB114:    t35 = (t0 + 3480);
    t49 = (t0 + 3480);
    t56 = (t49 + 72U);
    t60 = *((char **)t56);
    t61 = ((char*)((ng9)));
    t62 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t57, t58, t59, ((int*)(t60)), 2, t61, 32, 1, t62, 32, 1);
    t63 = (t57 + 4);
    t50 = *((unsigned int *)t63);
    t30 = (!(t50));
    t64 = (t58 + 4);
    t51 = *((unsigned int *)t64);
    t67 = (!(t51));
    t70 = (t30 && t67);
    t65 = (t59 + 4);
    t52 = *((unsigned int *)t65);
    t71 = (!(t52));
    t74 = (t70 && t71);
    if (t74 == 1)
        goto LAB115;

LAB116:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB36;

LAB32:    xsi_set_current_line(73, ng0);

LAB117:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng7)));
    memset(t38, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB121;

LAB118:    if (t18 != 0)
        goto LAB120;

LAB119:    *((unsigned int *)t38) = 1;

LAB121:    memset(t37, 0, 8);
    t21 = (t38 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t38);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t21) != 0)
        goto LAB124;

LAB125:    t28 = (t37 + 4);
    t39 = *((unsigned int *)t37);
    t40 = *((unsigned int *)t28);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB126;

LAB127:    t42 = *((unsigned int *)t37);
    t43 = (~(t42));
    t44 = *((unsigned int *)t28);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB128;

LAB129:    if (*((unsigned int *)t28) > 0)
        goto LAB130;

LAB131:    if (*((unsigned int *)t37) > 0)
        goto LAB132;

LAB133:    memcpy(t6, t46, 8);

LAB134:    t56 = (t0 + 3480);
    t60 = (t0 + 3480);
    t61 = (t60 + 72U);
    t62 = *((char **)t61);
    t63 = ((char*)((ng8)));
    t64 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t57, t58, t59, ((int*)(t62)), 2, t63, 32, 1, t64, 32, 1);
    t65 = (t57 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (!(t66));
    t68 = (t58 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (!(t69));
    t71 = (t67 && t70);
    t72 = (t59 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (!(t73));
    t75 = (t71 && t74);
    if (t75 == 1)
        goto LAB135;

LAB136:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t38, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB140;

LAB137:    if (t18 != 0)
        goto LAB139;

LAB138:    *((unsigned int *)t38) = 1;

LAB140:    memset(t37, 0, 8);
    t8 = (t38 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t38);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB141;

LAB142:    if (*((unsigned int *)t8) != 0)
        goto LAB143;

LAB144:    t22 = (t37 + 4);
    t39 = *((unsigned int *)t37);
    t40 = *((unsigned int *)t22);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB145;

LAB146:    t42 = *((unsigned int *)t37);
    t43 = (~(t42));
    t44 = *((unsigned int *)t22);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB147;

LAB148:    if (*((unsigned int *)t22) > 0)
        goto LAB149;

LAB150:    if (*((unsigned int *)t37) > 0)
        goto LAB151;

LAB152:    memcpy(t6, t46, 8);

LAB153:    t56 = (t0 + 3480);
    t60 = (t0 + 3480);
    t61 = (t60 + 72U);
    t62 = *((char **)t61);
    t63 = ((char*)((ng9)));
    t64 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t57, t58, t59, ((int*)(t62)), 2, t63, 32, 1, t64, 32, 1);
    t65 = (t57 + 4);
    t66 = *((unsigned int *)t65);
    t30 = (!(t66));
    t68 = (t58 + 4);
    t69 = *((unsigned int *)t68);
    t67 = (!(t69));
    t70 = (t30 && t67);
    t72 = (t59 + 4);
    t73 = *((unsigned int *)t72);
    t71 = (!(t73));
    t74 = (t70 && t71);
    if (t74 == 1)
        goto LAB154;

LAB155:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB36;

LAB42:    t8 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB43;

LAB44:    *((unsigned int *)t37) = 1;
    goto LAB47;

LAB46:    t22 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB47;

LAB48:    t32 = (t0 + 3160);
    t33 = (t32 + 56U);
    t35 = *((char **)t33);
    goto LAB49;

LAB50:    t47 = (t0 + 2440U);
    t48 = *((char **)t47);
    memset(t46, 0, 8);
    t47 = (t46 + 4);
    t49 = (t48 + 4);
    t50 = *((unsigned int *)t48);
    t51 = (t50 >> 0);
    *((unsigned int *)t46) = t51;
    t52 = *((unsigned int *)t49);
    t53 = (t52 >> 0);
    *((unsigned int *)t47) = t53;
    t54 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t54 & 4294967295U);
    t55 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t55 & 4294967295U);
    goto LAB51;

LAB52:    xsi_vlog_unsigned_bit_combine(t6, 32, t35, 32, t46, 32);
    goto LAB56;

LAB54:    memcpy(t6, t35, 8);
    goto LAB56;

LAB57:    t76 = *((unsigned int *)t59);
    t77 = (t76 + 0);
    t78 = *((unsigned int *)t57);
    t79 = *((unsigned int *)t58);
    t80 = (t78 - t79);
    t81 = (t80 + 1);
    xsi_vlogvar_wait_assign_value(t56, t6, t77, *((unsigned int *)t58), t81, 0LL);
    goto LAB58;

LAB61:    t7 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB62;

LAB63:    *((unsigned int *)t37) = 1;
    goto LAB66;

LAB65:    t21 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB66;

LAB67:    t28 = (t0 + 3320);
    t32 = (t28 + 56U);
    t33 = *((char **)t32);
    goto LAB68;

LAB69:    t35 = (t0 + 2440U);
    t47 = *((char **)t35);
    memset(t46, 0, 8);
    t35 = (t46 + 4);
    t48 = (t47 + 8);
    t49 = (t47 + 12);
    t50 = *((unsigned int *)t48);
    t51 = (t50 >> 0);
    *((unsigned int *)t46) = t51;
    t52 = *((unsigned int *)t49);
    t53 = (t52 >> 0);
    *((unsigned int *)t35) = t53;
    t54 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t54 & 4294967295U);
    t55 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t55 & 4294967295U);
    goto LAB70;

LAB71:    xsi_vlog_unsigned_bit_combine(t6, 32, t33, 32, t46, 32);
    goto LAB75;

LAB73:    memcpy(t6, t33, 8);
    goto LAB75;

LAB76:    t76 = *((unsigned int *)t59);
    t75 = (t76 + 0);
    t78 = *((unsigned int *)t57);
    t79 = *((unsigned int *)t58);
    t77 = (t78 - t79);
    t80 = (t77 + 1);
    xsi_vlogvar_wait_assign_value(t56, t6, t75, *((unsigned int *)t58), t80, 0LL);
    goto LAB77;

LAB81:    t8 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB82;

LAB83:    *((unsigned int *)t37) = 1;
    goto LAB86;

LAB85:    t22 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB86;

LAB87:    t32 = (t0 + 3160);
    t33 = (t32 + 56U);
    t35 = *((char **)t33);
    goto LAB88;

LAB89:    t47 = (t0 + 1320U);
    t48 = *((char **)t47);
    t47 = (t0 + 1480U);
    t49 = *((char **)t47);
    memset(t46, 0, 8);
    xsi_vlog_unsigned_divide(t46, 32, t48, 32, t49, 32);
    goto LAB90;

LAB91:    xsi_vlog_unsigned_bit_combine(t6, 32, t35, 32, t46, 32);
    goto LAB95;

LAB93:    memcpy(t6, t35, 8);
    goto LAB95;

LAB96:    t53 = *((unsigned int *)t59);
    t77 = (t53 + 0);
    t54 = *((unsigned int *)t57);
    t55 = *((unsigned int *)t58);
    t80 = (t54 - t55);
    t81 = (t80 + 1);
    xsi_vlogvar_wait_assign_value(t47, t6, t77, *((unsigned int *)t58), t81, 0LL);
    goto LAB97;

LAB100:    t7 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB101;

LAB102:    *((unsigned int *)t37) = 1;
    goto LAB105;

LAB104:    t21 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB105;

LAB106:    t28 = (t0 + 3320);
    t32 = (t28 + 56U);
    t33 = *((char **)t32);
    goto LAB107;

LAB108:    t35 = (t0 + 1320U);
    t47 = *((char **)t35);
    t35 = (t0 + 1480U);
    t48 = *((char **)t35);
    memset(t46, 0, 8);
    xsi_vlog_unsigned_mod(t46, 32, t47, 32, t48, 32);
    goto LAB109;

LAB110:    xsi_vlog_unsigned_bit_combine(t6, 32, t33, 32, t46, 32);
    goto LAB114;

LAB112:    memcpy(t6, t33, 8);
    goto LAB114;

LAB115:    t53 = *((unsigned int *)t59);
    t75 = (t53 + 0);
    t54 = *((unsigned int *)t57);
    t55 = *((unsigned int *)t58);
    t77 = (t54 - t55);
    t80 = (t77 + 1);
    xsi_vlogvar_wait_assign_value(t35, t6, t75, *((unsigned int *)t58), t80, 0LL);
    goto LAB116;

LAB120:    t8 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB121;

LAB122:    *((unsigned int *)t37) = 1;
    goto LAB125;

LAB124:    t22 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB125;

LAB126:    t32 = (t0 + 3160);
    t33 = (t32 + 56U);
    t35 = *((char **)t33);
    goto LAB127;

LAB128:    t47 = (t0 + 2440U);
    t48 = *((char **)t47);
    memset(t46, 0, 8);
    t47 = (t46 + 4);
    t49 = (t48 + 4);
    t50 = *((unsigned int *)t48);
    t51 = (t50 >> 0);
    *((unsigned int *)t46) = t51;
    t52 = *((unsigned int *)t49);
    t53 = (t52 >> 0);
    *((unsigned int *)t47) = t53;
    t54 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t54 & 4294967295U);
    t55 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t55 & 4294967295U);
    goto LAB129;

LAB130:    xsi_vlog_unsigned_bit_combine(t6, 32, t35, 32, t46, 32);
    goto LAB134;

LAB132:    memcpy(t6, t35, 8);
    goto LAB134;

LAB135:    t76 = *((unsigned int *)t59);
    t77 = (t76 + 0);
    t78 = *((unsigned int *)t57);
    t79 = *((unsigned int *)t58);
    t80 = (t78 - t79);
    t81 = (t80 + 1);
    xsi_vlogvar_wait_assign_value(t56, t6, t77, *((unsigned int *)t58), t81, 0LL);
    goto LAB136;

LAB139:    t7 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB140;

LAB141:    *((unsigned int *)t37) = 1;
    goto LAB144;

LAB143:    t21 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB144;

LAB145:    t28 = (t0 + 3320);
    t32 = (t28 + 56U);
    t33 = *((char **)t32);
    goto LAB146;

LAB147:    t35 = (t0 + 2440U);
    t47 = *((char **)t35);
    memset(t46, 0, 8);
    t35 = (t46 + 4);
    t48 = (t47 + 8);
    t49 = (t47 + 12);
    t50 = *((unsigned int *)t48);
    t51 = (t50 >> 0);
    *((unsigned int *)t46) = t51;
    t52 = *((unsigned int *)t49);
    t53 = (t52 >> 0);
    *((unsigned int *)t35) = t53;
    t54 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t54 & 4294967295U);
    t55 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t55 & 4294967295U);
    goto LAB148;

LAB149:    xsi_vlog_unsigned_bit_combine(t6, 32, t33, 32, t46, 32);
    goto LAB153;

LAB151:    memcpy(t6, t33, 8);
    goto LAB153;

LAB154:    t76 = *((unsigned int *)t59);
    t75 = (t76 + 0);
    t78 = *((unsigned int *)t57);
    t79 = *((unsigned int *)t58);
    t77 = (t78 - t79);
    t80 = (t77 + 1);
    xsi_vlogvar_wait_assign_value(t56, t6, t75, *((unsigned int *)t58), t80, 0LL);
    goto LAB155;

LAB159:    xsi_set_current_line(84, ng0);

LAB166:    xsi_set_current_line(85, ng0);
    t4 = (t0 + 1320U);
    t5 = *((char **)t4);
    t4 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    goto LAB165;

LAB161:    xsi_set_current_line(87, ng0);

LAB167:    xsi_set_current_line(88, ng0);
    t4 = (t0 + 1320U);
    t5 = *((char **)t4);
    t4 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    goto LAB165;

LAB170:    t22 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB172;

LAB171:    *((unsigned int *)t38) = 1;
    goto LAB172;

LAB174:    *((unsigned int *)t46) = 1;
    goto LAB177;

LAB176:    t32 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB177;

LAB178:    t35 = (t0 + 3000);
    t47 = (t35 + 56U);
    t48 = *((char **)t47);
    memset(t57, 0, 8);
    t49 = (t48 + 4);
    t18 = *((unsigned int *)t49);
    t19 = (~(t18));
    t20 = *((unsigned int *)t48);
    t23 = (t20 & t19);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB181;

LAB182:    if (*((unsigned int *)t49) != 0)
        goto LAB183;

LAB184:    t25 = *((unsigned int *)t46);
    t26 = *((unsigned int *)t57);
    t27 = (t25 | t26);
    *((unsigned int *)t58) = t27;
    t60 = (t46 + 4);
    t61 = (t57 + 4);
    t62 = (t58 + 4);
    t39 = *((unsigned int *)t60);
    t40 = *((unsigned int *)t61);
    t41 = (t39 | t40);
    *((unsigned int *)t62) = t41;
    t42 = *((unsigned int *)t62);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB185;

LAB186:
LAB187:    goto LAB180;

LAB181:    *((unsigned int *)t57) = 1;
    goto LAB184;

LAB183:    t56 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB184;

LAB185:    t44 = *((unsigned int *)t58);
    t45 = *((unsigned int *)t62);
    *((unsigned int *)t58) = (t44 | t45);
    t63 = (t46 + 4);
    t64 = (t57 + 4);
    t50 = *((unsigned int *)t63);
    t51 = (~(t50));
    t52 = *((unsigned int *)t46);
    t30 = (t52 & t51);
    t53 = *((unsigned int *)t64);
    t54 = (~(t53));
    t55 = *((unsigned int *)t57);
    t67 = (t55 & t54);
    t66 = (~(t30));
    t69 = (~(t67));
    t73 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t73 & t66);
    t76 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t76 & t69);
    goto LAB187;

LAB188:    *((unsigned int *)t37) = 1;
    goto LAB191;

LAB190:    t68 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB191;

LAB192:    t88 = (t0 + 3480);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    memset(t59, 0, 8);
    t91 = (t59 + 4);
    t92 = (t90 + 4);
    t93 = *((unsigned int *)t90);
    t94 = (t93 >> 0);
    *((unsigned int *)t59) = t94;
    t95 = *((unsigned int *)t92);
    t96 = (t95 >> 0);
    *((unsigned int *)t91) = t96;
    t97 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t97 & 4294967295U);
    t98 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t98 & 4294967295U);
    goto LAB193;

LAB194:    t103 = (t0 + 3160);
    t104 = (t103 + 56U);
    t105 = *((char **)t104);
    goto LAB195;

LAB196:    xsi_vlog_unsigned_bit_combine(t6, 32, t59, 32, t105, 32);
    goto LAB200;

LAB198:    memcpy(t6, t59, 8);
    goto LAB200;

LAB202:    t22 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB204;

LAB203:    *((unsigned int *)t38) = 1;
    goto LAB204;

LAB206:    *((unsigned int *)t46) = 1;
    goto LAB209;

LAB208:    t32 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB209;

LAB210:    t35 = (t0 + 3000);
    t47 = (t35 + 56U);
    t48 = *((char **)t47);
    memset(t57, 0, 8);
    t49 = (t48 + 4);
    t18 = *((unsigned int *)t49);
    t19 = (~(t18));
    t20 = *((unsigned int *)t48);
    t23 = (t20 & t19);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB213;

LAB214:    if (*((unsigned int *)t49) != 0)
        goto LAB215;

LAB216:    t25 = *((unsigned int *)t46);
    t26 = *((unsigned int *)t57);
    t27 = (t25 | t26);
    *((unsigned int *)t58) = t27;
    t60 = (t46 + 4);
    t61 = (t57 + 4);
    t62 = (t58 + 4);
    t39 = *((unsigned int *)t60);
    t40 = *((unsigned int *)t61);
    t41 = (t39 | t40);
    *((unsigned int *)t62) = t41;
    t42 = *((unsigned int *)t62);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB217;

LAB218:
LAB219:    goto LAB212;

LAB213:    *((unsigned int *)t57) = 1;
    goto LAB216;

LAB215:    t56 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB216;

LAB217:    t44 = *((unsigned int *)t58);
    t45 = *((unsigned int *)t62);
    *((unsigned int *)t58) = (t44 | t45);
    t63 = (t46 + 4);
    t64 = (t57 + 4);
    t50 = *((unsigned int *)t63);
    t51 = (~(t50));
    t52 = *((unsigned int *)t46);
    t30 = (t52 & t51);
    t53 = *((unsigned int *)t64);
    t54 = (~(t53));
    t55 = *((unsigned int *)t57);
    t67 = (t55 & t54);
    t66 = (~(t30));
    t69 = (~(t67));
    t73 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t73 & t66);
    t76 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t76 & t69);
    goto LAB219;

LAB220:    *((unsigned int *)t37) = 1;
    goto LAB223;

LAB222:    t68 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB223;

LAB224:    t88 = (t0 + 3480);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    memset(t59, 0, 8);
    t91 = (t59 + 4);
    t92 = (t90 + 8);
    t103 = (t90 + 12);
    t93 = *((unsigned int *)t92);
    t94 = (t93 >> 0);
    *((unsigned int *)t59) = t94;
    t95 = *((unsigned int *)t103);
    t96 = (t95 >> 0);
    *((unsigned int *)t91) = t96;
    t97 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t97 & 4294967295U);
    t98 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t98 & 4294967295U);
    goto LAB225;

LAB226:    t104 = (t0 + 3320);
    t105 = (t104 + 56U);
    t106 = *((char **)t105);
    goto LAB227;

LAB228:    xsi_vlog_unsigned_bit_combine(t6, 32, t59, 32, t106, 32);
    goto LAB232;

LAB230:    memcpy(t6, t59, 8);
    goto LAB232;

LAB234:    t22 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB236;

LAB235:    *((unsigned int *)t38) = 1;
    goto LAB236;

LAB238:    *((unsigned int *)t37) = 1;
    goto LAB241;

LAB240:    t32 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB241;

LAB242:    t35 = (t0 + 3640);
    t47 = (t35 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng2)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_minus(t46, 4, t48, 4, t49, 4);
    goto LAB243;

LAB244:    t56 = ((char*)((ng1)));
    goto LAB245;

LAB246:    xsi_vlog_unsigned_bit_combine(t6, 4, t46, 4, t56, 4);
    goto LAB250;

LAB248:    memcpy(t6, t46, 8);
    goto LAB250;

LAB252:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB254;

LAB253:    *((unsigned int *)t6) = 1;
    goto LAB254;

LAB256:    *((unsigned int *)t37) = 1;
    goto LAB259;

LAB258:    t32 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB259;

LAB260:    t35 = (t0 + 3000);
    t47 = (t35 + 56U);
    t48 = *((char **)t47);
    memset(t38, 0, 8);
    t49 = (t48 + 4);
    t18 = *((unsigned int *)t49);
    t19 = (~(t18));
    t20 = *((unsigned int *)t48);
    t23 = (t20 & t19);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB263;

LAB264:    if (*((unsigned int *)t49) != 0)
        goto LAB265;

LAB266:    t25 = *((unsigned int *)t37);
    t26 = *((unsigned int *)t38);
    t27 = (t25 | t26);
    *((unsigned int *)t46) = t27;
    t60 = (t37 + 4);
    t61 = (t38 + 4);
    t62 = (t46 + 4);
    t39 = *((unsigned int *)t60);
    t40 = *((unsigned int *)t61);
    t41 = (t39 | t40);
    *((unsigned int *)t62) = t41;
    t42 = *((unsigned int *)t62);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB267;

LAB268:
LAB269:    goto LAB262;

LAB263:    *((unsigned int *)t38) = 1;
    goto LAB266;

LAB265:    t56 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB266;

LAB267:    t44 = *((unsigned int *)t46);
    t45 = *((unsigned int *)t62);
    *((unsigned int *)t46) = (t44 | t45);
    t63 = (t37 + 4);
    t64 = (t38 + 4);
    t50 = *((unsigned int *)t63);
    t51 = (~(t50));
    t52 = *((unsigned int *)t37);
    t30 = (t52 & t51);
    t53 = *((unsigned int *)t64);
    t54 = (~(t53));
    t55 = *((unsigned int *)t38);
    t67 = (t55 & t54);
    t66 = (~(t30));
    t69 = (~(t67));
    t73 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t73 & t66);
    t76 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t76 & t69);
    goto LAB269;

LAB270:    xsi_set_current_line(98, ng0);

LAB273:    xsi_set_current_line(99, ng0);
    t68 = ((char*)((ng2)));
    t72 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t72, t68, 0, 0, 1, 0LL);
    goto LAB272;

}

static void Cont_104_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
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
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;

LAB0:    t1 = (t0 + 5552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1800U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
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
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t42, 8);

LAB20:    t43 = (t0 + 6064);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memcpy(t47, t3, 8);
    xsi_driver_vfirst_trans(t43, 0, 31);
    t48 = (t0 + 5920);
    *((int *)t48) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 3320);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    goto LAB13;

LAB14:    t40 = (t0 + 3160);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t42, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}


extern void work_m_00000000000744312318_1618395014_init()
{
	static char *pe[] = {(void *)Initial_13_0,(void *)Cont_24_1,(void *)Always_25_2,(void *)Always_48_3,(void *)Cont_104_4};
	xsi_register_didat("work_m_00000000000744312318_1618395014", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000000744312318_1618395014.didat");
	xsi_register_executes(pe);
}

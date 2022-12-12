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
static const char *ng0 = "C:/Users/10791/P6_vesion2/P6_code/MemOp.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {8U, 0U};



static void Cont_35_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t15[8];
    char t47[8];
    char t48[8];
    char t49[8];
    char t60[8];
    char t92[8];
    char t93[8];
    char t94[8];
    char t105[8];
    char t137[8];
    char t138[8];
    char t139[8];
    char t150[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
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
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t140;
    char *t141;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    char *t151;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    char *t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    char *t182;
    char *t183;
    char *t184;
    char *t185;
    char *t186;
    char *t187;
    unsigned int t188;
    unsigned int t189;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    char *t193;
    unsigned int t194;
    unsigned int t195;
    char *t196;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1048U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 3U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 3U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t5 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    memset(t4, 0, 8);
    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t31) != 0)
        goto LAB10;

LAB11:    t38 = (t4 + 4);
    t39 = *((unsigned int *)t4);
    t40 = *((unsigned int *)t38);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB12;

LAB13:    t43 = *((unsigned int *)t4);
    t44 = (~(t43));
    t45 = *((unsigned int *)t38);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t38) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t47, 8);

LAB20:    t183 = (t0 + 3352);
    t184 = (t183 + 56U);
    t185 = *((char **)t184);
    t186 = (t185 + 56U);
    t187 = *((char **)t186);
    memset(t187, 0, 8);
    t188 = 15U;
    t189 = t188;
    t190 = (t3 + 4);
    t191 = *((unsigned int *)t3);
    t188 = (t188 & t191);
    t192 = *((unsigned int *)t190);
    t189 = (t189 & t192);
    t193 = (t187 + 4);
    t194 = *((unsigned int *)t187);
    *((unsigned int *)t187) = (t194 | t188);
    t195 = *((unsigned int *)t193);
    *((unsigned int *)t193) = (t195 | t189);
    xsi_driver_vfirst_trans(t183, 0, 3);
    t196 = (t0 + 3256);
    *((int *)t196) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t37 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB11;

LAB12:    t42 = ((char*)((ng2)));
    goto LAB13;

LAB14:    t50 = (t0 + 1048U);
    t51 = *((char **)t50);
    memset(t49, 0, 8);
    t50 = (t49 + 4);
    t52 = (t51 + 4);
    t53 = *((unsigned int *)t51);
    t54 = (t53 >> 0);
    *((unsigned int *)t49) = t54;
    t55 = *((unsigned int *)t52);
    t56 = (t55 >> 0);
    *((unsigned int *)t50) = t56;
    t57 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t57 & 3U);
    t58 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t58 & 3U);
    t59 = ((char*)((ng2)));
    memset(t60, 0, 8);
    t61 = (t49 + 4);
    t62 = (t59 + 4);
    t63 = *((unsigned int *)t49);
    t64 = *((unsigned int *)t59);
    t65 = (t63 ^ t64);
    t66 = *((unsigned int *)t61);
    t67 = *((unsigned int *)t62);
    t68 = (t66 ^ t67);
    t69 = (t65 | t68);
    t70 = *((unsigned int *)t61);
    t71 = *((unsigned int *)t62);
    t72 = (t70 | t71);
    t73 = (~(t72));
    t74 = (t69 & t73);
    if (t74 != 0)
        goto LAB24;

LAB21:    if (t72 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t60) = 1;

LAB24:    memset(t48, 0, 8);
    t76 = (t60 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t60);
    t80 = (t79 & t78);
    t81 = (t80 & 1U);
    if (t81 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t76) != 0)
        goto LAB27;

LAB28:    t83 = (t48 + 4);
    t84 = *((unsigned int *)t48);
    t85 = *((unsigned int *)t83);
    t86 = (t84 || t85);
    if (t86 > 0)
        goto LAB29;

LAB30:    t88 = *((unsigned int *)t48);
    t89 = (~(t88));
    t90 = *((unsigned int *)t83);
    t91 = (t89 || t90);
    if (t91 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t83) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t48) > 0)
        goto LAB35;

LAB36:    memcpy(t47, t92, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 4, t42, 4, t47, 4);
    goto LAB20;

LAB18:    memcpy(t3, t42, 8);
    goto LAB20;

LAB23:    t75 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t48) = 1;
    goto LAB28;

LAB27:    t82 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB28;

LAB29:    t87 = ((char*)((ng3)));
    goto LAB30;

LAB31:    t95 = (t0 + 1048U);
    t96 = *((char **)t95);
    memset(t94, 0, 8);
    t95 = (t94 + 4);
    t97 = (t96 + 4);
    t98 = *((unsigned int *)t96);
    t99 = (t98 >> 0);
    *((unsigned int *)t94) = t99;
    t100 = *((unsigned int *)t97);
    t101 = (t100 >> 0);
    *((unsigned int *)t95) = t101;
    t102 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t102 & 3U);
    t103 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t103 & 3U);
    t104 = ((char*)((ng3)));
    memset(t105, 0, 8);
    t106 = (t94 + 4);
    t107 = (t104 + 4);
    t108 = *((unsigned int *)t94);
    t109 = *((unsigned int *)t104);
    t110 = (t108 ^ t109);
    t111 = *((unsigned int *)t106);
    t112 = *((unsigned int *)t107);
    t113 = (t111 ^ t112);
    t114 = (t110 | t113);
    t115 = *((unsigned int *)t106);
    t116 = *((unsigned int *)t107);
    t117 = (t115 | t116);
    t118 = (~(t117));
    t119 = (t114 & t118);
    if (t119 != 0)
        goto LAB41;

LAB38:    if (t117 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t105) = 1;

LAB41:    memset(t93, 0, 8);
    t121 = (t105 + 4);
    t122 = *((unsigned int *)t121);
    t123 = (~(t122));
    t124 = *((unsigned int *)t105);
    t125 = (t124 & t123);
    t126 = (t125 & 1U);
    if (t126 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t121) != 0)
        goto LAB44;

LAB45:    t128 = (t93 + 4);
    t129 = *((unsigned int *)t93);
    t130 = *((unsigned int *)t128);
    t131 = (t129 || t130);
    if (t131 > 0)
        goto LAB46;

LAB47:    t133 = *((unsigned int *)t93);
    t134 = (~(t133));
    t135 = *((unsigned int *)t128);
    t136 = (t134 || t135);
    if (t136 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t128) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t93) > 0)
        goto LAB52;

LAB53:    memcpy(t92, t137, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t47, 4, t87, 4, t92, 4);
    goto LAB37;

LAB35:    memcpy(t47, t87, 8);
    goto LAB37;

LAB40:    t120 = (t105 + 4);
    *((unsigned int *)t105) = 1;
    *((unsigned int *)t120) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t93) = 1;
    goto LAB45;

LAB44:    t127 = (t93 + 4);
    *((unsigned int *)t93) = 1;
    *((unsigned int *)t127) = 1;
    goto LAB45;

LAB46:    t132 = ((char*)((ng4)));
    goto LAB47;

LAB48:    t140 = (t0 + 1048U);
    t141 = *((char **)t140);
    memset(t139, 0, 8);
    t140 = (t139 + 4);
    t142 = (t141 + 4);
    t143 = *((unsigned int *)t141);
    t144 = (t143 >> 0);
    *((unsigned int *)t139) = t144;
    t145 = *((unsigned int *)t142);
    t146 = (t145 >> 0);
    *((unsigned int *)t140) = t146;
    t147 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t147 & 3U);
    t148 = *((unsigned int *)t140);
    *((unsigned int *)t140) = (t148 & 3U);
    t149 = ((char*)((ng5)));
    memset(t150, 0, 8);
    t151 = (t139 + 4);
    t152 = (t149 + 4);
    t153 = *((unsigned int *)t139);
    t154 = *((unsigned int *)t149);
    t155 = (t153 ^ t154);
    t156 = *((unsigned int *)t151);
    t157 = *((unsigned int *)t152);
    t158 = (t156 ^ t157);
    t159 = (t155 | t158);
    t160 = *((unsigned int *)t151);
    t161 = *((unsigned int *)t152);
    t162 = (t160 | t161);
    t163 = (~(t162));
    t164 = (t159 & t163);
    if (t164 != 0)
        goto LAB58;

LAB55:    if (t162 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t150) = 1;

LAB58:    memset(t138, 0, 8);
    t166 = (t150 + 4);
    t167 = *((unsigned int *)t166);
    t168 = (~(t167));
    t169 = *((unsigned int *)t150);
    t170 = (t169 & t168);
    t171 = (t170 & 1U);
    if (t171 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t166) != 0)
        goto LAB61;

LAB62:    t173 = (t138 + 4);
    t174 = *((unsigned int *)t138);
    t175 = *((unsigned int *)t173);
    t176 = (t174 || t175);
    if (t176 > 0)
        goto LAB63;

LAB64:    t178 = *((unsigned int *)t138);
    t179 = (~(t178));
    t180 = *((unsigned int *)t173);
    t181 = (t179 || t180);
    if (t181 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t173) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t138) > 0)
        goto LAB69;

LAB70:    memcpy(t137, t182, 8);

LAB71:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t92, 4, t132, 4, t137, 4);
    goto LAB54;

LAB52:    memcpy(t92, t132, 8);
    goto LAB54;

LAB57:    t165 = (t150 + 4);
    *((unsigned int *)t150) = 1;
    *((unsigned int *)t165) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t138) = 1;
    goto LAB62;

LAB61:    t172 = (t138 + 4);
    *((unsigned int *)t138) = 1;
    *((unsigned int *)t172) = 1;
    goto LAB62;

LAB63:    t177 = ((char*)((ng6)));
    goto LAB64;

LAB65:    t182 = ((char*)((ng1)));
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t137, 4, t177, 4, t182, 4);
    goto LAB71;

LAB69:    memcpy(t137, t177, 8);
    goto LAB71;

}

static void Cont_40_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t15[8];
    char t42[8];
    char t43[8];
    char t58[8];
    char t59[8];
    char t60[8];
    char t71[8];
    char t98[8];
    char t100[8];
    char t115[8];
    char t116[8];
    char t117[8];
    char t128[8];
    char t155[8];
    char t157[8];
    char t172[8];
    char t173[8];
    char t174[8];
    char t185[8];
    char t212[8];
    char t214[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
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
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t99;
    char *t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t118;
    char *t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t156;
    char *t158;
    char *t159;
    char *t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    char *t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    char *t175;
    char *t176;
    char *t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    char *t184;
    char *t186;
    char *t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    char *t200;
    char *t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    char *t207;
    char *t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    char *t213;
    char *t215;
    char *t216;
    char *t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    char *t228;
    char *t229;
    char *t230;
    char *t231;
    char *t232;
    char *t233;
    char *t234;

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1048U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 3U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 3U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t5 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    memset(t4, 0, 8);
    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t31) != 0)
        goto LAB10;

LAB11:    t38 = (t4 + 4);
    t39 = *((unsigned int *)t4);
    t40 = *((unsigned int *)t38);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB12;

LAB13:    t54 = *((unsigned int *)t4);
    t55 = (~(t54));
    t56 = *((unsigned int *)t38);
    t57 = (t55 || t56);
    if (t57 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t38) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t58, 8);

LAB20:    t229 = (t0 + 3416);
    t230 = (t229 + 56U);
    t231 = *((char **)t230);
    t232 = (t231 + 56U);
    t233 = *((char **)t232);
    memcpy(t233, t3, 8);
    xsi_driver_vfirst_trans(t229, 0, 31);
    t234 = (t0 + 3272);
    *((int *)t234) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t37 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB11;

LAB12:    t44 = (t0 + 1208U);
    t45 = *((char **)t44);
    memset(t43, 0, 8);
    t44 = (t43 + 4);
    t46 = (t45 + 4);
    t47 = *((unsigned int *)t45);
    t48 = (t47 >> 0);
    *((unsigned int *)t43) = t48;
    t49 = *((unsigned int *)t46);
    t50 = (t49 >> 0);
    *((unsigned int *)t44) = t50;
    t51 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t51 & 255U);
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 255U);
    t53 = ((char*)((ng1)));
    xsi_vlogtype_concat(t42, 32, 32, 2U, t53, 24, t43, 8);
    goto LAB13;

LAB14:    t61 = (t0 + 1048U);
    t62 = *((char **)t61);
    memset(t60, 0, 8);
    t61 = (t60 + 4);
    t63 = (t62 + 4);
    t64 = *((unsigned int *)t62);
    t65 = (t64 >> 0);
    *((unsigned int *)t60) = t65;
    t66 = *((unsigned int *)t63);
    t67 = (t66 >> 0);
    *((unsigned int *)t61) = t67;
    t68 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t68 & 3U);
    t69 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t69 & 3U);
    t70 = ((char*)((ng2)));
    memset(t71, 0, 8);
    t72 = (t60 + 4);
    t73 = (t70 + 4);
    t74 = *((unsigned int *)t60);
    t75 = *((unsigned int *)t70);
    t76 = (t74 ^ t75);
    t77 = *((unsigned int *)t72);
    t78 = *((unsigned int *)t73);
    t79 = (t77 ^ t78);
    t80 = (t76 | t79);
    t81 = *((unsigned int *)t72);
    t82 = *((unsigned int *)t73);
    t83 = (t81 | t82);
    t84 = (~(t83));
    t85 = (t80 & t84);
    if (t85 != 0)
        goto LAB24;

LAB21:    if (t83 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t71) = 1;

LAB24:    memset(t59, 0, 8);
    t87 = (t71 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t71);
    t91 = (t90 & t89);
    t92 = (t91 & 1U);
    if (t92 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t87) != 0)
        goto LAB27;

LAB28:    t94 = (t59 + 4);
    t95 = *((unsigned int *)t59);
    t96 = *((unsigned int *)t94);
    t97 = (t95 || t96);
    if (t97 > 0)
        goto LAB29;

LAB30:    t111 = *((unsigned int *)t59);
    t112 = (~(t111));
    t113 = *((unsigned int *)t94);
    t114 = (t112 || t113);
    if (t114 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t94) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t59) > 0)
        goto LAB35;

LAB36:    memcpy(t58, t115, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t42, 32, t58, 32);
    goto LAB20;

LAB18:    memcpy(t3, t42, 8);
    goto LAB20;

LAB23:    t86 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t86) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t59) = 1;
    goto LAB28;

LAB27:    t93 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t93) = 1;
    goto LAB28;

LAB29:    t99 = ((char*)((ng1)));
    t101 = (t0 + 1208U);
    t102 = *((char **)t101);
    memset(t100, 0, 8);
    t101 = (t100 + 4);
    t103 = (t102 + 4);
    t104 = *((unsigned int *)t102);
    t105 = (t104 >> 0);
    *((unsigned int *)t100) = t105;
    t106 = *((unsigned int *)t103);
    t107 = (t106 >> 0);
    *((unsigned int *)t101) = t107;
    t108 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t108 & 255U);
    t109 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t109 & 255U);
    t110 = ((char*)((ng1)));
    xsi_vlogtype_concat(t98, 32, 32, 3U, t110, 16, t100, 8, t99, 8);
    goto LAB30;

LAB31:    t118 = (t0 + 1048U);
    t119 = *((char **)t118);
    memset(t117, 0, 8);
    t118 = (t117 + 4);
    t120 = (t119 + 4);
    t121 = *((unsigned int *)t119);
    t122 = (t121 >> 0);
    *((unsigned int *)t117) = t122;
    t123 = *((unsigned int *)t120);
    t124 = (t123 >> 0);
    *((unsigned int *)t118) = t124;
    t125 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t125 & 3U);
    t126 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t126 & 3U);
    t127 = ((char*)((ng3)));
    memset(t128, 0, 8);
    t129 = (t117 + 4);
    t130 = (t127 + 4);
    t131 = *((unsigned int *)t117);
    t132 = *((unsigned int *)t127);
    t133 = (t131 ^ t132);
    t134 = *((unsigned int *)t129);
    t135 = *((unsigned int *)t130);
    t136 = (t134 ^ t135);
    t137 = (t133 | t136);
    t138 = *((unsigned int *)t129);
    t139 = *((unsigned int *)t130);
    t140 = (t138 | t139);
    t141 = (~(t140));
    t142 = (t137 & t141);
    if (t142 != 0)
        goto LAB41;

LAB38:    if (t140 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t128) = 1;

LAB41:    memset(t116, 0, 8);
    t144 = (t128 + 4);
    t145 = *((unsigned int *)t144);
    t146 = (~(t145));
    t147 = *((unsigned int *)t128);
    t148 = (t147 & t146);
    t149 = (t148 & 1U);
    if (t149 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t144) != 0)
        goto LAB44;

LAB45:    t151 = (t116 + 4);
    t152 = *((unsigned int *)t116);
    t153 = *((unsigned int *)t151);
    t154 = (t152 || t153);
    if (t154 > 0)
        goto LAB46;

LAB47:    t168 = *((unsigned int *)t116);
    t169 = (~(t168));
    t170 = *((unsigned int *)t151);
    t171 = (t169 || t170);
    if (t171 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t151) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t116) > 0)
        goto LAB52;

LAB53:    memcpy(t115, t172, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t58, 32, t98, 32, t115, 32);
    goto LAB37;

LAB35:    memcpy(t58, t98, 8);
    goto LAB37;

LAB40:    t143 = (t128 + 4);
    *((unsigned int *)t128) = 1;
    *((unsigned int *)t143) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t116) = 1;
    goto LAB45;

LAB44:    t150 = (t116 + 4);
    *((unsigned int *)t116) = 1;
    *((unsigned int *)t150) = 1;
    goto LAB45;

LAB46:    t156 = ((char*)((ng1)));
    t158 = (t0 + 1208U);
    t159 = *((char **)t158);
    memset(t157, 0, 8);
    t158 = (t157 + 4);
    t160 = (t159 + 4);
    t161 = *((unsigned int *)t159);
    t162 = (t161 >> 0);
    *((unsigned int *)t157) = t162;
    t163 = *((unsigned int *)t160);
    t164 = (t163 >> 0);
    *((unsigned int *)t158) = t164;
    t165 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t165 & 255U);
    t166 = *((unsigned int *)t158);
    *((unsigned int *)t158) = (t166 & 255U);
    t167 = ((char*)((ng1)));
    xsi_vlogtype_concat(t155, 32, 32, 3U, t167, 8, t157, 8, t156, 16);
    goto LAB47;

LAB48:    t175 = (t0 + 1048U);
    t176 = *((char **)t175);
    memset(t174, 0, 8);
    t175 = (t174 + 4);
    t177 = (t176 + 4);
    t178 = *((unsigned int *)t176);
    t179 = (t178 >> 0);
    *((unsigned int *)t174) = t179;
    t180 = *((unsigned int *)t177);
    t181 = (t180 >> 0);
    *((unsigned int *)t175) = t181;
    t182 = *((unsigned int *)t174);
    *((unsigned int *)t174) = (t182 & 3U);
    t183 = *((unsigned int *)t175);
    *((unsigned int *)t175) = (t183 & 3U);
    t184 = ((char*)((ng5)));
    memset(t185, 0, 8);
    t186 = (t174 + 4);
    t187 = (t184 + 4);
    t188 = *((unsigned int *)t174);
    t189 = *((unsigned int *)t184);
    t190 = (t188 ^ t189);
    t191 = *((unsigned int *)t186);
    t192 = *((unsigned int *)t187);
    t193 = (t191 ^ t192);
    t194 = (t190 | t193);
    t195 = *((unsigned int *)t186);
    t196 = *((unsigned int *)t187);
    t197 = (t195 | t196);
    t198 = (~(t197));
    t199 = (t194 & t198);
    if (t199 != 0)
        goto LAB58;

LAB55:    if (t197 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t185) = 1;

LAB58:    memset(t173, 0, 8);
    t201 = (t185 + 4);
    t202 = *((unsigned int *)t201);
    t203 = (~(t202));
    t204 = *((unsigned int *)t185);
    t205 = (t204 & t203);
    t206 = (t205 & 1U);
    if (t206 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t201) != 0)
        goto LAB61;

LAB62:    t208 = (t173 + 4);
    t209 = *((unsigned int *)t173);
    t210 = *((unsigned int *)t208);
    t211 = (t209 || t210);
    if (t211 > 0)
        goto LAB63;

LAB64:    t224 = *((unsigned int *)t173);
    t225 = (~(t224));
    t226 = *((unsigned int *)t208);
    t227 = (t225 || t226);
    if (t227 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t208) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t173) > 0)
        goto LAB69;

LAB70:    memcpy(t172, t228, 8);

LAB71:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t115, 32, t155, 32, t172, 32);
    goto LAB54;

LAB52:    memcpy(t115, t155, 8);
    goto LAB54;

LAB57:    t200 = (t185 + 4);
    *((unsigned int *)t185) = 1;
    *((unsigned int *)t200) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t173) = 1;
    goto LAB62;

LAB61:    t207 = (t173 + 4);
    *((unsigned int *)t173) = 1;
    *((unsigned int *)t207) = 1;
    goto LAB62;

LAB63:    t213 = ((char*)((ng1)));
    t215 = (t0 + 1208U);
    t216 = *((char **)t215);
    memset(t214, 0, 8);
    t215 = (t214 + 4);
    t217 = (t216 + 4);
    t218 = *((unsigned int *)t216);
    t219 = (t218 >> 0);
    *((unsigned int *)t214) = t219;
    t220 = *((unsigned int *)t217);
    t221 = (t220 >> 0);
    *((unsigned int *)t215) = t221;
    t222 = *((unsigned int *)t214);
    *((unsigned int *)t214) = (t222 & 255U);
    t223 = *((unsigned int *)t215);
    *((unsigned int *)t215) = (t223 & 255U);
    xsi_vlogtype_concat(t212, 32, 32, 2U, t214, 8, t213, 24);
    goto LAB64;

LAB65:    t228 = ((char*)((ng1)));
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t172, 32, t212, 32, t228, 32);
    goto LAB71;

LAB69:    memcpy(t172, t212, 8);
    goto LAB71;

}


extern void work_m_00000000001719925605_3756563685_init()
{
	static char *pe[] = {(void *)Cont_35_0,(void *)Cont_40_1};
	xsi_register_didat("work_m_00000000001719925605_3756563685", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000001719925605_3756563685.didat");
	xsi_register_executes(pe);
}

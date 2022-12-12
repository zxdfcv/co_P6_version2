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
static const char *ng0 = "C:/Users/10791/P6_vesion2/P6_code/alu.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};
static int ng5[] = {31, 0};



static void NetDecl_31_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t5;
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
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;

LAB0:    t1 = (t0 + 3304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1344U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t6 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t6);
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

LAB20:    t48 = (t0 + 4232);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memset(t52, 0, 8);
    t53 = 1U;
    t54 = t53;
    t55 = (t3 + 4);
    t56 = *((unsigned int *)t3);
    t53 = (t53 & t56);
    t57 = *((unsigned int *)t55);
    t54 = (t54 & t57);
    t58 = (t52 + 4);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t59 | t53);
    t60 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t60 | t54);
    xsi_driver_vfirst_trans(t48, 0, 0U);
    t61 = (t0 + 4120);
    *((int *)t61) = 1;

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

LAB12:    t42 = ((char*)((ng1)));
    goto LAB13;

LAB14:    t47 = ((char*)((ng2)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t42, 1, t47, 1);
    goto LAB20;

LAB18:    memcpy(t3, t42, 8);
    goto LAB20;

}

static void NetDecl_32_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 3552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1344U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 31U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 31U);
    t12 = (t0 + 4296);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 31U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 4U);
    t25 = (t0 + 4136);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_35_2(char *t0)
{
    char t6[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
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
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 3800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4152);
    *((int *)t2) = 1;
    t3 = (t0 + 3832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1184U);
    t5 = *((char **)t4);
    t4 = (t0 + 2064);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(39, ng0);

LAB14:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);

LAB15:    t2 = ((char*)((ng2)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 1);
    if (t28 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng1)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 1);
    if (t28 == 1)
        goto LAB18;

LAB19:
LAB21:
LAB20:
LAB22:
LAB12:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(37, ng0);

LAB13:    xsi_set_current_line(38, ng0);
    t26 = (t0 + 1184U);
    t27 = *((char **)t26);
    t26 = (t0 + 2064);
    xsi_vlogvar_assign_value(t26, t27, 0, 0, 32);
    goto LAB12;

LAB16:    xsi_set_current_line(41, ng0);

LAB23:    xsi_set_current_line(43, ng0);
    xsi_set_current_line(43, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2384);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB24:    t2 = (t0 + 2384);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 1664U);
    t20 = *((char **)t19);
    memset(t6, 0, 8);
    t19 = (t5 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB26;

LAB25:    t26 = (t20 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB26;

LAB29:    if (*((unsigned int *)t5) < *((unsigned int *)t20))
        goto LAB27;

LAB28:    t29 = (t6 + 4);
    t7 = *((unsigned int *)t29);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB30;

LAB31:    goto LAB22;

LAB18:    xsi_set_current_line(49, ng0);

LAB35:    xsi_set_current_line(50, ng0);
    xsi_set_current_line(50, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2384);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB36:    t2 = (t0 + 2384);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 1664U);
    t20 = *((char **)t19);
    memset(t6, 0, 8);
    t19 = (t5 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB38;

LAB37:    t26 = (t20 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB38;

LAB41:    if (*((unsigned int *)t5) < *((unsigned int *)t20))
        goto LAB39;

LAB40:    t29 = (t6 + 4);
    t7 = *((unsigned int *)t29);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB42;

LAB43:    goto LAB22;

LAB26:    t27 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB28;

LAB27:    *((unsigned int *)t6) = 1;
    goto LAB28;

LAB30:    xsi_set_current_line(43, ng0);

LAB32:    xsi_set_current_line(44, ng0);
    t30 = (t0 + 1184U);
    t31 = *((char **)t30);
    memset(t32, 0, 8);
    t30 = (t32 + 4);
    t33 = (t31 + 4);
    t12 = *((unsigned int *)t31);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t32) = t14;
    t15 = *((unsigned int *)t33);
    t16 = (t15 >> 0);
    t17 = (t16 & 1);
    *((unsigned int *)t30) = t17;
    t34 = (t0 + 2224);
    xsi_vlogvar_assign_value(t34, t32, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2064);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 32, t5, 32, t19, 32);
    t20 = (t0 + 2064);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 32);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2224);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 2064);
    t20 = (t0 + 2064);
    t26 = (t20 + 72U);
    t27 = *((char **)t26);
    t29 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t6, t27, 2, t29, 32, 1);
    t30 = (t6 + 4);
    t7 = *((unsigned int *)t30);
    t28 = (!(t7));
    if (t28 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2384);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t5, 32, t19, 32);
    t20 = (t0 + 2384);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 32);
    goto LAB24;

LAB33:    xsi_vlogvar_assign_value(t19, t5, 0, *((unsigned int *)t6), 1);
    goto LAB34;

LAB38:    t27 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB40;

LAB39:    *((unsigned int *)t6) = 1;
    goto LAB40;

LAB42:    xsi_set_current_line(50, ng0);

LAB44:    xsi_set_current_line(51, ng0);
    t30 = (t0 + 1184U);
    t31 = *((char **)t30);
    memset(t32, 0, 8);
    t30 = (t32 + 4);
    t33 = (t31 + 4);
    t12 = *((unsigned int *)t31);
    t13 = (t12 >> 31);
    t14 = (t13 & 1);
    *((unsigned int *)t32) = t14;
    t15 = *((unsigned int *)t33);
    t16 = (t15 >> 31);
    t17 = (t16 & 1);
    *((unsigned int *)t30) = t17;
    t34 = (t0 + 2224);
    xsi_vlogvar_assign_value(t34, t32, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2064);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 32, t5, 32, t19, 32);
    t20 = (t0 + 2064);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 32);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2224);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = (t0 + 2064);
    t20 = (t0 + 2064);
    t26 = (t20 + 72U);
    t27 = *((char **)t26);
    t29 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t6, t27, 2, t29, 32, 1);
    t30 = (t6 + 4);
    t7 = *((unsigned int *)t30);
    t28 = (!(t7));
    if (t28 == 1)
        goto LAB45;

LAB46:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2384);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t19 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t5, 32, t19, 32);
    t20 = (t0 + 2384);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 32);
    goto LAB36;

LAB45:    xsi_vlogvar_assign_value(t19, t5, 0, *((unsigned int *)t6), 1);
    goto LAB46;

}


extern void work_m_00000000001592792273_3761551235_init()
{
	static char *pe[] = {(void *)NetDecl_31_0,(void *)NetDecl_32_1,(void *)Always_35_2};
	xsi_register_didat("work_m_00000000001592792273_3761551235", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000001592792273_3761551235.didat");
	xsi_register_executes(pe);
}

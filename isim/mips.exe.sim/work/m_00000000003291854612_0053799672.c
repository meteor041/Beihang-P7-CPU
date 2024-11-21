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
static int ng0[] = {0, 0};
static int ng1[] = {3, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};



static void Always_46_0(char *t0)
{
    char t7[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5760);
    *((int *)t2) = 1;
    t3 = (t0 + 4480);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 2568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2568);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2568);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng0)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t10, t13, 2, 1, t14, 32, 1);
    t16 = (t0 + 2568);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t15, 1, t7, t18, 2, t19, 32, 1);
    t20 = (t0 + 2728);
    xsi_vlogvar_assign_value(t20, t15, 0, 0, 1);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 2568);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng0)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t4, t8, t11, 2, 1, t12, 32, 1);
    memset(t15, 0, 8);
    t13 = (t15 + 4);
    t14 = (t7 + 4);
    t21 = *((unsigned int *)t7);
    t22 = (t21 >> 1);
    *((unsigned int *)t15) = t22;
    t23 = *((unsigned int *)t14);
    t24 = (t23 >> 1);
    *((unsigned int *)t13) = t24;
    t25 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t25 & 3U);
    t26 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t26 & 3U);
    t16 = (t0 + 3048);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 2);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 2568);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng0)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 2568);
    t14 = (t13 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng0)));
    xsi_vlog_generic_get_index_select_value(t15, 1, t7, t16, 2, t17, 32, 1);
    t18 = (t0 + 2888);
    xsi_vlogvar_assign_value(t18, t15, 0, 0, 1);
    goto LAB2;

}

static void Cont_59_1(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3368);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t7);
    t11 = (t9 & t10);
    *((unsigned int *)t8) = t11;
    t12 = (t4 + 4);
    t13 = (t7 + 4);
    t14 = (t8 + 4);
    t15 = *((unsigned int *)t12);
    t16 = *((unsigned int *)t13);
    t17 = (t15 | t16);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB4;

LAB5:
LAB6:    t40 = (t0 + 5904);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memset(t44, 0, 8);
    t45 = 1U;
    t46 = t45;
    t47 = (t8 + 4);
    t48 = *((unsigned int *)t8);
    t45 = (t45 & t48);
    t49 = *((unsigned int *)t47);
    t46 = (t46 & t49);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t51 | t45);
    t52 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t52 | t46);
    xsi_driver_vfirst_trans(t40, 0, 0);
    t53 = (t0 + 5776);
    *((int *)t53) = 1;

LAB1:    return;
LAB4:    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t8) = (t20 | t21);
    t22 = (t4 + 4);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t30 = *((unsigned int *)t23);
    t31 = (~(t30));
    t32 = (t25 & t27);
    t33 = (t29 & t31);
    t34 = (~(t32));
    t35 = (~(t33));
    t36 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t36 & t34);
    t37 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t37 & t35);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t34);
    t39 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t39 & t35);
    goto LAB6;

}

static void Cont_62_2(char *t0)
{
    char t5[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 4944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2568);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2568);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 1368U);
    t14 = *((char **)t13);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 0);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 3U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 3U);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 2, 2);
    t22 = (t0 + 5968);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t5, 8);
    xsi_driver_vfirst_trans(t22, 0, 31);
    t27 = (t0 + 5792);
    *((int *)t27) = 1;

LAB1:    return;
}

static void NetDecl_65_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t15[8];
    char t42[8];
    char t43[8];
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
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;

LAB0:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1368U);
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
    t14 = ((char*)((ng0)));
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

LAB19:    memcpy(t3, t59, 8);

LAB20:    t58 = (t0 + 6032);
    t60 = (t58 + 56U);
    t61 = *((char **)t60);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    memcpy(t63, t3, 8);
    xsi_driver_vfirst_trans(t58, 0, 31U);
    t64 = (t0 + 5808);
    *((int *)t64) = 1;

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

LAB12:    t44 = (t0 + 1688U);
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
    *((unsigned int *)t43) = (t51 & 15U);
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 15U);
    t53 = ((char*)((ng2)));
    xsi_vlogtype_concat(t42, 32, 32, 2U, t53, 28, t43, 4);
    goto LAB13;

LAB14:    t58 = (t0 + 1688U);
    t59 = *((char **)t58);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t42, 32, t59, 32);
    goto LAB20;

LAB18:    memcpy(t3, t42, 8);
    goto LAB20;

}

static void Always_69_4(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t58[8];
    char t60[8];
    char t61[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    int t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t59;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;

LAB0:    t1 = (t0 + 5440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5824);
    *((int *)t2) = 1;
    t3 = (t0 + 5472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB15;

LAB16:
LAB21:    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB22:    t5 = ((char*)((ng2)));
    t28 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t28 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng4)));
    t28 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t28 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng6)));
    t28 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t28 == 1)
        goto LAB27;

LAB28:
LAB30:
LAB29:
LAB58:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t12 = (t5 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t14);
    t27 = (t9 ^ t10);
    t30 = (t8 | t27);
    t33 = *((unsigned int *)t12);
    t34 = *((unsigned int *)t14);
    t37 = (t33 | t34);
    t38 = (~(t37));
    t39 = (t30 & t38);
    if (t39 != 0)
        goto LAB62;

LAB59:    if (t37 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t13) = 1;

LAB62:    t18 = (t13 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (~(t40));
    t42 = *((unsigned int *)t13);
    t71 = (t42 & t41);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB63;

LAB64:    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB65:    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB31:
LAB17:
LAB8:    goto LAB2;

LAB6:
LAB9:    t11 = ((char*)((ng0)));
    t12 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB10:    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    t2 = ((char*)((ng0)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    t12 = ((char*)((ng0)));
    t14 = (t0 + 2568);
    t17 = (t0 + 2568);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2568);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3528);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3528);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB13:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB14;

LAB15:
LAB18:    t4 = (t0 + 2168U);
    t5 = *((char **)t4);
    t4 = (t0 + 2568);
    t11 = (t0 + 2568);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t17 = (t0 + 2568);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 1368U);
    t21 = *((char **)t20);
    memset(t16, 0, 8);
    t20 = (t16 + 4);
    t22 = (t21 + 4);
    t27 = *((unsigned int *)t21);
    t30 = (t27 >> 0);
    *((unsigned int *)t16) = t30;
    t33 = *((unsigned int *)t22);
    t34 = (t33 >> 0);
    *((unsigned int *)t20) = t34;
    t37 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t37 & 3U);
    t38 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t38 & 3U);
    xsi_vlog_generic_convert_array_indices(t13, t15, t14, t19, 2, 1, t16, 2, 2);
    t23 = (t13 + 4);
    t39 = *((unsigned int *)t23);
    t28 = (!(t39));
    t24 = (t15 + 4);
    t40 = *((unsigned int *)t24);
    t31 = (!(t40));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB19;

LAB20:    goto LAB17;

LAB19:    t41 = *((unsigned int *)t13);
    t42 = *((unsigned int *)t15);
    t35 = (t41 - t42);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, *((unsigned int *)t15), t36, 0LL);
    goto LAB20;

LAB23:    t11 = (t0 + 2888);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t17 = (t14 + 4);
    t6 = *((unsigned int *)t17);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB32;

LAB33:
LAB34:    goto LAB31;

LAB25:
LAB36:    t3 = (t0 + 2568);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t14 = (t12 + 72U);
    t17 = *((char **)t14);
    t18 = (t0 + 2568);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t13, 32, t11, t17, t20, 2, 1, t21, 32, 1);
    t22 = (t0 + 2568);
    t23 = (t0 + 2568);
    t24 = (t23 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 2568);
    t29 = (t26 + 64U);
    t43 = *((char **)t29);
    t44 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t15, t16, t25, t43, 2, 1, t44, 32, 1);
    t45 = (t15 + 4);
    t6 = *((unsigned int *)t45);
    t31 = (!(t6));
    t46 = (t16 + 4);
    t7 = *((unsigned int *)t46);
    t32 = (!(t7));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng6)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB31;

LAB27:    t3 = (t0 + 2888);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB39;

LAB40:
LAB57:    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB41:    goto LAB31;

LAB32:
LAB35:    t18 = ((char*)((ng4)));
    t19 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t19, t18, 0, 0, 2, 0LL);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB34;

LAB37:    t8 = *((unsigned int *)t15);
    t9 = *((unsigned int *)t16);
    t36 = (t8 - t9);
    t47 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t22, t13, 0, *((unsigned int *)t16), t47, 0LL);
    goto LAB38;

LAB39:
LAB42:    t14 = (t0 + 2568);
    t17 = (t14 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 2568);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 2568);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t13, 32, t18, t21, t24, 2, 1, t25, 32, 1);
    t26 = ((char*)((ng3)));
    memset(t15, 0, 8);
    t29 = (t13 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB44;

LAB43:    t43 = (t26 + 4);
    if (*((unsigned int *)t43) != 0)
        goto LAB44;

LAB47:    if (*((unsigned int *)t13) > *((unsigned int *)t26))
        goto LAB45;

LAB46:    t45 = (t15 + 4);
    t27 = *((unsigned int *)t45);
    t30 = (~(t27));
    t33 = *((unsigned int *)t15);
    t34 = (t33 & t30);
    t37 = (t34 != 0);
    if (t37 > 0)
        goto LAB48;

LAB49:
LAB54:    t2 = ((char*)((ng0)));
    t3 = (t0 + 2568);
    t5 = (t0 + 2568);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 2568);
    t17 = (t14 + 64U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t13, t15, t12, t18, 2, 1, t19, 32, 1);
    t20 = (t13 + 4);
    t6 = *((unsigned int *)t20);
    t28 = (!(t6));
    t21 = (t15 + 4);
    t7 = *((unsigned int *)t21);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng7)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB50:    goto LAB41;

LAB44:    t44 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB46;

LAB45:    *((unsigned int *)t15) = 1;
    goto LAB46;

LAB48:
LAB51:    t46 = (t0 + 2568);
    t48 = (t46 + 56U);
    t49 = *((char **)t48);
    t50 = (t0 + 2568);
    t51 = (t50 + 72U);
    t52 = *((char **)t51);
    t53 = (t0 + 2568);
    t54 = (t53 + 64U);
    t55 = *((char **)t54);
    t56 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t16, 32, t49, t52, t55, 2, 1, t56, 32, 1);
    t57 = ((char*)((ng3)));
    memset(t58, 0, 8);
    xsi_vlog_unsigned_minus(t58, 32, t16, 32, t57, 32);
    t59 = (t0 + 2568);
    t62 = (t0 + 2568);
    t63 = (t62 + 72U);
    t64 = *((char **)t63);
    t65 = (t0 + 2568);
    t66 = (t65 + 64U);
    t67 = *((char **)t66);
    t68 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t60, t61, t64, t67, 2, 1, t68, 32, 1);
    t69 = (t60 + 4);
    t38 = *((unsigned int *)t69);
    t31 = (!(t38));
    t70 = (t61 + 4);
    t39 = *((unsigned int *)t70);
    t32 = (!(t39));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB52;

LAB53:    goto LAB50;

LAB52:    t40 = *((unsigned int *)t60);
    t41 = *((unsigned int *)t61);
    t36 = (t40 - t41);
    t47 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t59, t58, 0, *((unsigned int *)t61), t47, 0LL);
    goto LAB53;

LAB55:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t15);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t15), t36, 0LL);
    goto LAB56;

LAB61:    t17 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB62;

LAB63:    t19 = ((char*)((ng2)));
    t20 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    goto LAB65;

}


extern void work_m_00000000003291854612_0053799672_init()
{
	static char *pe[] = {(void *)Always_46_0,(void *)Cont_59_1,(void *)Cont_62_2,(void *)NetDecl_65_3,(void *)Always_69_4};
	xsi_register_didat("work_m_00000000003291854612_0053799672", "isim/mips.exe.sim/work/m_00000000003291854612_0053799672.didat");
	xsi_register_executes(pe);
}

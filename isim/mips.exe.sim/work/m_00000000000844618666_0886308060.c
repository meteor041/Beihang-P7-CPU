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
static unsigned int ng0[] = {0U, 0U};
static unsigned int ng1[] = {2U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 4294967295U};
static unsigned int ng4[] = {6U, 0U};
static unsigned int ng5[] = {3U, 0U};
static int ng6[] = {16, 0};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {7U, 0U};



static void Initial_31_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:
LAB2:    t1 = ((char*)((ng0)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_34_1(char *t0)
{
    char t7[16];
    char t9[8];
    char t17[16];
    char t21[8];
    char t29[16];
    char t32[8];
    char t59[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
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
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    int t56;
    int t57;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3736);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = ((char*)((ng0)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng0)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    t2 = ((char*)((ng3)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB23:    goto LAB2;

LAB7:
LAB24:    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1048U);
    t8 = *((char **)t4);
    memset(t9, 0, 8);
    t4 = (t9 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t4) = t16;
    xsi_vlogtype_concat(t7, 33, 33, 2U, t9, 1, t5, 32);
    t18 = (t0 + 1208U);
    t19 = *((char **)t18);
    t18 = (t0 + 1208U);
    t20 = *((char **)t18);
    memset(t21, 0, 8);
    t18 = (t21 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t21) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 >> 31);
    t28 = (t27 & 1);
    *((unsigned int *)t18) = t28;
    xsi_vlogtype_concat(t17, 33, 33, 2U, t21, 1, t19, 32);
    xsi_vlog_unsigned_add(t29, 33, t7, 33, t17, 33);
    t30 = (t0 + 2248);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 33);
    t2 = (t0 + 2248);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t9, 0, 8);
    t8 = (t9 + 4);
    t10 = (t5 + 8);
    t18 = (t5 + 12);
    t11 = *((unsigned int *)t10);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t18);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t8) = t16;
    t19 = (t0 + 2248);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    memset(t21, 0, 8);
    t30 = (t21 + 4);
    t31 = (t22 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (t23 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t21) = t25;
    t26 = *((unsigned int *)t31);
    t27 = (t26 >> 31);
    t28 = (t27 & 1);
    *((unsigned int *)t30) = t28;
    memset(t32, 0, 8);
    t33 = (t9 + 4);
    t34 = (t21 + 4);
    t35 = *((unsigned int *)t9);
    t36 = *((unsigned int *)t21);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t33);
    t39 = *((unsigned int *)t34);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t34);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB26;

LAB25:    if (t44 != 0)
        goto LAB27;

LAB28:    t48 = (t32 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB29;

LAB30:
LAB33:    t2 = ((char*)((ng0)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 32, t5, 32);
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t9, 0, 0, 32);

LAB31:    goto LAB23;

LAB9:
LAB34:    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1048U);
    t8 = *((char **)t4);
    memset(t9, 0, 8);
    t4 = (t9 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t4) = t16;
    xsi_vlogtype_concat(t7, 33, 33, 2U, t9, 1, t5, 32);
    t18 = (t0 + 1208U);
    t19 = *((char **)t18);
    t18 = (t0 + 1208U);
    t20 = *((char **)t18);
    memset(t21, 0, 8);
    t18 = (t21 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t21) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 >> 31);
    t28 = (t27 & 1);
    *((unsigned int *)t18) = t28;
    xsi_vlogtype_concat(t17, 33, 33, 2U, t21, 1, t19, 32);
    xsi_vlog_unsigned_minus(t29, 33, t7, 33, t17, 33);
    t30 = (t0 + 2248);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 33);
    t2 = (t0 + 2248);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t9, 0, 8);
    t8 = (t9 + 4);
    t10 = (t5 + 8);
    t18 = (t5 + 12);
    t11 = *((unsigned int *)t10);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t18);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t8) = t16;
    t19 = (t0 + 2248);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    memset(t21, 0, 8);
    t30 = (t21 + 4);
    t31 = (t22 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (t23 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t21) = t25;
    t26 = *((unsigned int *)t31);
    t27 = (t26 >> 31);
    t28 = (t27 & 1);
    *((unsigned int *)t30) = t28;
    memset(t32, 0, 8);
    t33 = (t9 + 4);
    t34 = (t21 + 4);
    t35 = *((unsigned int *)t9);
    t36 = *((unsigned int *)t21);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t33);
    t39 = *((unsigned int *)t34);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t34);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB36;

LAB35:    if (t44 != 0)
        goto LAB37;

LAB38:    t48 = (t32 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB39;

LAB40:
LAB43:    t2 = ((char*)((ng0)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t4, 32, t5, 32);
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t9, 0, 0, 32);

LAB41:    goto LAB23;

LAB11:    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t8 = *((char **)t4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t8);
    t13 = (t11 | t12);
    *((unsigned int *)t9) = t13;
    t4 = (t5 + 4);
    t10 = (t8 + 4);
    t18 = (t9 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t10);
    t16 = (t14 | t15);
    *((unsigned int *)t18) = t16;
    t23 = *((unsigned int *)t18);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB44;

LAB45:
LAB46:    t22 = (t0 + 1768);
    xsi_vlogvar_assign_value(t22, t9, 0, 0, 32);
    goto LAB23;

LAB13:    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t8 = *((char **)t4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t8);
    t13 = (t11 & t12);
    *((unsigned int *)t9) = t13;
    t4 = (t5 + 4);
    t10 = (t8 + 4);
    t18 = (t9 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t10);
    t16 = (t14 | t15);
    *((unsigned int *)t18) = t16;
    t23 = *((unsigned int *)t18);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB47;

LAB48:
LAB49:    t22 = (t0 + 1768);
    xsi_vlogvar_assign_value(t22, t9, 0, 0, 32);
    goto LAB23;

LAB15:    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng6)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_lshift(t9, 32, t5, 32, t4, 32);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB23;

LAB17:    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t8 = *((char **)t4);
    memset(t59, 0, 8);
    xsi_vlog_signed_less(t59, 32, t5, 32, t8, 32);
    memset(t21, 0, 8);
    t4 = (t59 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    t13 = *((unsigned int *)t59);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t4) != 0)
        goto LAB52;

LAB53:    t18 = (t21 + 4);
    t16 = *((unsigned int *)t21);
    t23 = *((unsigned int *)t18);
    t24 = (t16 || t23);
    if (t24 > 0)
        goto LAB54;

LAB55:    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t18);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t18) > 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t21) > 0)
        goto LAB60;

LAB61:    memcpy(t9, t20, 8);

LAB62:    t22 = (t0 + 1768);
    xsi_vlogvar_assign_value(t22, t9, 0, 0, 32);
    goto LAB23;

LAB19:    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t8 = *((char **)t4);
    memset(t59, 0, 8);
    t4 = (t5 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB64;

LAB63:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB64;

LAB67:    if (*((unsigned int *)t5) < *((unsigned int *)t8))
        goto LAB65;

LAB66:    memset(t21, 0, 8);
    t19 = (t59 + 4);
    t11 = *((unsigned int *)t19);
    t12 = (~(t11));
    t13 = *((unsigned int *)t59);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t19) != 0)
        goto LAB70;

LAB71:    t22 = (t21 + 4);
    t16 = *((unsigned int *)t21);
    t23 = *((unsigned int *)t22);
    t24 = (t16 || t23);
    if (t24 > 0)
        goto LAB72;

LAB73:    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t22);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t22) > 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t21) > 0)
        goto LAB78;

LAB79:    memcpy(t9, t31, 8);

LAB80:    t33 = (t0 + 1768);
    xsi_vlogvar_assign_value(t33, t9, 0, 0, 32);
    goto LAB23;

LAB26:    *((unsigned int *)t32) = 1;
    goto LAB28;

LAB27:    t47 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB28;

LAB29:
LAB32:    t54 = ((char*)((ng2)));
    t55 = (t0 + 1928);
    xsi_vlogvar_assign_value(t55, t54, 0, 0, 1);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    goto LAB31;

LAB36:    *((unsigned int *)t32) = 1;
    goto LAB38;

LAB37:    t47 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB38;

LAB39:
LAB42:    t54 = ((char*)((ng2)));
    t55 = (t0 + 1928);
    xsi_vlogvar_assign_value(t55, t54, 0, 0, 1);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    goto LAB41;

LAB44:    t25 = *((unsigned int *)t9);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t9) = (t25 | t26);
    t19 = (t5 + 4);
    t20 = (t8 + 4);
    t27 = *((unsigned int *)t19);
    t28 = (~(t27));
    t35 = *((unsigned int *)t5);
    t56 = (t35 & t28);
    t36 = *((unsigned int *)t20);
    t37 = (~(t36));
    t38 = *((unsigned int *)t8);
    t57 = (t38 & t37);
    t39 = (~(t56));
    t40 = (~(t57));
    t41 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t41 & t39);
    t42 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t42 & t40);
    goto LAB46;

LAB47:    t25 = *((unsigned int *)t9);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t9) = (t25 | t26);
    t19 = (t5 + 4);
    t20 = (t8 + 4);
    t27 = *((unsigned int *)t5);
    t28 = (~(t27));
    t35 = *((unsigned int *)t19);
    t36 = (~(t35));
    t37 = *((unsigned int *)t8);
    t38 = (~(t37));
    t39 = *((unsigned int *)t20);
    t40 = (~(t39));
    t56 = (t28 & t36);
    t57 = (t38 & t40);
    t41 = (~(t56));
    t42 = (~(t57));
    t43 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t43 & t41);
    t44 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t44 & t42);
    t45 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t45 & t41);
    t46 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t46 & t42);
    goto LAB49;

LAB50:    *((unsigned int *)t21) = 1;
    goto LAB53;

LAB52:    t10 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB53;

LAB54:    t19 = ((char*)((ng2)));
    goto LAB55;

LAB56:    t20 = ((char*)((ng0)));
    goto LAB57;

LAB58:    xsi_vlog_unsigned_bit_combine(t9, 32, t19, 32, t20, 32);
    goto LAB62;

LAB60:    memcpy(t9, t19, 8);
    goto LAB62;

LAB64:    t18 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB66;

LAB65:    *((unsigned int *)t59) = 1;
    goto LAB66;

LAB68:    *((unsigned int *)t21) = 1;
    goto LAB71;

LAB70:    t20 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB71;

LAB72:    t30 = ((char*)((ng2)));
    goto LAB73;

LAB74:    t31 = ((char*)((ng0)));
    goto LAB75;

LAB76:    xsi_vlog_unsigned_bit_combine(t9, 32, t30, 32, t31, 32);
    goto LAB80;

LAB78:    memcpy(t9, t30, 8);
    goto LAB80;

}


extern void work_m_00000000000844618666_0886308060_init()
{
	static char *pe[] = {(void *)Initial_31_0,(void *)Always_34_1};
	xsi_register_didat("work_m_00000000000844618666_0886308060", "isim/mips.exe.sim/work/m_00000000000844618666_0886308060.didat");
	xsi_register_executes(pe);
}

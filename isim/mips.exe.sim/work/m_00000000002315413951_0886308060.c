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
static unsigned int ng0[] = {2U, 0U};
static unsigned int ng1[] = {6U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {16, 0};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {7U, 0U};
static unsigned int ng8[] = {8U, 0U};
static int ng9[] = {0, 0};
static int ng10[] = {1, 0};
static unsigned int ng11[] = {0U, 4294967295U};



static void Always_29_0(char *t0)
{
    char t10[8];
    char t40[8];
    char t41[8];
    char t42[8];
    char t43[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
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
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t46;
    char *t47;
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

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng0)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    t2 = ((char*)((ng11)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB25:    goto LAB2;

LAB7:    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB25;

LAB9:    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB25;

LAB11:    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB26;

LAB27:
LAB28:    t35 = (t0 + 1768);
    xsi_vlogvar_assign_value(t35, t10, 0, 0, 32);
    goto LAB25;

LAB13:    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB29;

LAB30:
LAB31:    t35 = (t0 + 1768);
    xsi_vlogvar_assign_value(t35, t10, 0, 0, 32);
    goto LAB25;

LAB15:    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 32, t4, 32, t3, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB25;

LAB17:    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t43, 0, 8);
    xsi_vlog_signed_less(t43, 32, t4, 32, t7, 32);
    memset(t40, 0, 8);
    t3 = (t43 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t43);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t3) != 0)
        goto LAB34;

LAB35:    t9 = (t40 + 4);
    t16 = *((unsigned int *)t40);
    t17 = *((unsigned int *)t9);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB36;

LAB37:    t19 = *((unsigned int *)t40);
    t20 = (~(t19));
    t23 = *((unsigned int *)t9);
    t24 = (t20 || t23);
    if (t24 > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t9) > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t40) > 0)
        goto LAB42;

LAB43:    memcpy(t10, t22, 8);

LAB44:    t35 = (t0 + 1768);
    xsi_vlogvar_assign_value(t35, t10, 0, 0, 32);
    goto LAB25;

LAB19:    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t43, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB46;

LAB45:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB46;

LAB49:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB47;

LAB48:    memset(t40, 0, 8);
    t21 = (t43 + 4);
    t11 = *((unsigned int *)t21);
    t12 = (~(t11));
    t13 = *((unsigned int *)t43);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t21) != 0)
        goto LAB52;

LAB53:    t35 = (t40 + 4);
    t16 = *((unsigned int *)t40);
    t17 = *((unsigned int *)t35);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB54;

LAB55:    t19 = *((unsigned int *)t40);
    t20 = (~(t19));
    t23 = *((unsigned int *)t35);
    t24 = (t20 || t23);
    if (t24 > 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t35) > 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t40) > 0)
        goto LAB60;

LAB61:    memcpy(t10, t47, 8);

LAB62:    t48 = (t0 + 1768);
    xsi_vlogvar_assign_value(t48, t10, 0, 0, 32);
    goto LAB25;

LAB21:
LAB63:    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1168U);
    t4 = (t2 + 72U);
    t7 = *((char **)t4);
    t8 = ((char*)((ng9)));
    xsi_vlog_generic_get_index_select_value(t10, 32, t3, t7, 2, t8, 32, 1);
    t9 = ((char*)((ng10)));
    memset(t40, 0, 8);
    t21 = (t10 + 4);
    t22 = (t9 + 4);
    t11 = *((unsigned int *)t10);
    t12 = *((unsigned int *)t9);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t21);
    t15 = *((unsigned int *)t22);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t21);
    t19 = *((unsigned int *)t22);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB67;

LAB64:    if (t20 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t40) = 1;

LAB67:    t46 = (t40 + 4);
    t25 = *((unsigned int *)t46);
    t27 = (~(t25));
    t28 = *((unsigned int *)t40);
    t29 = (t28 & t27);
    t31 = (t29 != 0);
    if (t31 > 0)
        goto LAB68;

LAB69:
LAB81:    t2 = ((char*)((ng9)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB82:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t9 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 31U);
    memset(t40, 0, 8);
    t21 = (t4 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB84;

LAB83:    t22 = (t10 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB84;

LAB87:    if (*((unsigned int *)t4) < *((unsigned int *)t10))
        goto LAB85;

LAB86:    t46 = (t40 + 4);
    t17 = *((unsigned int *)t46);
    t18 = (~(t17));
    t19 = *((unsigned int *)t40);
    t20 = (t19 & t18);
    t23 = (t20 != 0);
    if (t23 > 0)
        goto LAB88;

LAB89:
LAB70:    goto LAB25;

LAB26:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = *((unsigned int *)t22);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (t29 & t28);
    t31 = (~(t26));
    t32 = (~(t30));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t31);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t32);
    goto LAB28;

LAB29:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t27 = (~(t25));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t31 = *((unsigned int *)t22);
    t32 = (~(t31));
    t26 = (t24 & t27);
    t30 = (t29 & t32);
    t33 = (~(t26));
    t34 = (~(t30));
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t33);
    t37 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t37 & t34);
    t38 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t38 & t33);
    t39 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t39 & t34);
    goto LAB31;

LAB32:    *((unsigned int *)t40) = 1;
    goto LAB35;

LAB34:    t8 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB35;

LAB36:    t21 = ((char*)((ng2)));
    goto LAB37;

LAB38:    t22 = ((char*)((ng3)));
    goto LAB39;

LAB40:    xsi_vlog_unsigned_bit_combine(t10, 32, t21, 32, t22, 32);
    goto LAB44;

LAB42:    memcpy(t10, t21, 8);
    goto LAB44;

LAB46:    t9 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB48;

LAB47:    *((unsigned int *)t43) = 1;
    goto LAB48;

LAB50:    *((unsigned int *)t40) = 1;
    goto LAB53;

LAB52:    t22 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB53;

LAB54:    t46 = ((char*)((ng2)));
    goto LAB55;

LAB56:    t47 = ((char*)((ng3)));
    goto LAB57;

LAB58:    xsi_vlog_unsigned_bit_combine(t10, 32, t46, 32, t47, 32);
    goto LAB62;

LAB60:    memcpy(t10, t46, 8);
    goto LAB62;

LAB66:    t35 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB67;

LAB68:
LAB71:    t47 = ((char*)((ng9)));
    t48 = (t0 + 1928);
    xsi_vlogvar_assign_value(t48, t47, 0, 0, 32);

LAB72:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t9 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 31U);
    memset(t40, 0, 8);
    t21 = (t4 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB74;

LAB73:    t22 = (t10 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB74;

LAB77:    if (*((unsigned int *)t4) < *((unsigned int *)t10))
        goto LAB75;

LAB76:    t46 = (t40 + 4);
    t17 = *((unsigned int *)t46);
    t18 = (~(t17));
    t19 = *((unsigned int *)t40);
    t20 = (t19 & t18);
    t23 = (t20 != 0);
    if (t23 > 0)
        goto LAB78;

LAB79:    goto LAB70;

LAB74:    t35 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB76;

LAB75:    *((unsigned int *)t40) = 1;
    goto LAB76;

LAB78:
LAB80:    t47 = (t0 + 1768);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memset(t42, 0, 8);
    t50 = (t42 + 4);
    t51 = (t49 + 4);
    t24 = *((unsigned int *)t49);
    t25 = (t24 >> 1);
    *((unsigned int *)t42) = t25;
    t27 = *((unsigned int *)t51);
    t28 = (t27 >> 1);
    *((unsigned int *)t50) = t28;
    t29 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t29 & 2147483647U);
    t31 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t31 & 2147483647U);
    t52 = (t0 + 1768);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    memset(t43, 0, 8);
    t55 = (t43 + 4);
    t56 = (t54 + 4);
    t32 = *((unsigned int *)t54);
    t33 = (t32 >> 0);
    t34 = (t33 & 1);
    *((unsigned int *)t43) = t34;
    t36 = *((unsigned int *)t56);
    t37 = (t36 >> 0);
    t38 = (t37 & 1);
    *((unsigned int *)t55) = t38;
    xsi_vlogtype_concat(t41, 32, 32, 2U, t43, 1, t42, 31);
    t57 = (t0 + 1768);
    xsi_vlogvar_assign_value(t57, t41, 0, 0, 32);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng10)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB72;

LAB84:    t35 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB86;

LAB85:    *((unsigned int *)t40) = 1;
    goto LAB86;

LAB88:
LAB90:    t47 = (t0 + 1768);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memset(t42, 0, 8);
    t50 = (t42 + 4);
    t51 = (t49 + 4);
    t24 = *((unsigned int *)t49);
    t25 = (t24 >> 31);
    t27 = (t25 & 1);
    *((unsigned int *)t42) = t27;
    t28 = *((unsigned int *)t51);
    t29 = (t28 >> 31);
    t31 = (t29 & 1);
    *((unsigned int *)t50) = t31;
    t52 = (t0 + 1768);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    memset(t43, 0, 8);
    t55 = (t43 + 4);
    t56 = (t54 + 4);
    t32 = *((unsigned int *)t54);
    t33 = (t32 >> 0);
    *((unsigned int *)t43) = t33;
    t34 = *((unsigned int *)t56);
    t36 = (t34 >> 0);
    *((unsigned int *)t55) = t36;
    t37 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t37 & 2147483647U);
    t38 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t38 & 2147483647U);
    xsi_vlogtype_concat(t41, 32, 32, 2U, t43, 31, t42, 1);
    t57 = (t0 + 1768);
    xsi_vlogvar_assign_value(t57, t41, 0, 0, 32);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng10)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB82;

}


extern void work_m_00000000002315413951_0886308060_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00000000002315413951_0886308060", "isim/mips.exe.sim/work/m_00000000002315413951_0886308060.didat");
	xsi_register_executes(pe);
}

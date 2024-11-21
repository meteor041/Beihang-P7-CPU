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
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {5, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {10, 0};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};



static void Always_39_0(char *t0)
{
    char t13[8];
    char t15[8];
    char t39[16];
    char t40[16];
    char t41[16];
    char t42[8];
    char t43[8];
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

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4608);
    *((int *)t2) = 1;
    t3 = (t0 + 4320);
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

LAB7:    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    xsi_vlog_signed_equal(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_equal(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB70;

LAB71:
LAB74:    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3368);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);

LAB72:
LAB12:
LAB8:    goto LAB2;

LAB6:
LAB9:    t11 = ((char*)((ng0)));
    t12 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:
LAB13:    t12 = (t0 + 2008U);
    t14 = *((char **)t12);
    t12 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t16 = (t14 + 4);
    t17 = (t12 + 4);
    t18 = *((unsigned int *)t14);
    t19 = *((unsigned int *)t12);
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
        goto LAB17;

LAB14:    if (t27 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t15) = 1;

LAB17:    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB18;

LAB19:    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t18 = (t9 ^ t10);
    t19 = (t8 | t18);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB25;

LAB22:    if (t22 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t13) = 1;

LAB25:    t12 = (t13 + 4);
    t25 = *((unsigned int *)t12);
    t26 = (~(t25));
    t27 = *((unsigned int *)t13);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB26;

LAB27:    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t18 = (t9 ^ t10);
    t19 = (t8 | t18);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB33;

LAB30:    if (t22 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t13) = 1;

LAB33:    t12 = (t13 + 4);
    t25 = *((unsigned int *)t12);
    t26 = (~(t25));
    t27 = *((unsigned int *)t13);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB34;

LAB35:
LAB36:
LAB28:
LAB20:    goto LAB12;

LAB16:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB17;

LAB18:
LAB21:    t37 = (t0 + 1368U);
    t38 = *((char **)t37);
    t37 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t37, t38, 0, 0, 32, 0LL);
    goto LAB20;

LAB24:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB25;

LAB26:
LAB29:    t14 = (t0 + 1368U);
    t16 = *((char **)t14);
    t14 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t14, t16, 0, 0, 32, 0LL);
    goto LAB28;

LAB32:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB33;

LAB34:
LAB37:    t14 = ((char*)((ng2)));
    t16 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t16, t14, 0, 0, 1, 0LL);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t18 = (t9 ^ t10);
    t19 = (t8 | t18);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB41;

LAB38:    if (t22 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t13) = 1;

LAB41:    t12 = (t13 + 4);
    t25 = *((unsigned int *)t12);
    t26 = (~(t25));
    t27 = *((unsigned int *)t13);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB42;

LAB43:    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t18 = (t9 ^ t10);
    t19 = (t8 | t18);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB49;

LAB46:    if (t22 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t13) = 1;

LAB49:    t12 = (t13 + 4);
    t25 = *((unsigned int *)t12);
    t26 = (~(t25));
    t27 = *((unsigned int *)t13);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB50;

LAB51:    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t18 = (t9 ^ t10);
    t19 = (t8 | t18);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB57;

LAB54:    if (t22 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t13) = 1;

LAB57:    t12 = (t13 + 4);
    t25 = *((unsigned int *)t12);
    t26 = (~(t25));
    t27 = *((unsigned int *)t13);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB58;

LAB59:    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t18 = (t9 ^ t10);
    t19 = (t8 | t18);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB65;

LAB62:    if (t22 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t13) = 1;

LAB65:    t12 = (t13 + 4);
    t25 = *((unsigned int *)t12);
    t26 = (~(t25));
    t27 = *((unsigned int *)t13);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB66;

LAB67:
LAB68:
LAB60:
LAB52:
LAB44:    goto LAB36;

LAB40:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB41;

LAB42:
LAB45:    t14 = (t0 + 1368U);
    t16 = *((char **)t14);
    xsi_vlogtype_sign_extend(t39, 64, t16, 32);
    t14 = (t0 + 1528U);
    t17 = *((char **)t14);
    xsi_vlogtype_sign_extend(t40, 64, t17, 32);
    xsi_vlog_signed_multiply(t41, 64, t39, 64, t40, 64);
    t14 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t14, t41, 0, 0, 32, 0LL);
    t30 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t30, t41, 32, 0, 32, 0LL);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB44;

LAB48:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB49;

LAB50:
LAB53:    t14 = (t0 + 1368U);
    t16 = *((char **)t14);
    t14 = (t0 + 1528U);
    t17 = *((char **)t14);
    memset(t43, 0, 8);
    xsi_vlog_signed_mod(t43, 32, t16, 32, t17, 32);
    t14 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t14, t43, 0, 0, 32, 0LL);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t42, 0, 8);
    xsi_vlog_signed_divide(t42, 32, t3, 32, t4, 32);
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t42, 0, 0, 32, 0LL);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB52;

LAB56:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB57;

LAB58:
LAB61:    t14 = (t0 + 1368U);
    t16 = *((char **)t14);
    xsi_vlogtype_zero_extend(t39, 64, t16, 32);
    t14 = (t0 + 1528U);
    t17 = *((char **)t14);
    xsi_vlogtype_zero_extend(t40, 64, t17, 32);
    xsi_vlog_unsigned_multiply(t41, 64, t39, 64, t40, 64);
    t14 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t14, t41, 0, 0, 32, 0LL);
    t30 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t30, t41, 32, 0, 32, 0LL);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB60;

LAB64:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB65;

LAB66:
LAB69:    t14 = (t0 + 1368U);
    t16 = *((char **)t14);
    t14 = (t0 + 1528U);
    t17 = *((char **)t14);
    memset(t43, 0, 8);
    xsi_vlog_unsigned_mod(t43, 32, t16, 32, t17, 32);
    t14 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t14, t43, 0, 0, 32, 0LL);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t42, 0, 8);
    xsi_vlog_unsigned_divide(t42, 32, t3, 32, t4, 32);
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t42, 0, 0, 32, 0LL);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB68;

LAB70:
LAB73:    t12 = (t0 + 3048);
    t14 = (t12 + 56U);
    t16 = *((char **)t14);
    t17 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 32, 0LL);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB72;

}


extern void work_m_00000000000354751618_3805778912_init()
{
	static char *pe[] = {(void *)Always_39_0};
	xsi_register_didat("work_m_00000000000354751618_3805778912", "isim/mips.exe.sim/work/m_00000000000354751618_3805778912.didat");
	xsi_register_executes(pe);
}

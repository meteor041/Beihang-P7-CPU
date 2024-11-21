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
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static int ng4[] = {31, 0};
static int ng5[] = {15, 0};
static int ng6[] = {10, 0};
static int ng7[] = {6, 0};
static int ng8[] = {2, 0};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {12U, 0U};
static unsigned int ng11[] = {13U, 0U};
static unsigned int ng12[] = {14U, 0U};
static const char *ng13 = "Wrong register path in CP0!!!\n";
static unsigned int ng14[] = {0U, 4294967295U};



static void Initial_27_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:
LAB2:    t1 = ((char*)((ng0)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    t1 = ((char*)((ng0)));
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    t1 = ((char*)((ng0)));
    t2 = (t0 + 3848);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_32_1(char *t0)
{
    char t13[8];
    char t19[8];
    char t20[8];
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
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;
    int t21;
    int t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;

LAB0:    t1 = (t0 + 5016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 6328);
    *((int *)t2) = 1;
    t3 = (t0 + 5048);
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

LAB7:    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB41;

LAB42:    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB47;

LAB48:
LAB49:
LAB43:
LAB12:
LAB8:    goto LAB2;

LAB6:
LAB9:    t11 = ((char*)((ng0)));
    t12 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:
LAB13:    t4 = ((char*)((ng1)));
    t5 = (t0 + 3528);
    t11 = (t0 + 3528);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    t4 = (t0 + 3528);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t14 = (t13 + 4);
    t6 = *((unsigned int *)t14);
    t18 = (!(t6));
    if (t18 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    t4 = (t0 + 3688);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t14 = (t13 + 4);
    t6 = *((unsigned int *)t14);
    t18 = (!(t6));
    if (t18 == 1)
        goto LAB18;

LAB19:    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    t4 = (t0 + 3688);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng5)));
    t14 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t13, t19, t20, ((int*)(t11)), 2, t12, 32, 1, t14, 32, 1);
    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t18 = (!(t6));
    t16 = (t19 + 4);
    t7 = *((unsigned int *)t16);
    t21 = (!(t7));
    t22 = (t18 && t21);
    t23 = (t20 + 4);
    t8 = *((unsigned int *)t23);
    t24 = (!(t8));
    t25 = (t22 && t24);
    if (t25 == 1)
        goto LAB20;

LAB21:    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    t4 = (t0 + 3688);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng7)));
    t14 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t13, t19, t20, ((int*)(t11)), 2, t12, 32, 1, t14, 32, 1);
    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t18 = (!(t6));
    t16 = (t19 + 4);
    t7 = *((unsigned int *)t16);
    t21 = (!(t7));
    t22 = (t18 && t21);
    t23 = (t20 + 4);
    t8 = *((unsigned int *)t23);
    t24 = (!(t8));
    t25 = (t22 && t24);
    if (t25 == 1)
        goto LAB22;

LAB23:    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t20, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t17 = (t9 ^ t10);
    t29 = (t8 | t17);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t5);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t34 = (t29 & t33);
    if (t34 != 0)
        goto LAB27;

LAB24:    if (t32 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t20) = 1;

LAB27:    memset(t19, 0, 8);
    t12 = (t20 + 4);
    t35 = *((unsigned int *)t12);
    t36 = (~(t35));
    t37 = *((unsigned int *)t20);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t12) != 0)
        goto LAB30;

LAB31:    t15 = (t19 + 4);
    t40 = *((unsigned int *)t19);
    t41 = *((unsigned int *)t15);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB32;

LAB33:    t44 = *((unsigned int *)t19);
    t45 = (~(t44));
    t46 = *((unsigned int *)t15);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t15) > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t19) > 0)
        goto LAB38;

LAB39:    memcpy(t13, t49, 8);

LAB40:    t48 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t48, t13, 0, 0, 32, 0LL);
    goto LAB12;

LAB14:    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB15;

LAB16:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB17;

LAB18:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB19;

LAB20:    t9 = *((unsigned int *)t20);
    t26 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t19);
    t27 = (t10 - t17);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t26, *((unsigned int *)t19), t28, 0LL);
    goto LAB21;

LAB22:    t9 = *((unsigned int *)t20);
    t26 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t19);
    t27 = (t10 - t17);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t26, *((unsigned int *)t19), t28, 0LL);
    goto LAB23;

LAB26:    t11 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB27;

LAB28:    *((unsigned int *)t19) = 1;
    goto LAB31;

LAB30:    t14 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB31;

LAB32:    t16 = (t0 + 2008U);
    t23 = *((char **)t16);
    t16 = ((char*)((ng9)));
    memset(t43, 0, 8);
    xsi_vlog_unsigned_minus(t43, 32, t23, 32, t16, 32);
    goto LAB33;

LAB34:    t48 = (t0 + 2008U);
    t49 = *((char **)t48);
    goto LAB35;

LAB36:    xsi_vlog_unsigned_bit_combine(t13, 32, t43, 32, t49, 32);
    goto LAB40;

LAB38:    memcpy(t13, t43, 8);
    goto LAB40;

LAB41:
LAB44:    t4 = ((char*)((ng0)));
    t5 = (t0 + 3528);
    t11 = (t0 + 3528);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB45;

LAB46:    goto LAB43;

LAB45:    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB46;

LAB47:
LAB50:    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng10)));
    memset(t13, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t17 = *((unsigned int *)t5);
    t29 = *((unsigned int *)t4);
    t30 = (t17 ^ t29);
    t31 = *((unsigned int *)t11);
    t32 = *((unsigned int *)t12);
    t33 = (t31 ^ t32);
    t34 = (t30 | t33);
    t35 = *((unsigned int *)t11);
    t36 = *((unsigned int *)t12);
    t37 = (t35 | t36);
    t38 = (~(t37));
    t39 = (t34 & t38);
    if (t39 != 0)
        goto LAB54;

LAB51:    if (t37 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t13) = 1;

LAB54:    t15 = (t13 + 4);
    t40 = *((unsigned int *)t15);
    t41 = (~(t40));
    t42 = *((unsigned int *)t13);
    t44 = (t42 & t41);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB55;

LAB56:    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t17 = (t9 ^ t10);
    t29 = (t8 | t17);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t5);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t34 = (t29 & t33);
    if (t34 != 0)
        goto LAB62;

LAB59:    if (t32 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t13) = 1;

LAB62:    t12 = (t13 + 4);
    t35 = *((unsigned int *)t12);
    t36 = (~(t35));
    t37 = *((unsigned int *)t13);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB63;

LAB64:    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t17 = (t9 ^ t10);
    t29 = (t8 | t17);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t5);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t34 = (t29 & t33);
    if (t34 != 0)
        goto LAB70;

LAB67:    if (t32 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t13) = 1;

LAB70:    t12 = (t13 + 4);
    t35 = *((unsigned int *)t12);
    t36 = (~(t35));
    t37 = *((unsigned int *)t13);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB71;

LAB72:
LAB75:    xsi_vlogfile_write(1, 0, 0, ng13, 1, t0);

LAB73:
LAB65:
LAB57:    goto LAB49;

LAB53:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB54;

LAB55:
LAB58:    t16 = (t0 + 1688U);
    t23 = *((char **)t16);
    t16 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t16, t23, 0, 0, 32, 0LL);
    goto LAB57;

LAB61:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB62;

LAB63:
LAB66:    t14 = (t0 + 1688U);
    t15 = *((char **)t14);
    t14 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t14, t15, 0, 0, 32, 0LL);
    goto LAB65;

LAB69:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB70;

LAB71:
LAB74:    t14 = (t0 + 1688U);
    t15 = *((char **)t14);
    t14 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t14, t15, 0, 0, 32, 0LL);
    goto LAB73;

}

static void Cont_70_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t40[8];
    char t41[8];
    char t44[8];
    char t78[8];
    char t79[8];
    char t82[8];
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
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t80;
    char *t81;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;

LAB0:    t1 = (t0 + 5264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng10)));
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

LAB19:    memcpy(t3, t40, 8);

LAB20:    t117 = (t0 + 6472);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    t120 = (t119 + 56U);
    t121 = *((char **)t120);
    memcpy(t121, t3, 8);
    xsi_driver_vfirst_trans(t117, 0, 31);
    t122 = (t0 + 6344);
    *((int *)t122) = 1;

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

LAB12:    t33 = (t0 + 3528);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    goto LAB13;

LAB14:    t42 = (t0 + 1528U);
    t43 = *((char **)t42);
    t42 = ((char*)((ng11)));
    memset(t44, 0, 8);
    t45 = (t43 + 4);
    t46 = (t42 + 4);
    t47 = *((unsigned int *)t43);
    t48 = *((unsigned int *)t42);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB24;

LAB21:    if (t56 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t44) = 1;

LAB24:    memset(t41, 0, 8);
    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t60) != 0)
        goto LAB27;

LAB28:    t67 = (t41 + 4);
    t68 = *((unsigned int *)t41);
    t69 = *((unsigned int *)t67);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB29;

LAB30:    t74 = *((unsigned int *)t41);
    t75 = (~(t74));
    t76 = *((unsigned int *)t67);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t67) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t41) > 0)
        goto LAB35;

LAB36:    memcpy(t40, t78, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t40, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

LAB23:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t41) = 1;
    goto LAB28;

LAB27:    t66 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB28;

LAB29:    t71 = (t0 + 3688);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    goto LAB30;

LAB31:    t80 = (t0 + 1528U);
    t81 = *((char **)t80);
    t80 = ((char*)((ng12)));
    memset(t82, 0, 8);
    t83 = (t81 + 4);
    t84 = (t80 + 4);
    t85 = *((unsigned int *)t81);
    t86 = *((unsigned int *)t80);
    t87 = (t85 ^ t86);
    t88 = *((unsigned int *)t83);
    t89 = *((unsigned int *)t84);
    t90 = (t88 ^ t89);
    t91 = (t87 | t90);
    t92 = *((unsigned int *)t83);
    t93 = *((unsigned int *)t84);
    t94 = (t92 | t93);
    t95 = (~(t94));
    t96 = (t91 & t95);
    if (t96 != 0)
        goto LAB41;

LAB38:    if (t94 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t82) = 1;

LAB41:    memset(t79, 0, 8);
    t98 = (t82 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t82);
    t102 = (t101 & t100);
    t103 = (t102 & 1U);
    if (t103 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t98) != 0)
        goto LAB44;

LAB45:    t105 = (t79 + 4);
    t106 = *((unsigned int *)t79);
    t107 = *((unsigned int *)t105);
    t108 = (t106 || t107);
    if (t108 > 0)
        goto LAB46;

LAB47:    t112 = *((unsigned int *)t79);
    t113 = (~(t112));
    t114 = *((unsigned int *)t105);
    t115 = (t113 || t114);
    if (t115 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t105) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t79) > 0)
        goto LAB52;

LAB53:    memcpy(t78, t116, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t40, 32, t73, 32, t78, 32);
    goto LAB37;

LAB35:    memcpy(t40, t73, 8);
    goto LAB37;

LAB40:    t97 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t79) = 1;
    goto LAB45;

LAB44:    t104 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB45;

LAB46:    t109 = (t0 + 3848);
    t110 = (t109 + 56U);
    t111 = *((char **)t110);
    goto LAB47;

LAB48:    t116 = ((char*)((ng14)));
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t78, 32, t111, 32, t116, 32);
    goto LAB54;

LAB52:    memcpy(t78, t111, 8);
    goto LAB54;

}

static void Cont_74_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t22[8];
    char t37[8];
    char t53[8];
    char t61[8];
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
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
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
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;

LAB0:    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2488U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
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

LAB7:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (!(t31));
    t33 = *((unsigned int *)t30);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    memcpy(t61, t22, 8);

LAB14:    memset(t4, 0, 8);
    t89 = (t61 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t61);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t89) != 0)
        goto LAB28;

LAB29:    t96 = (t4 + 4);
    t97 = *((unsigned int *)t4);
    t98 = *((unsigned int *)t96);
    t99 = (t97 || t98);
    if (t99 > 0)
        goto LAB30;

LAB31:    t101 = *((unsigned int *)t4);
    t102 = (~(t101));
    t103 = *((unsigned int *)t96);
    t104 = (t102 || t103);
    if (t104 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t96) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t4) > 0)
        goto LAB36;

LAB37:    memcpy(t3, t105, 8);

LAB38:    t106 = (t0 + 6536);
    t107 = (t106 + 56U);
    t108 = *((char **)t107);
    t109 = (t108 + 56U);
    t110 = *((char **)t109);
    memset(t110, 0, 8);
    t111 = 1U;
    t112 = t111;
    t113 = (t3 + 4);
    t114 = *((unsigned int *)t3);
    t111 = (t111 & t114);
    t115 = *((unsigned int *)t113);
    t112 = (t112 & t115);
    t116 = (t110 + 4);
    t117 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t117 | t111);
    t118 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t118 | t112);
    xsi_driver_vfirst_trans(t106, 0, 0);
    t119 = (t0 + 6360);
    *((int *)t119) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB10:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB11;

LAB12:    t35 = (t0 + 2328U);
    t36 = *((char **)t35);
    t35 = ((char*)((ng0)));
    memset(t37, 0, 8);
    t38 = (t36 + 4);
    t39 = (t35 + 4);
    t40 = *((unsigned int *)t36);
    t41 = *((unsigned int *)t35);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB16;

LAB15:    if (t49 != 0)
        goto LAB17;

LAB18:    memset(t53, 0, 8);
    t54 = (t37 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t54) != 0)
        goto LAB21;

LAB22:    t62 = *((unsigned int *)t22);
    t63 = *((unsigned int *)t53);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = (t22 + 4);
    t66 = (t53 + 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB16:    *((unsigned int *)t37) = 1;
    goto LAB18;

LAB17:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t53) = 1;
    goto LAB22;

LAB21:    t60 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB22;

LAB23:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t22 + 4);
    t76 = (t53 + 4);
    t77 = *((unsigned int *)t75);
    t78 = (~(t77));
    t79 = *((unsigned int *)t22);
    t80 = (t79 & t78);
    t81 = *((unsigned int *)t76);
    t82 = (~(t81));
    t83 = *((unsigned int *)t53);
    t84 = (t83 & t82);
    t85 = (~(t80));
    t86 = (~(t84));
    t87 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t87 & t85);
    t88 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t88 & t86);
    goto LAB25;

LAB26:    *((unsigned int *)t4) = 1;
    goto LAB29;

LAB28:    t95 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB29;

LAB30:    t100 = ((char*)((ng2)));
    goto LAB31;

LAB32:    t105 = ((char*)((ng3)));
    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t3, 32, t100, 32, t105, 32);
    goto LAB38;

LAB36:    memcpy(t3, t100, 8);
    goto LAB38;

}

static void Cont_76_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 5760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6600);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 6376);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_78_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 6008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 6664);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 6392);
    *((int *)t8) = 1;

LAB1:    return;
}


extern void work_m_00000000002784033196_3975733304_init()
{
	static char *pe[] = {(void *)Initial_27_0,(void *)Always_32_1,(void *)Cont_70_2,(void *)Cont_74_3,(void *)Cont_76_4,(void *)Cont_78_5};
	xsi_register_didat("work_m_00000000002784033196_3975733304", "isim/mips.exe.sim/work/m_00000000002784033196_3975733304.didat");
	xsi_register_executes(pe);
}

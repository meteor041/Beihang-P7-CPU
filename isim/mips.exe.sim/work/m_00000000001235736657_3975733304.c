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
static int ng1[] = {1, 0};
static unsigned int ng2[] = {1U, 0U};
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



static void Initial_42_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:
LAB2:    t1 = ((char*)((ng0)));
    t2 = (t0 + 3848);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    t1 = ((char*)((ng0)));
    t2 = (t0 + 4008);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    t1 = ((char*)((ng0)));
    t2 = (t0 + 4168);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_47_1(char *t0)
{
    char t13[8];
    char t19[8];
    char t20[8];
    char t35[8];
    char t36[8];
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
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;

LAB0:    t1 = (t0 + 5336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7144);
    *((int *)t2) = 1;
    t3 = (t0 + 5368);
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

LAB7:
LAB10:    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:
LAB13:    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB17;

LAB18:    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB61;

LAB62:
LAB63:
LAB19:
LAB8:    goto LAB2;

LAB6:
LAB9:    t11 = ((char*)((ng0)));
    t12 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB11:
LAB14:    t4 = ((char*)((ng0)));
    t5 = (t0 + 3848);
    t11 = (t0 + 3848);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB15;

LAB16:    goto LAB13;

LAB15:    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB16;

LAB17:
LAB20:    t4 = ((char*)((ng2)));
    t5 = (t0 + 3848);
    t11 = (t0 + 3848);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng2)));
    t3 = (t0 + 3848);
    t4 = (t0 + 3848);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t14 = (t13 + 4);
    t6 = *((unsigned int *)t14);
    t18 = (!(t6));
    if (t18 == 1)
        goto LAB23;

LAB24:    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 4008);
    t4 = (t0 + 4008);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t14 = (t13 + 4);
    t6 = *((unsigned int *)t14);
    t18 = (!(t6));
    if (t18 == 1)
        goto LAB25;

LAB26:    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 4008);
    t4 = (t0 + 4008);
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
        goto LAB27;

LAB28:    t2 = (t0 + 3448U);
    t3 = *((char **)t2);
    memset(t19, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t2) != 0)
        goto LAB31;

LAB32:    t5 = (t19 + 4);
    t17 = *((unsigned int *)t19);
    t29 = *((unsigned int *)t5);
    t30 = (t17 || t29);
    if (t30 > 0)
        goto LAB33;

LAB34:    t31 = *((unsigned int *)t19);
    t32 = (~(t31));
    t33 = *((unsigned int *)t5);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t5) > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t19) > 0)
        goto LAB39;

LAB40:    memcpy(t13, t14, 8);

LAB41:    t12 = (t0 + 4008);
    t15 = (t0 + 4008);
    t16 = (t15 + 72U);
    t23 = *((char **)t16);
    t37 = ((char*)((ng7)));
    t38 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t20, t35, t36, ((int*)(t23)), 2, t37, 32, 1, t38, 32, 1);
    t39 = (t20 + 4);
    t40 = *((unsigned int *)t39);
    t18 = (!(t40));
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t41);
    t21 = (!(t42));
    t22 = (t18 && t21);
    t43 = (t36 + 4);
    t44 = *((unsigned int *)t43);
    t24 = (!(t44));
    t25 = (t22 && t24);
    if (t25 == 1)
        goto LAB42;

LAB43:    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
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
        goto LAB47;

LAB44:    if (t32 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t20) = 1;

LAB47:    memset(t19, 0, 8);
    t12 = (t20 + 4);
    t40 = *((unsigned int *)t12);
    t42 = (~(t40));
    t44 = *((unsigned int *)t20);
    t45 = (t44 & t42);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t12) != 0)
        goto LAB50;

LAB51:    t15 = (t19 + 4);
    t47 = *((unsigned int *)t19);
    t48 = *((unsigned int *)t15);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB52;

LAB53:    t50 = *((unsigned int *)t19);
    t51 = (~(t50));
    t52 = *((unsigned int *)t15);
    t53 = (t51 || t52);
    if (t53 > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t15) > 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t19) > 0)
        goto LAB58;

LAB59:    memcpy(t13, t38, 8);

LAB60:    t37 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t37, t13, 0, 0, 32, 0LL);
    goto LAB19;

LAB21:    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB22;

LAB23:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB24;

LAB25:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB26;

LAB27:    t9 = *((unsigned int *)t20);
    t26 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t19);
    t27 = (t10 - t17);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t26, *((unsigned int *)t19), t28, 0LL);
    goto LAB28;

LAB29:    *((unsigned int *)t19) = 1;
    goto LAB32;

LAB31:    t4 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB32;

LAB33:    t11 = ((char*)((ng0)));
    goto LAB34;

LAB35:    t12 = (t0 + 2328U);
    t14 = *((char **)t12);
    goto LAB36;

LAB37:    xsi_vlog_unsigned_bit_combine(t13, 5, t11, 5, t14, 5);
    goto LAB41;

LAB39:    memcpy(t13, t11, 8);
    goto LAB41;

LAB42:    t45 = *((unsigned int *)t36);
    t26 = (t45 + 0);
    t46 = *((unsigned int *)t20);
    t47 = *((unsigned int *)t35);
    t27 = (t46 - t47);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t12, t13, t26, *((unsigned int *)t35), t28, 0LL);
    goto LAB43;

LAB46:    t11 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB47;

LAB48:    *((unsigned int *)t19) = 1;
    goto LAB51;

LAB50:    t14 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB51;

LAB52:    t16 = (t0 + 2008U);
    t23 = *((char **)t16);
    t16 = ((char*)((ng9)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_minus(t35, 32, t23, 32, t16, 32);
    goto LAB53;

LAB54:    t37 = (t0 + 2008U);
    t38 = *((char **)t37);
    goto LAB55;

LAB56:    xsi_vlog_unsigned_bit_combine(t13, 32, t35, 32, t38, 32);
    goto LAB60;

LAB58:    memcpy(t13, t35, 8);
    goto LAB60;

LAB61:
LAB64:    t4 = (t0 + 1528U);
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
    t40 = *((unsigned int *)t11);
    t42 = *((unsigned int *)t12);
    t44 = (t40 | t42);
    t45 = (~(t44));
    t46 = (t34 & t45);
    if (t46 != 0)
        goto LAB68;

LAB65:    if (t44 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t13) = 1;

LAB68:    t15 = (t13 + 4);
    t47 = *((unsigned int *)t15);
    t48 = (~(t47));
    t49 = *((unsigned int *)t13);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB69;

LAB70:    t2 = (t0 + 1528U);
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
        goto LAB76;

LAB73:    if (t32 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t13) = 1;

LAB76:    t12 = (t13 + 4);
    t40 = *((unsigned int *)t12);
    t42 = (~(t40));
    t44 = *((unsigned int *)t13);
    t45 = (t44 & t42);
    t46 = (t45 != 0);
    if (t46 > 0)
        goto LAB77;

LAB78:    t2 = (t0 + 1528U);
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
        goto LAB84;

LAB81:    if (t32 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t13) = 1;

LAB84:    t12 = (t13 + 4);
    t40 = *((unsigned int *)t12);
    t42 = (~(t40));
    t44 = *((unsigned int *)t13);
    t45 = (t44 & t42);
    t46 = (t45 != 0);
    if (t46 > 0)
        goto LAB85;

LAB86:
LAB89:    xsi_vlogfile_write(1, 0, 0, ng13, 1, t0);

LAB87:
LAB79:
LAB71:    goto LAB63;

LAB67:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB68;

LAB69:
LAB72:    t16 = (t0 + 1688U);
    t23 = *((char **)t16);
    t16 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t16, t23, 0, 0, 32, 0LL);
    goto LAB71;

LAB75:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB76;

LAB77:
LAB80:    t14 = (t0 + 1688U);
    t15 = *((char **)t14);
    t14 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t14, t15, 0, 0, 32, 0LL);
    goto LAB79;

LAB83:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB84;

LAB85:
LAB88:    t14 = (t0 + 1688U);
    t15 = *((char **)t14);
    t14 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t14, t15, 0, 0, 32, 0LL);
    goto LAB87;

}

static void Cont_91_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t17[8];
    char t33[8];
    char t47[8];
    char t63[8];
    char t71[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t18;
    char *t19;
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
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    int t95;
    int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;

LAB0:    t1 = (t0 + 5584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3848);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 1);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t8) = t15;
    t16 = ((char*)((ng0)));
    memset(t17, 0, 8);
    t18 = (t7 + 4);
    t19 = (t16 + 4);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB7;

LAB4:    if (t29 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t17) = 1;

LAB7:    memset(t33, 0, 8);
    t34 = (t17 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t17);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t34) != 0)
        goto LAB10;

LAB11:    t41 = (t33 + 4);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t41);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB12;

LAB13:    memcpy(t71, t33, 8);

LAB14:    memset(t4, 0, 8);
    t103 = (t71 + 4);
    t104 = *((unsigned int *)t103);
    t105 = (~(t104));
    t106 = *((unsigned int *)t71);
    t107 = (t106 & t105);
    t108 = (t107 & 1U);
    if (t108 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t103) != 0)
        goto LAB28;

LAB29:    t110 = (t4 + 4);
    t111 = *((unsigned int *)t4);
    t112 = *((unsigned int *)t110);
    t113 = (t111 || t112);
    if (t113 > 0)
        goto LAB30;

LAB31:    t115 = *((unsigned int *)t4);
    t116 = (~(t115));
    t117 = *((unsigned int *)t110);
    t118 = (t116 || t117);
    if (t118 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t110) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t4) > 0)
        goto LAB36;

LAB37:    memcpy(t3, t119, 8);

LAB38:    t120 = (t0 + 7320);
    t121 = (t120 + 56U);
    t122 = *((char **)t121);
    t123 = (t122 + 56U);
    t124 = *((char **)t123);
    memset(t124, 0, 8);
    t125 = 1U;
    t126 = t125;
    t127 = (t3 + 4);
    t128 = *((unsigned int *)t3);
    t125 = (t125 & t128);
    t129 = *((unsigned int *)t127);
    t126 = (t126 & t129);
    t130 = (t124 + 4);
    t131 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t131 | t125);
    t132 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t132 | t126);
    xsi_driver_vfirst_trans(t120, 0, 0);
    t133 = (t0 + 7160);
    *((int *)t133) = 1;

LAB1:    return;
LAB6:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t33) = 1;
    goto LAB11;

LAB10:    t40 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB11;

LAB12:    t45 = (t0 + 2328U);
    t46 = *((char **)t45);
    t45 = ((char*)((ng0)));
    memset(t47, 0, 8);
    t48 = (t46 + 4);
    t49 = (t45 + 4);
    t50 = *((unsigned int *)t46);
    t51 = *((unsigned int *)t45);
    t52 = (t50 ^ t51);
    t53 = *((unsigned int *)t48);
    t54 = *((unsigned int *)t49);
    t55 = (t53 ^ t54);
    t56 = (t52 | t55);
    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t49);
    t59 = (t57 | t58);
    t60 = (~(t59));
    t61 = (t56 & t60);
    if (t61 != 0)
        goto LAB16;

LAB15:    if (t59 != 0)
        goto LAB17;

LAB18:    memset(t63, 0, 8);
    t64 = (t47 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t47);
    t68 = (t67 & t66);
    t69 = (t68 & 1U);
    if (t69 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t64) != 0)
        goto LAB21;

LAB22:    t72 = *((unsigned int *)t33);
    t73 = *((unsigned int *)t63);
    t74 = (t72 & t73);
    *((unsigned int *)t71) = t74;
    t75 = (t33 + 4);
    t76 = (t63 + 4);
    t77 = (t71 + 4);
    t78 = *((unsigned int *)t75);
    t79 = *((unsigned int *)t76);
    t80 = (t78 | t79);
    *((unsigned int *)t77) = t80;
    t81 = *((unsigned int *)t77);
    t82 = (t81 != 0);
    if (t82 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB16:    *((unsigned int *)t47) = 1;
    goto LAB18;

LAB17:    t62 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t63) = 1;
    goto LAB22;

LAB21:    t70 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB22;

LAB23:    t83 = *((unsigned int *)t71);
    t84 = *((unsigned int *)t77);
    *((unsigned int *)t71) = (t83 | t84);
    t85 = (t33 + 4);
    t86 = (t63 + 4);
    t87 = *((unsigned int *)t33);
    t88 = (~(t87));
    t89 = *((unsigned int *)t85);
    t90 = (~(t89));
    t91 = *((unsigned int *)t63);
    t92 = (~(t91));
    t93 = *((unsigned int *)t86);
    t94 = (~(t93));
    t95 = (t88 & t90);
    t96 = (t92 & t94);
    t97 = (~(t95));
    t98 = (~(t96));
    t99 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t99 & t97);
    t100 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t100 & t98);
    t101 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t101 & t97);
    t102 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t102 & t98);
    goto LAB25;

LAB26:    *((unsigned int *)t4) = 1;
    goto LAB29;

LAB28:    t109 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t109) = 1;
    goto LAB29;

LAB30:    t114 = ((char*)((ng1)));
    goto LAB31;

LAB32:    t119 = ((char*)((ng3)));
    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t3, 32, t114, 32, t119, 32);
    goto LAB38;

LAB36:    memcpy(t3, t114, 8);
    goto LAB38;

}

static void Cont_92_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t17[8];
    char t33[8];
    char t48[8];
    char t58[8];
    char t74[8];
    char t82[8];
    char t114[8];
    char t126[8];
    char t127[8];
    char t141[8];
    char t179[8];
    char t187[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t18;
    char *t19;
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
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t59;
    char *t60;
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
    unsigned int t72;
    char *t73;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    int t106;
    int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    int t164;
    int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    char *t178;
    char *t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    char *t186;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    char *t191;
    char *t192;
    char *t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    char *t201;
    char *t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    int t211;
    int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    char *t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    char *t225;
    char *t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    char *t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    char *t235;
    char *t236;
    char *t237;
    char *t238;
    char *t239;
    char *t240;
    unsigned int t241;
    unsigned int t242;
    char *t243;
    unsigned int t244;
    unsigned int t245;
    char *t246;
    unsigned int t247;
    unsigned int t248;
    char *t249;

LAB0:    t1 = (t0 + 5832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3848);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 1);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t8) = t15;
    t16 = ((char*)((ng0)));
    memset(t17, 0, 8);
    t18 = (t7 + 4);
    t19 = (t16 + 4);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB7;

LAB4:    if (t29 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t17) = 1;

LAB7:    memset(t33, 0, 8);
    t34 = (t17 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t17);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t34) != 0)
        goto LAB10;

LAB11:    t41 = (t33 + 4);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t41);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB12;

LAB13:    memcpy(t82, t33, 8);

LAB14:    memset(t114, 0, 8);
    t115 = (t82 + 4);
    t116 = *((unsigned int *)t115);
    t117 = (~(t116));
    t118 = *((unsigned int *)t82);
    t119 = (t118 & t117);
    t120 = (t119 & 1U);
    if (t120 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t115) != 0)
        goto LAB28;

LAB29:    t122 = (t114 + 4);
    t123 = *((unsigned int *)t114);
    t124 = *((unsigned int *)t122);
    t125 = (t123 || t124);
    if (t125 > 0)
        goto LAB30;

LAB31:    memcpy(t187, t114, 8);

LAB32:    memset(t4, 0, 8);
    t219 = (t187 + 4);
    t220 = *((unsigned int *)t219);
    t221 = (~(t220));
    t222 = *((unsigned int *)t187);
    t223 = (t222 & t221);
    t224 = (t223 & 1U);
    if (t224 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t219) != 0)
        goto LAB49;

LAB50:    t226 = (t4 + 4);
    t227 = *((unsigned int *)t4);
    t228 = *((unsigned int *)t226);
    t229 = (t227 || t228);
    if (t229 > 0)
        goto LAB51;

LAB52:    t231 = *((unsigned int *)t4);
    t232 = (~(t231));
    t233 = *((unsigned int *)t226);
    t234 = (t232 || t233);
    if (t234 > 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t226) > 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t4) > 0)
        goto LAB57;

LAB58:    memcpy(t3, t235, 8);

LAB59:    t236 = (t0 + 7384);
    t237 = (t236 + 56U);
    t238 = *((char **)t237);
    t239 = (t238 + 56U);
    t240 = *((char **)t239);
    memset(t240, 0, 8);
    t241 = 1U;
    t242 = t241;
    t243 = (t3 + 4);
    t244 = *((unsigned int *)t3);
    t241 = (t241 & t244);
    t245 = *((unsigned int *)t243);
    t242 = (t242 & t245);
    t246 = (t240 + 4);
    t247 = *((unsigned int *)t240);
    *((unsigned int *)t240) = (t247 | t241);
    t248 = *((unsigned int *)t246);
    *((unsigned int *)t246) = (t248 | t242);
    xsi_driver_vfirst_trans(t236, 0, 0);
    t249 = (t0 + 7176);
    *((int *)t249) = 1;

LAB1:    return;
LAB6:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t33) = 1;
    goto LAB11;

LAB10:    t40 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB11;

LAB12:    t45 = (t0 + 3848);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memset(t48, 0, 8);
    t49 = (t48 + 4);
    t50 = (t47 + 4);
    t51 = *((unsigned int *)t47);
    t52 = (t51 >> 0);
    t53 = (t52 & 1);
    *((unsigned int *)t48) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 >> 0);
    t56 = (t55 & 1);
    *((unsigned int *)t49) = t56;
    t57 = ((char*)((ng2)));
    memset(t58, 0, 8);
    t59 = (t48 + 4);
    t60 = (t57 + 4);
    t61 = *((unsigned int *)t48);
    t62 = *((unsigned int *)t57);
    t63 = (t61 ^ t62);
    t64 = *((unsigned int *)t59);
    t65 = *((unsigned int *)t60);
    t66 = (t64 ^ t65);
    t67 = (t63 | t66);
    t68 = *((unsigned int *)t59);
    t69 = *((unsigned int *)t60);
    t70 = (t68 | t69);
    t71 = (~(t70));
    t72 = (t67 & t71);
    if (t72 != 0)
        goto LAB18;

LAB15:    if (t70 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t58) = 1;

LAB18:    memset(t74, 0, 8);
    t75 = (t58 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t58);
    t79 = (t78 & t77);
    t80 = (t79 & 1U);
    if (t80 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t75) != 0)
        goto LAB21;

LAB22:    t83 = *((unsigned int *)t33);
    t84 = *((unsigned int *)t74);
    t85 = (t83 & t84);
    *((unsigned int *)t82) = t85;
    t86 = (t33 + 4);
    t87 = (t74 + 4);
    t88 = (t82 + 4);
    t89 = *((unsigned int *)t86);
    t90 = *((unsigned int *)t87);
    t91 = (t89 | t90);
    *((unsigned int *)t88) = t91;
    t92 = *((unsigned int *)t88);
    t93 = (t92 != 0);
    if (t93 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    t73 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t74) = 1;
    goto LAB22;

LAB21:    t81 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB22;

LAB23:    t94 = *((unsigned int *)t82);
    t95 = *((unsigned int *)t88);
    *((unsigned int *)t82) = (t94 | t95);
    t96 = (t33 + 4);
    t97 = (t74 + 4);
    t98 = *((unsigned int *)t33);
    t99 = (~(t98));
    t100 = *((unsigned int *)t96);
    t101 = (~(t100));
    t102 = *((unsigned int *)t74);
    t103 = (~(t102));
    t104 = *((unsigned int *)t97);
    t105 = (~(t104));
    t106 = (t99 & t101);
    t107 = (t103 & t105);
    t108 = (~(t106));
    t109 = (~(t107));
    t110 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t110 & t108);
    t111 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t111 & t109);
    t112 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t112 & t108);
    t113 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t113 & t109);
    goto LAB25;

LAB26:    *((unsigned int *)t114) = 1;
    goto LAB29;

LAB28:    t121 = (t114 + 4);
    *((unsigned int *)t114) = 1;
    *((unsigned int *)t121) = 1;
    goto LAB29;

LAB30:    t128 = (t0 + 3848);
    t129 = (t128 + 56U);
    t130 = *((char **)t129);
    memset(t127, 0, 8);
    t131 = (t127 + 4);
    t132 = (t130 + 4);
    t133 = *((unsigned int *)t130);
    t134 = (t133 >> 10);
    *((unsigned int *)t127) = t134;
    t135 = *((unsigned int *)t132);
    t136 = (t135 >> 10);
    *((unsigned int *)t131) = t136;
    t137 = *((unsigned int *)t127);
    *((unsigned int *)t127) = (t137 & 63U);
    t138 = *((unsigned int *)t131);
    *((unsigned int *)t131) = (t138 & 63U);
    t139 = (t0 + 2488U);
    t140 = *((char **)t139);
    t142 = *((unsigned int *)t127);
    t143 = *((unsigned int *)t140);
    t144 = (t142 & t143);
    *((unsigned int *)t141) = t144;
    t139 = (t127 + 4);
    t145 = (t140 + 4);
    t146 = (t141 + 4);
    t147 = *((unsigned int *)t139);
    t148 = *((unsigned int *)t145);
    t149 = (t147 | t148);
    *((unsigned int *)t146) = t149;
    t150 = *((unsigned int *)t146);
    t151 = (t150 != 0);
    if (t151 == 1)
        goto LAB33;

LAB34:
LAB35:    memset(t126, 0, 8);
    t172 = (t141 + 4);
    t173 = *((unsigned int *)t172);
    t174 = (~(t173));
    t175 = *((unsigned int *)t141);
    t176 = (t175 & t174);
    t177 = (t176 & 63U);
    if (t177 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t172) != 0)
        goto LAB38;

LAB39:    memset(t179, 0, 8);
    t180 = (t126 + 4);
    t181 = *((unsigned int *)t180);
    t182 = (~(t181));
    t183 = *((unsigned int *)t126);
    t184 = (t183 & t182);
    t185 = (t184 & 1U);
    if (t185 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t180) != 0)
        goto LAB42;

LAB43:    t188 = *((unsigned int *)t114);
    t189 = *((unsigned int *)t179);
    t190 = (t188 & t189);
    *((unsigned int *)t187) = t190;
    t191 = (t114 + 4);
    t192 = (t179 + 4);
    t193 = (t187 + 4);
    t194 = *((unsigned int *)t191);
    t195 = *((unsigned int *)t192);
    t196 = (t194 | t195);
    *((unsigned int *)t193) = t196;
    t197 = *((unsigned int *)t193);
    t198 = (t197 != 0);
    if (t198 == 1)
        goto LAB44;

LAB45:
LAB46:    goto LAB32;

LAB33:    t152 = *((unsigned int *)t141);
    t153 = *((unsigned int *)t146);
    *((unsigned int *)t141) = (t152 | t153);
    t154 = (t127 + 4);
    t155 = (t140 + 4);
    t156 = *((unsigned int *)t127);
    t157 = (~(t156));
    t158 = *((unsigned int *)t154);
    t159 = (~(t158));
    t160 = *((unsigned int *)t140);
    t161 = (~(t160));
    t162 = *((unsigned int *)t155);
    t163 = (~(t162));
    t164 = (t157 & t159);
    t165 = (t161 & t163);
    t166 = (~(t164));
    t167 = (~(t165));
    t168 = *((unsigned int *)t146);
    *((unsigned int *)t146) = (t168 & t166);
    t169 = *((unsigned int *)t146);
    *((unsigned int *)t146) = (t169 & t167);
    t170 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t170 & t166);
    t171 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t171 & t167);
    goto LAB35;

LAB36:    *((unsigned int *)t126) = 1;
    goto LAB39;

LAB38:    t178 = (t126 + 4);
    *((unsigned int *)t126) = 1;
    *((unsigned int *)t178) = 1;
    goto LAB39;

LAB40:    *((unsigned int *)t179) = 1;
    goto LAB43;

LAB42:    t186 = (t179 + 4);
    *((unsigned int *)t179) = 1;
    *((unsigned int *)t186) = 1;
    goto LAB43;

LAB44:    t199 = *((unsigned int *)t187);
    t200 = *((unsigned int *)t193);
    *((unsigned int *)t187) = (t199 | t200);
    t201 = (t114 + 4);
    t202 = (t179 + 4);
    t203 = *((unsigned int *)t114);
    t204 = (~(t203));
    t205 = *((unsigned int *)t201);
    t206 = (~(t205));
    t207 = *((unsigned int *)t179);
    t208 = (~(t207));
    t209 = *((unsigned int *)t202);
    t210 = (~(t209));
    t211 = (t204 & t206);
    t212 = (t208 & t210);
    t213 = (~(t211));
    t214 = (~(t212));
    t215 = *((unsigned int *)t193);
    *((unsigned int *)t193) = (t215 & t213);
    t216 = *((unsigned int *)t193);
    *((unsigned int *)t193) = (t216 & t214);
    t217 = *((unsigned int *)t187);
    *((unsigned int *)t187) = (t217 & t213);
    t218 = *((unsigned int *)t187);
    *((unsigned int *)t187) = (t218 & t214);
    goto LAB46;

LAB47:    *((unsigned int *)t4) = 1;
    goto LAB50;

LAB49:    t225 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t225) = 1;
    goto LAB50;

LAB51:    t230 = ((char*)((ng1)));
    goto LAB52;

LAB53:    t235 = ((char*)((ng3)));
    goto LAB54;

LAB55:    xsi_vlog_unsigned_bit_combine(t3, 32, t230, 32, t235, 32);
    goto LAB59;

LAB57:    memcpy(t3, t230, 8);
    goto LAB59;

}

static void Cont_93_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t20[8];
    char t27[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;

LAB0:    t1 = (t0 + 6080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3288U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t5 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    memcpy(t27, t6, 8);

LAB10:    memset(t4, 0, 8);
    t55 = (t27 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t27);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t55) != 0)
        goto LAB20;

LAB21:    t62 = (t4 + 4);
    t63 = *((unsigned int *)t4);
    t64 = *((unsigned int *)t62);
    t65 = (t63 || t64);
    if (t65 > 0)
        goto LAB22;

LAB23:    t67 = *((unsigned int *)t4);
    t68 = (~(t67));
    t69 = *((unsigned int *)t62);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t62) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t4) > 0)
        goto LAB28;

LAB29:    memcpy(t3, t71, 8);

LAB30:    t72 = (t0 + 7448);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    memset(t76, 0, 8);
    t77 = 1U;
    t78 = t77;
    t79 = (t3 + 4);
    t80 = *((unsigned int *)t3);
    t77 = (t77 & t80);
    t81 = *((unsigned int *)t79);
    t78 = (t78 & t81);
    t82 = (t76 + 4);
    t83 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t83 | t77);
    t84 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t84 | t78);
    xsi_driver_vfirst_trans(t72, 0, 0);
    t85 = (t0 + 7192);
    *((int *)t85) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB6:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 3448U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t18 = (t19 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t18) != 0)
        goto LAB13;

LAB14:    t28 = *((unsigned int *)t6);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = (t6 + 4);
    t32 = (t20 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t20) = 1;
    goto LAB14;

LAB13:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB14;

LAB15:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t6 + 4);
    t42 = (t20 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (~(t43));
    t45 = *((unsigned int *)t6);
    t46 = (t45 & t44);
    t47 = *((unsigned int *)t42);
    t48 = (~(t47));
    t49 = *((unsigned int *)t20);
    t50 = (t49 & t48);
    t51 = (~(t46));
    t52 = (~(t50));
    t53 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t53 & t51);
    t54 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t54 & t52);
    goto LAB17;

LAB18:    *((unsigned int *)t4) = 1;
    goto LAB21;

LAB20:    t61 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB21;

LAB22:    t66 = ((char*)((ng1)));
    goto LAB23;

LAB24:    t71 = ((char*)((ng3)));
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t3, 32, t66, 32, t71, 32);
    goto LAB30;

LAB28:    memcpy(t3, t66, 8);
    goto LAB30;

}

static void Cont_95_5(char *t0)
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

LAB0:    t1 = (t0 + 6328U);
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

LAB20:    t117 = (t0 + 7512);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    t120 = (t119 + 56U);
    t121 = *((char **)t120);
    memcpy(t121, t3, 8);
    xsi_driver_vfirst_trans(t117, 0, 31);
    t122 = (t0 + 7208);
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

LAB12:    t33 = (t0 + 3848);
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

LAB29:    t71 = (t0 + 4008);
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

LAB46:    t109 = (t0 + 4168);
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

static void Cont_100_6(char *t0)
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

LAB0:    t1 = (t0 + 6576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7576);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 7224);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_102_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 6824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 7640);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 7240);
    *((int *)t8) = 1;

LAB1:    return;
}


extern void work_m_00000000001235736657_3975733304_init()
{
	static char *pe[] = {(void *)Initial_42_0,(void *)Always_47_1,(void *)Cont_91_2,(void *)Cont_92_3,(void *)Cont_93_4,(void *)Cont_95_5,(void *)Cont_100_6,(void *)Cont_102_7};
	xsi_register_didat("work_m_00000000001235736657_3975733304", "isim/mips.exe.sim/work/m_00000000001235736657_3975733304.didat");
	xsi_register_executes(pe);
}

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
static const char *ng0 = "D:/Uni/Term 7/Architecture Lab/CPU/RISC_Processor/mips_test_1.v";
static int ng1[] = {0, 0};



static void Initial_35_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
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
    unsigned int t22;
    char *t23;

LAB0:    t1 = (t0 + 2208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);

LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(36, ng0);

LAB6:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2016);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB7:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1288);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t6) == 0)
        goto LAB8;

LAB10:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;

LAB11:    t13 = (t3 + 4);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    *((unsigned int *)t3) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB13;

LAB12:    t21 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t0 + 1288);
    xsi_vlogvar_assign_value(t23, t3, 0, 0, 1);
    goto LAB5;

LAB8:    *((unsigned int *)t3) = 1;
    goto LAB11;

LAB13:    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t3) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB12;

LAB14:    goto LAB1;

}

static void Initial_42_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(42, ng0);

LAB2:    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1288);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}


extern void work_m_00000000001891001969_0362579596_init()
{
	static char *pe[] = {(void *)Initial_35_0,(void *)Initial_42_1};
	xsi_register_didat("work_m_00000000001891001969_0362579596", "isim/mips_test_1_isim_beh.exe.sim/work/m_00000000001891001969_0362579596.didat");
	xsi_register_executes(pe);
}

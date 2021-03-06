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

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/GitHub/VHDL_Modules/UART/UART_Library/FIFO.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_1919437128_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void uart_library_a_1963931772_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(158, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 9640);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(159, ng0);
    t3 = (t0 + 4552U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(160, ng0);
    t3 = (t0 + 1672U);
    t7 = *((char **)t3);
    t3 = (t0 + 2792U);
    t8 = *((char **)t3);
    t3 = (t0 + 15640U);
    t9 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t8, t3);
    t10 = (t9 - 3);
    t11 = (t10 * -1);
    t12 = (8U * t11);
    t13 = (0U + t12);
    t14 = (t0 + 9896);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t7, 8U);
    xsi_driver_first_trans_delta(t14, t13, 8U, 0LL);
    goto LAB6;

}

static void uart_library_a_1963931772_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(166, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t1 = (t0 + 15656U);
    t4 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t3, t1);
    t5 = (t4 - 3);
    t6 = (t5 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, t4);
    t7 = (8U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 9960);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 8U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 9656);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void uart_library_a_1963931772_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(168, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3752U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t6);
    t1 = (t0 + 10024);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_fast(t1);

LAB2:    t12 = (t0 + 9672);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void uart_library_a_1963931772_3212880686_p_3(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(173, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 9688);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(174, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(182, ng0);
    t1 = (t0 + 2952U);
    t3 = *((char **)t1);
    t1 = (t0 + 10088);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 2U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(183, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t1 = (t0 + 10152);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 2U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(184, ng0);
    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 10216);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(185, ng0);
    t1 = (t0 + 4232U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 10280);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(186, ng0);
    t1 = (t0 + 4872U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 10344);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(187, ng0);
    t1 = (t0 + 5192U);
    t3 = *((char **)t1);
    t1 = (t0 + 10408);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 2U);
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(175, ng0);
    t3 = xsi_get_transient_memory(2U);
    memset(t3, 0, 2U);
    t7 = t3;
    memset(t7, (unsigned char)2, 2U);
    t8 = (t0 + 10088);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 2U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(176, ng0);
    t1 = xsi_get_transient_memory(2U);
    memset(t1, 0, 2U);
    t3 = t1;
    memset(t3, (unsigned char)2, 2U);
    t4 = (t0 + 10152);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(177, ng0);
    t1 = (t0 + 10216);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(178, ng0);
    t1 = (t0 + 10280);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(179, ng0);
    t1 = (t0 + 10344);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(180, ng0);
    t1 = xsi_get_transient_memory(2U);
    memset(t1, 0, 2U);
    t3 = t1;
    memset(t3, (unsigned char)2, 2U);
    t4 = (t0 + 10408);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB6;

}

static void uart_library_a_1963931772_3212880686_p_4(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(193, ng0);

LAB3:    t2 = (t0 + 2792U);
    t3 = *((char **)t2);
    t2 = (t0 + 15640U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t1, t3, t2, 1);
    t5 = (t0 + 10472);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 2U);
    xsi_driver_first_trans_fast(t5);

LAB2:    t10 = (t0 + 9704);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void uart_library_a_1963931772_3212880686_p_5(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(194, ng0);

LAB3:    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t0 + 15656U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t1, t3, t2, 1);
    t5 = (t0 + 10536);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 2U);
    xsi_driver_first_trans_fast(t5);

LAB2:    t10 = (t0 + 9720);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void uart_library_a_1963931772_3212880686_p_6(char *t0)
{
    char t6[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(197, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t7 = ((IEEE_P_2592010699) + 4024);
    t1 = xsi_base_array_concat(t1, t6, t7, (char)99, t3, (char)99, t5, (char)101);
    t8 = (1U + 1U);
    t9 = (2U != t8);
    if (t9 == 1)
        goto LAB5;

LAB6:    t10 = (t0 + 10600);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 2U);
    xsi_driver_first_trans_fast(t10);

LAB2:    t15 = (t0 + 9736);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(2U, t8, 0);
    goto LAB6;

}

static void uart_library_a_1963931772_3212880686_p_7(char *t0)
{
    char t20[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    int t8;
    int t9;
    char *t10;
    int t11;
    char *t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;

LAB0:    xsi_set_current_line(202, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 10664);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 2U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(203, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 10728);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 2U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(204, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t1 = (t0 + 10792);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = t7;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(205, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t1 = (t0 + 10856);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = t7;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(206, ng0);
    t1 = (t0 + 10920);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(207, ng0);
    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    t1 = (t0 + 10984);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 2U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(209, ng0);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t1 = (t0 + 15789);
    t8 = xsi_mem_cmp(t1, t2, 2U);
    if (t8 == 1)
        goto LAB3;

LAB7:    t4 = (t0 + 15791);
    t9 = xsi_mem_cmp(t4, t2, 2U);
    if (t9 == 1)
        goto LAB4;

LAB8:    t6 = (t0 + 15793);
    t11 = xsi_mem_cmp(t6, t2, 2U);
    if (t11 == 1)
        goto LAB5;

LAB9:
LAB6:    xsi_set_current_line(231, ng0);
    t1 = (t0 + 10920);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(232, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 10664);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 2U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(233, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t1 = (t0 + 10728);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 2U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t1 = (t0 + 9752);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    goto LAB2;

LAB4:    xsi_set_current_line(212, ng0);
    t12 = (t0 + 3912U);
    t13 = *((char **)t12);
    t7 = *((unsigned char *)t13);
    t14 = (t7 != (unsigned char)3);
    if (t14 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB2;

LAB5:    xsi_set_current_line(221, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t14 = (t7 != (unsigned char)3);
    if (t14 != 0)
        goto LAB25;

LAB27:
LAB26:    goto LAB2;

LAB10:;
LAB11:    xsi_set_current_line(213, ng0);
    t12 = (t0 + 3592U);
    t15 = *((char **)t12);
    t12 = (t0 + 10728);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t15, 2U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(214, ng0);
    t1 = (t0 + 10792);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(215, ng0);
    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    t1 = (t0 + 15688U);
    t3 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t20, t2, t1, 1);
    t4 = (t20 + 12U);
    t21 = *((unsigned int *)t4);
    t22 = (1U * t21);
    t7 = (2U != t22);
    if (t7 == 1)
        goto LAB14;

LAB15:    t5 = (t0 + 10984);
    t6 = (t5 + 56U);
    t10 = *((char **)t6);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t3, 2U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(216, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t7 = 1;
    if (2U == 2U)
        goto LAB19;

LAB20:    t7 = 0;

LAB21:    if (t7 != 0)
        goto LAB16;

LAB18:
LAB17:    goto LAB12;

LAB14:    xsi_size_not_matching(2U, t22, 0);
    goto LAB15;

LAB16:    xsi_set_current_line(217, ng0);
    t5 = (t0 + 10856);
    t6 = (t5 + 56U);
    t10 = *((char **)t6);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast(t5);
    goto LAB17;

LAB19:    t21 = 0;

LAB22:    if (t21 < 2U)
        goto LAB23;
    else
        goto LAB21;

LAB23:    t1 = (t2 + t21);
    t4 = (t3 + t21);
    if (*((unsigned char *)t1) != *((unsigned char *)t4))
        goto LAB20;

LAB24:    t21 = (t21 + 1);
    goto LAB22;

LAB25:    xsi_set_current_line(222, ng0);
    t1 = (t0 + 3112U);
    t3 = *((char **)t1);
    t1 = (t0 + 10664);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t10 = *((char **)t6);
    memcpy(t10, t3, 2U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(223, ng0);
    t1 = (t0 + 10856);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(224, ng0);
    t1 = (t0 + 10920);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(225, ng0);
    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    t1 = (t0 + 15688U);
    t3 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t20, t2, t1, 1);
    t4 = (t20 + 12U);
    t21 = *((unsigned int *)t4);
    t22 = (1U * t21);
    t7 = (2U != t22);
    if (t7 == 1)
        goto LAB28;

LAB29:    t5 = (t0 + 10984);
    t6 = (t5 + 56U);
    t10 = *((char **)t6);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t3, 2U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(226, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t7 = 1;
    if (2U == 2U)
        goto LAB33;

LAB34:    t7 = 0;

LAB35:    if (t7 != 0)
        goto LAB30;

LAB32:
LAB31:    goto LAB26;

LAB28:    xsi_size_not_matching(2U, t22, 0);
    goto LAB29;

LAB30:    xsi_set_current_line(227, ng0);
    t5 = (t0 + 10792);
    t6 = (t5 + 56U);
    t10 = *((char **)t6);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast(t5);
    goto LAB31;

LAB33:    t21 = 0;

LAB36:    if (t21 < 2U)
        goto LAB37;
    else
        goto LAB35;

LAB37:    t1 = (t2 + t21);
    t4 = (t3 + t21);
    if (*((unsigned char *)t1) != *((unsigned char *)t4))
        goto LAB34;

LAB38:    t21 = (t21 + 1);
    goto LAB36;

}

static void uart_library_a_1963931772_3212880686_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(240, ng0);

LAB3:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11048);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 9768);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void uart_library_a_1963931772_3212880686_p_9(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(241, ng0);

LAB3:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11112);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 9784);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void uart_library_a_1963931772_3212880686_p_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(242, ng0);

LAB3:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    t1 = (t0 + 11176);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 2U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 9800);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void uart_library_a_1963931772_3212880686_p_11(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(243, ng0);

LAB3:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11240);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 9816);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void uart_library_a_1963931772_3212880686_init()
{
	static char *pe[] = {(void *)uart_library_a_1963931772_3212880686_p_0,(void *)uart_library_a_1963931772_3212880686_p_1,(void *)uart_library_a_1963931772_3212880686_p_2,(void *)uart_library_a_1963931772_3212880686_p_3,(void *)uart_library_a_1963931772_3212880686_p_4,(void *)uart_library_a_1963931772_3212880686_p_5,(void *)uart_library_a_1963931772_3212880686_p_6,(void *)uart_library_a_1963931772_3212880686_p_7,(void *)uart_library_a_1963931772_3212880686_p_8,(void *)uart_library_a_1963931772_3212880686_p_9,(void *)uart_library_a_1963931772_3212880686_p_10,(void *)uart_library_a_1963931772_3212880686_p_11};
	xsi_register_didat("uart_library_a_1963931772_3212880686", "isim/tbench_EEPROM_test_isim_beh.exe.sim/uart_library/a_1963931772_3212880686.didat");
	xsi_register_executes(pe);
}

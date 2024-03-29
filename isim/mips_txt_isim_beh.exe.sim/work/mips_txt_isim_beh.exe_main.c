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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002903844489_4195689644_init();
    work_m_00000000000826703038_3915667111_init();
    work_m_00000000002698775005_2510865608_init();
    work_m_00000000001290389714_2748599814_init();
    work_m_00000000001719925605_3756563685_init();
    work_m_00000000001956896609_3368684588_init();
    work_m_00000000001532803756_0510645833_init();
    work_m_00000000000646853861_2795948001_init();
    work_m_00000000003132616975_4140825114_init();
    work_m_00000000002155191593_3527808377_init();
    work_m_00000000004156649186_0992325708_init();
    work_m_00000000000589965032_3935768532_init();
    work_m_00000000002857546734_3383896982_init();
    work_m_00000000000874832579_0833183191_init();
    work_m_00000000003405669969_0805627395_init();
    work_m_00000000003784510532_4127636709_init();
    work_m_00000000001180274125_3092946469_init();
    work_m_00000000001865495833_0981899902_init();
    work_m_00000000003478682563_2319802268_init();
    work_m_00000000002451667142_1739518194_init();
    work_m_00000000002273863142_4190013900_init();
    work_m_00000000001592792273_3761551235_init();
    work_m_00000000001126651393_2725559894_init();
    work_m_00000000000744312318_1618395014_init();
    work_m_00000000000361986927_0972529920_init();
    work_m_00000000004177186775_1979470459_init();
    work_m_00000000002333530735_3771887874_init();
    work_m_00000000000121323963_3027548060_init();
    work_m_00000000000162292562_3877310806_init();
    work_m_00000000001292392995_1131260308_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001292392995_1131260308");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}

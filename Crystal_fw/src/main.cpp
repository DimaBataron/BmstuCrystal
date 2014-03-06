/*
 * main.cpp
 *
 *  Created on: 20 ����. 2014 �.
 *      Author: g.kruglov
 */

#include "ch.h"
#include "kl_lib_f40x.h"
#include "adc_ads8320.h"

int main(void) {
    Clk.UpdateFreqValues();
    // Init OS
    halInit();
    chSysInit();

    PinSetupAlterFunc(GPIOC, 6, omPushPull, pudNone, AF2);
    rccEnableTIM3(FALSE);
    TIM3->CR1 = TIM_CR1_CEN;
    TIM3->CCMR1 = 0b110<<4;
    TIM3->CCER = TIM_CCER_CC1E;
    TIM3->ARR = 100;
    TIM3->CCR1 = 4;

    PinSetupOut(GPIOC, 7, omPushPull, pudNone);

    Adc.Init();

    while(true) {
        chThdSleepMilliseconds(999);
    }
}


/*
 * leds.cpp
 *
 *  Created on: 27 ����. 2015 �.
 *      Author: Kreyl
 */

#include "leds.h"

PinOutput_t Led[LED_CNT] = {
        {LED1_GPIO, LED1_PIN, omPushPull},
        {LED2_GPIO, LED2_PIN, omPushPull},
        {LED3_GPIO, LED3_PIN, omPushPull},
};

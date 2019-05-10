/*
 * Sequences.h
 *
 *  Created on: 09 ���. 2015 �.
 *      Author: Kreyl
 */

#pragma once

#include "ChunkTypes.h"

const LedSmoothChunk_t lsqDataExch[] = {
        {csSetup, 0, 255},
        {csWait, 99},
        {csSetup, 0, 0},
        {csEnd},
};

const LedRGBChunk_t lsqUSBCmd[] = {
        {csSetup, 0, clBlue},
        {csWait, 135},
        {csSetup, 0, {0,9,0}},
        {csEnd}
};

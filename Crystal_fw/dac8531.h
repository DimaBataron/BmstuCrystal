/*
 * dac8531.h
 *
 *  Created on: 12 ����� 2014 �.
 *      Author: Roman Polovincev
 */

#ifndef DAC8531_H_
#define DAC8531_H_

#include "kl_lib.h"
#include "ch.h"
#include "board.h"

/*
#define DAC_DMA_MODE    STM32_DMA_CR_CHSEL(ADC_DMA_CHNL) | \
                        DMA_PRIORITY_MEDIUM | \
                        STM32_DMA_CR_MSIZE_BYTE | \
                        STM32_DMA_CR_PSIZE_BYTE | \
                        STM32_DMA_CR_MINC | \
                        STM32_DMA_CR_DIR_P2M | \
                        STM32_DMA_CR_TCIE
*/
class Dac_t {
private:
    Spi_t ISpi{DAC_SPI};
    void CskHi() { PinSetHi(DAC_CS); }
    void CskLo() { PinSetLo(DAC_CS); }
public:
    void Init();
    void StartDMA_DAC();
    void IrqDmaHandler_DAC();
    void Set(uint16_t AData);
};

extern Dac_t Dac;

#endif /* DAC8531_H_ */

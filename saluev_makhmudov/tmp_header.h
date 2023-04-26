#ifndef __MCU_CONFIG_H
#define	__MCU_CONFIG_H

#include "stm32f10x.h"

/* Параметры АЦП */
//Величина опорного напряжения
#define		V_REF		3.3
//Полная шкала АЦП
#define		ADC_FS		0xFFF

/* Управление светодиодами */
#define	LED1_ON()	GPIOD->BSRR |= GPIO_BSRR_BS7
#define	LED1_OFF()	GPIOD->BSRR |= GPIO_BSRR_BR7

#define	LED2_ON()	GPIOD->BSRR |= GPIO_BSRR_BS13
#define	LED2_OFF()	GPIOD->BSRR |= GPIO_BSRR_BR13

#define	LED3_ON()	GPIOD->BSRR |= GPIO_BSRR_BS3
#define	LED3_OFF()	GPIOD->BSRR |= GPIO_BSRR_BR3

#define	LED4_ON()	GPIOD->BSRR |= GPIO_BSRR_BS4
#define	LED4_OFF()	GPIOD->BSRR |= GPIO_BSRR_BR4

/* Прототипы функций */
void initPorts(void);
void initUART2(void);
void initUART2_DMA(void);
void initADC1(void);
void initADC1_DMA(void);
void initTIM3(void);

void Delay(uint32_t takts);

#endif

/*
 * File:        main.c
 * Author:      Tarvs' Hobbytronics (mttarvina)
 * Contact:     mttarvina@gmail.com
 *
 */

#ifndef SYSTEM_DEMO_H
#define	SYSTEM_DEMO_H


#include <stdbool.h>

#ifndef _XTAL_FREQ
#define _XTAL_FREQ  50000000UL
#endif

#define CLOCK_SystemFrequencyGet()        (50000000UL)
#define CLOCK_PeripheralFrequencyGet()    (CLOCK_SystemFrequencyGet() / 2)
#define CLOCK_InstructionFrequencyGet()   (CLOCK_SystemFrequencyGet() / 2)


/**
 * @Description

 * @Param

 * @Returns

 */
void SYS_INIT (void);


/**
 * @Description

 * @Param

 * @Returns

 */
void SYSCLOCK_Init (void);


/**
 * @Description

 * @Param

 * @Returns

 */
void GPIO_Init (void);

#endif	/* SYSTEM_DEMO_H */

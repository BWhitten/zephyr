/*
 * Copyright (c) 2017 Christian Taedcke
 * SPDX-License-Identifier: Apache-2.0
 */

/** @file
 * @brief Silabs EFM32WG MCU pin definitions.
 *
 * This file contains pin configuration data required by different MCU
 * modules to correctly configure GPIO controller.
 */

#ifndef _SILABS_EFM32WG_SOC_PINMAP_H_
#define _SILABS_EFM32WG_SOC_PINMAP_H_

#include <soc.h>
#include <em_gpio.h>

#ifdef CONFIG_SOC_PART_NUMBER_EFM32WG990F256
#ifdef CONFIG_UART_GECKO_0
#if (CONFIG_UART_GECKO_0_LOCATION == 0)
#define PIN_UART0_TXD {gpioPortF, 6, gpioModePushPull, 1}
#define PIN_UART0_RXD {gpioPortF, 7, gpioModeInput, 1}
#elif (CONFIG_UART_GECKO_0_LOCATION == 1)
#define PIN_UART0_TXD {gpioPortE, 0, gpioModePushPull, 1}
#define PIN_UART0_RXD {gpioPortE, 1, gpioModeInput, 1}
#elif (CONFIG_UART_GECKO_0_LOCATION == 2)
#define PIN_UART0_TXD {gpioPortA, 3, gpioModePushPull, 1}
#define PIN_UART0_RXD {gpioPortA, 4, gpioModeInput, 1}
#else
#error ("Serial Driver for Gecko MCUs not implemented for this location index")
#endif
#endif /* CONFIG_UART_GECKO_0 */

#ifdef CONFIG_UART_GECKO_1
#if (CONFIG_UART_GECKO_1_LOCATION == 0)
#error ("Serial Driver for Gecko MCUs not implemented for this location index")
#elif (CONFIG_UART_GECKO_1_LOCATION == 1)
#define PIN_UART1_TXD {gpioPortF, 10, gpioModePushPull, 1}
#define PIN_UART1_RXD {gpioPortF, 11, gpioModeInput, 1}
#elif (CONFIG_UART_GECKO_1_LOCATION == 2)
#define PIN_UART1_TXD {gpioPortB, 9, gpioModePushPull, 1}
#define PIN_UART1_RXD {gpioPortB, 10, gpioModeInput, 1}
#elif (CONFIG_UART_GECKO_1_LOCATION == 3)
#define PIN_UART1_TXD {gpioPortE, 2, gpioModePushPull, 1}
#define PIN_UART1_RXD {gpioPortE, 3, gpioModeInput, 1}
#else
#error ("Serial Driver for Gecko MCUs not implemented for this location index")
#endif
#endif /* CONFIG_UART_GECKO_0 */
#else
#error ("Pinmap not available for this for Wonder Gecko MCU")
#endif /* SOC_PART_NUMBER_EFM32WG990F256*/

#endif /* _SILABS_EFM32WG_SOC_PINMAP_H_ */

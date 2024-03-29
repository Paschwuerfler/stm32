/*
 * main.h
 *
 *  Created on: 13.06.2017
 *      Author: ppasch
 */

#ifndef MAIN_H_
#define MAIN_H_

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/

#include "stm32f3xx.h"
#include "stm32f3348_discovery.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/

#define SER		GPIO_PIN_0
#define RCLK	GPIO_PIN_1
#define SRCLK	GPIO_PIN_2
#define OE      GPIO_PIN_3

#define DELAY   0

#define SIZE_LINE_OF_MATRIX	4

/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

void Initializegpio();
void Multiplex(/*uint8_t*/ unsigned char value);

#ifdef __cplusplus
}
#endif

#endif /* MAIN_H_ */

/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f3xx.h"
#include "stm32f3348_discovery.h"
			

// https://visualgdb.com/tutorials/arm/stm32/timers/hal/
void InitializeLED()
{
	HAL_Init();
    // __GPIOD_CLK_ENABLE();
	// __HAL_RCC_GPIOB_CLK_ENABLE();
    __HAL_RCC_GPIOA_CLK_ENABLE();
    __HAL_RCC_GPIOB_CLK_ENABLE();

    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.Pin = LED4;
    GPIO_InitStructure.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStructure.Speed = GPIO_SPEED_HIGH;
    GPIO_InitStructure.Pull = GPIO_NOPULL;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStructure);

    GPIO_InitTypeDef GPIO_InitStructure2;
    GPIO_InitStructure2.Pin = LED6;
    GPIO_InitStructure2.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStructure2.Speed = GPIO_SPEED_HIGH;
    GPIO_InitStructure2.Pull = GPIO_NOPULL;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStructure2);
}

int main(void)
{
	InitializeLED();
	for(;;) {
		// http://www.openstm32.org/tiki-view_forum_thread.php?forumId=7&comments_parentId=1443&highlight=l476
		HAL_GPIO_TogglePin(GPIOA, LED4);
		HAL_Delay(100);
		HAL_GPIO_TogglePin(GPIOB, LED6);
		HAL_Delay(200);
	}
	HAL_DeInit();
}
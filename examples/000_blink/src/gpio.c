#include "gpio.h"

void gpio_init()
{
	GPIOA->MODER &= ~GPIO_MODER_MODE5;			// PA5 clear mode settings
	GPIOA->MODER |= GPIO_MODER_MODE5_0; 		// PA5 set output mode

	GPIOA->OTYPER &= ~GPIO_OTYPER_ODR_5; 		// PA5 set Output push-pull (reset state)
	GPIOA->PUPDR |= GPIO_PUPDR_PUPD5_0; 		// PA5 set pull-up
	GPIOA->OSPEEDR |= GPIO_OSPEEDER_OSPEEDR5_1; // PA5 set High speed
}

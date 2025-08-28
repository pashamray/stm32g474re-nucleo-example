#include "main.h"
#include "rcc.h"
#include "gpio.h"

int main(void)
{
	rcc_init();
	gpio_init();

	GPIOA->ODR |= GPIO_ODR_OD5;

    /* Loop forever */
	while(1) {
		GPIOA->ODR ^= GPIO_ODR_OD5;

		for(unsigned int i = 0; i < 615000; i++)
		{
		}
	}
}

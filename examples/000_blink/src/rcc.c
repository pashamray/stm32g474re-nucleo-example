#include "rcc.h"

void rcc_init()
{
	RCC->CR |= RCC_CR_HSEON; // HSE enable
	while(!(RCC->CR & RCC_CR_HSERDY)); // wait HSE ready

	RCC->PLLCFGR |= RCC_PLLCFGR_PLLSRC; // set PLL source HSE
	RCC->CR |= RCC_CR_PLLON; // PLL enable
	while(!(RCC->CR & RCC_CR_PLLRDY)); // wait PLL ready

	RCC->AHB2ENR |= RCC_AHB2ENR_GPIOAEN;
}

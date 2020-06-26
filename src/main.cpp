#define HSE_VALUE 8000000U
#include "stm32f4xx_ll_rcc.h"

void ClockSetup()
{  
  // enable HSE and wait until it's ready
  LL_RCC_HSE_EnableBypass();
  LL_RCC_HSE_Enable();
  while(not LL_RCC_HSE_IsReady());
  
  // configure PLL
  LL_RCC_PLL_ConfigDomain_SYS(LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 168, LL_RCC_PLLP_DIV_2);
  
  // enable PLL and wait until it's ready
  LL_RCC_PLL_Enable();
  while(not LL_RCC_PLL_IsReady());
  
  // enable PLL as SYSCLK source and wait until it's done
  LL_RCC_SetSysClkSource(LL_RCC_SYS_CLKSOURCE_PLL);
  while(LL_RCC_GetSysClkSource() != LL_RCC_SYS_CLKSOURCE_PLL);
}

void Main()
{
  ClockSetup();

  while (1);
}

#include "stm32f4xx_ll_rcc.h"
#include "stm32f4xx_ll_pwr.h"
#include "stm32f4xx_ll_bus.h"
#include "stm32f4xx_ll_system.h"

void ClockSetup()
{  
  // reset to defaults
  LL_RCC_DeInit();
  
  // enable HSE and wait until it's ready
  LL_RCC_HSE_EnableBypass();
  LL_RCC_HSE_Enable();
  while(not LL_RCC_HSE_IsReady());
  
  // set flash latency for higher clock speed
  LL_FLASH_SetLatency(LL_FLASH_LATENCY_5);
  
  // enable PWR clock
  LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_PWR);
  
  // set power scale to 1
  LL_PWR_SetRegulVoltageScaling(LL_PWR_REGU_VOLTAGE_SCALE1);
  
  // disable PLL before setting overdrive
  LL_RCC_PLL_Disable();
  
  // activate overdrive
  LL_PWR_EnableOverDriveMode();
  while(not LL_PWR_IsActiveFlag_OD())
  
  // configure PLL
  LL_RCC_PLL_ConfigDomain_SYS(LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 168, LL_RCC_PLLP_DIV_2);
  LL_RCC_PLL_Enable();
  while(not LL_RCC_PLL_IsReady());
  
  // configure APB
  LL_RCC_SetAHBPrescaler(LL_RCC_SYSCLK_DIV_1);
	LL_RCC_SetAPB1Prescaler(LL_RCC_APB1_DIV_4);
	LL_RCC_SetAPB2Prescaler(LL_RCC_APB2_DIV_2);
  
  // enable PLL as SYSCLK source and wait until it's done
  LL_RCC_SetSysClkSource(LL_RCC_SYS_CLKSOURCE_PLL);
  while(LL_RCC_GetSysClkSource() != LL_RCC_SYS_CLKSOURCE_STATUS_PLL);
  
  SystemCoreClockUpdate();
}

void Main()
{
  ClockSetup();
  
  while (1);
}

static constexpr int NumVectors = 240;

extern "C" void Reset_Handler();
extern "C" void UnhandledException() { while (1); }

#define ALIAS_UNHANDLED_EX __attribute__((weak, alias("UnhandledException")));

/******  Cortex-M4 Processor Exceptions */
void Exception_NonMaskableInt() ALIAS_UNHANDLED_EX
void Exception_HardFault() ALIAS_UNHANDLED_EX
void Exception_MemoryManagement() ALIAS_UNHANDLED_EX
void Exception_BusFault() ALIAS_UNHANDLED_EX
void Exception_UsageFault() ALIAS_UNHANDLED_EX
void Exception_SVCall() ALIAS_UNHANDLED_EX
void Exception_DebugMonitor() ALIAS_UNHANDLED_EX
void Exception_PendSV() ALIAS_UNHANDLED_EX
void Exception_SysTick() ALIAS_UNHANDLED_EX

/******  STM32 specific Interrupt Numbers */
void Interrupt_WWDG() ALIAS_UNHANDLED_EX
void Interrupt_PVD() ALIAS_UNHANDLED_EX
void Interrupt_TAMP_STAMP() ALIAS_UNHANDLED_EX
void Interrupt_RTC_WKUP() ALIAS_UNHANDLED_EX
void Interrupt_FLASH() ALIAS_UNHANDLED_EX
void Interrupt_RCC() ALIAS_UNHANDLED_EX
void Interrupt_EXTI0() ALIAS_UNHANDLED_EX
void Interrupt_EXTI1() ALIAS_UNHANDLED_EX
void Interrupt_EXTI2() ALIAS_UNHANDLED_EX
void Interrupt_EXTI3() ALIAS_UNHANDLED_EX
void Interrupt_EXTI4() ALIAS_UNHANDLED_EX
void Interrupt_DMA1_Stream0() ALIAS_UNHANDLED_EX
void Interrupt_DMA1_Stream1() ALIAS_UNHANDLED_EX
void Interrupt_DMA1_Stream2() ALIAS_UNHANDLED_EX
void Interrupt_DMA1_Stream3() ALIAS_UNHANDLED_EX
void Interrupt_DMA1_Stream4() ALIAS_UNHANDLED_EX
void Interrupt_DMA1_Stream5() ALIAS_UNHANDLED_EX
void Interrupt_DMA1_Stream6() ALIAS_UNHANDLED_EX
void Interrupt_ADC() ALIAS_UNHANDLED_EX
void Interrupt_CAN1_TX() ALIAS_UNHANDLED_EX
void Interrupt_CAN1_RX0() ALIAS_UNHANDLED_EX
void Interrupt_CAN1_RX1() ALIAS_UNHANDLED_EX
void Interrupt_CAN1_SCE() ALIAS_UNHANDLED_EX
void Interrupt_EXTI9_5() ALIAS_UNHANDLED_EX
void Interrupt_TIM1_BRK_TIM9() ALIAS_UNHANDLED_EX
void Interrupt_TIM1_UP_TIM10() ALIAS_UNHANDLED_EX
void Interrupt_TIM1_TRG_COM_TIM11() ALIAS_UNHANDLED_EX
void Interrupt_TIM1_CC() ALIAS_UNHANDLED_EX
void Interrupt_TIM2() ALIAS_UNHANDLED_EX
void Interrupt_TIM3() ALIAS_UNHANDLED_EX
void Interrupt_TIM4() ALIAS_UNHANDLED_EX
void Interrupt_I2C1_EV() ALIAS_UNHANDLED_EX
void Interrupt_I2C1_ER() ALIAS_UNHANDLED_EX
void Interrupt_I2C2_EV() ALIAS_UNHANDLED_EX
void Interrupt_I2C2_ER() ALIAS_UNHANDLED_EX
void Interrupt_SPI1() ALIAS_UNHANDLED_EX
void Interrupt_SPI2() ALIAS_UNHANDLED_EX
void Interrupt_USART1() ALIAS_UNHANDLED_EX
void Interrupt_USART2() ALIAS_UNHANDLED_EX
void Interrupt_USART3() ALIAS_UNHANDLED_EX
void Interrupt_EXTI15_10() ALIAS_UNHANDLED_EX
void Interrupt_RTC_Alarm() ALIAS_UNHANDLED_EX
void Interrupt_OTG_FS_WKUP() ALIAS_UNHANDLED_EX
void Interrupt_TIM8_BRK_TIM12() ALIAS_UNHANDLED_EX
void Interrupt_TIM8_UP_TIM13() ALIAS_UNHANDLED_EX
void Interrupt_TIM8_TRG_COM_TIM14() ALIAS_UNHANDLED_EX
void Interrupt_TIM8_CC() ALIAS_UNHANDLED_EX
void Interrupt_DMA1_Stream7() ALIAS_UNHANDLED_EX
void Interrupt_FMC() ALIAS_UNHANDLED_EX
void Interrupt_SDIO() ALIAS_UNHANDLED_EX
void Interrupt_TIM5() ALIAS_UNHANDLED_EX
void Interrupt_SPI3() ALIAS_UNHANDLED_EX
void Interrupt_UART4() ALIAS_UNHANDLED_EX
void Interrupt_UART5() ALIAS_UNHANDLED_EX
void Interrupt_TIM6_DAC() ALIAS_UNHANDLED_EX
void Interrupt_TIM7() ALIAS_UNHANDLED_EX
void Interrupt_DMA2_Stream0() ALIAS_UNHANDLED_EX
void Interrupt_DMA2_Stream1() ALIAS_UNHANDLED_EX
void Interrupt_DMA2_Stream2() ALIAS_UNHANDLED_EX
void Interrupt_DMA2_Stream3() ALIAS_UNHANDLED_EX
void Interrupt_DMA2_Stream4() ALIAS_UNHANDLED_EX
void Interrupt_ETH() ALIAS_UNHANDLED_EX
void Interrupt_ETH_WKUP() ALIAS_UNHANDLED_EX
void Interrupt_CAN2_TX() ALIAS_UNHANDLED_EX
void Interrupt_CAN2_RX0() ALIAS_UNHANDLED_EX
void Interrupt_CAN2_RX1() ALIAS_UNHANDLED_EX
void Interrupt_CAN2_SCE() ALIAS_UNHANDLED_EX
void Interrupt_OTG_FS() ALIAS_UNHANDLED_EX
void Interrupt_DMA2_Stream5() ALIAS_UNHANDLED_EX
void Interrupt_DMA2_Stream6() ALIAS_UNHANDLED_EX
void Interrupt_DMA2_Stream7() ALIAS_UNHANDLED_EX
void Interrupt_USART6() ALIAS_UNHANDLED_EX
void Interrupt_I2C3_EV() ALIAS_UNHANDLED_EX
void Interrupt_I2C3_ER() ALIAS_UNHANDLED_EX
void Interrupt_OTG_HS_EP1_OUT() ALIAS_UNHANDLED_EX
void Interrupt_OTG_HS_EP1_IN() ALIAS_UNHANDLED_EX
void Interrupt_OTG_HS_WKUP() ALIAS_UNHANDLED_EX
void Interrupt_OTG_HS() ALIAS_UNHANDLED_EX
void Interrupt_DCMI() ALIAS_UNHANDLED_EX
void Interrupt_HASH_RNG() ALIAS_UNHANDLED_EX
void Interrupt_FPU() ALIAS_UNHANDLED_EX
void Interrupt_UART7() ALIAS_UNHANDLED_EX
void Interrupt_UART8() ALIAS_UNHANDLED_EX
void Interrupt_SPI4() ALIAS_UNHANDLED_EX
void Interrupt_SPI5() ALIAS_UNHANDLED_EX
void Interrupt_SPI6() ALIAS_UNHANDLED_EX
void Interrupt_SAI1() ALIAS_UNHANDLED_EX
void Interrupt_LTDC() ALIAS_UNHANDLED_EX
void Interrupt_LTDC_ER() ALIAS_UNHANDLED_EX
void Interrupt_DMA2D() ALIAS_UNHANDLED_EX

/* CortexVectorTable */
typedef void (*ExceptionHandlerT)();

struct CortexVectorTable
{
  unsigned int* MainStackPointer;
  ExceptionHandlerT Reset;
  ExceptionHandlerT NonMaskableInt;
  ExceptionHandlerT HardFault;
  ExceptionHandlerT MemoryManagement;
  ExceptionHandlerT BusFault;
  ExceptionHandlerT UsageFault;
  ExceptionHandlerT Reserved0;
  ExceptionHandlerT Reserved1;
  ExceptionHandlerT Reserved2;
  ExceptionHandlerT Reserved3;
  ExceptionHandlerT SVCall;
  ExceptionHandlerT ReservedDebug;
  ExceptionHandlerT Reserved4;
  ExceptionHandlerT PendSV;
  ExceptionHandlerT SysTick;
  ExceptionHandlerT Interrupts[NumVectors];
};

extern unsigned int _stack;

CortexVectorTable _vector_table __attribute__((section(".isr_vector"))) =
{
  &_stack,
  Reset_Handler,              // Reset exception
  Exception_NonMaskableInt,   // NMI exception
  Exception_HardFault,        // Hardfault exception
  Exception_MemoryManagement, // Memory management exception
  Exception_BusFault,         // Bus fault exception
  Exception_UsageFault,       // Usage fault exception
  UnhandledException,         // reserved
  UnhandledException,         // reserved
  UnhandledException,         // reserved
  UnhandledException,         // reserved
  Exception_SVCall,           // SVC handler
  Exception_DebugMonitor,     // Debug monitor
  UnhandledException,         // reserved
  Exception_PendSV,           // PendSV
  Exception_SysTick,          // SysTick
  // Interrupts
  {
    Interrupt_WWDG, // Window WatchDog Interrupt
    Interrupt_PVD, // PVD through EXTI Line detection Interrupt
    Interrupt_TAMP_STAMP, // Tamper and TimeStamp interrupts through the EXTI line
    Interrupt_RTC_WKUP, // RTC Wakeup interrupt through the EXTI line
    Interrupt_FLASH, // FLASH global Interrupt
    Interrupt_RCC, // RCC global Interrupt
    Interrupt_EXTI0, // EXTI Line0 Interrupt
    Interrupt_EXTI1, // EXTI Line1 Interrupt
    Interrupt_EXTI2, // EXTI Line2 Interrupt
    Interrupt_EXTI3, // EXTI Line3 Interrupt
    Interrupt_EXTI4, // EXTI Line4 Interrupt
    Interrupt_DMA1_Stream0, // DMA1 Stream 0 global Interrupt
    Interrupt_DMA1_Stream1, // DMA1 Stream 1 global Interrupt
    Interrupt_DMA1_Stream2, // DMA1 Stream 2 global Interrupt
    Interrupt_DMA1_Stream3, // DMA1 Stream 3 global Interrupt
    Interrupt_DMA1_Stream4, // DMA1 Stream 4 global Interrupt
    Interrupt_DMA1_Stream5, // DMA1 Stream 5 global Interrupt
    Interrupt_DMA1_Stream6, // DMA1 Stream 6 global Interrupt
    Interrupt_ADC, // ADC1, ADC2 and ADC3 global Interrupts
    Interrupt_CAN1_TX, // CAN1 TX Interrupt
    Interrupt_CAN1_RX0, // CAN1 RX0 Interrupt
    Interrupt_CAN1_RX1, // CAN1 RX1 Interrupt
    Interrupt_CAN1_SCE, // CAN1 SCE Interrupt
    Interrupt_EXTI9_5, // External Line[9:5] Interrupts
    Interrupt_TIM1_BRK_TIM9, // TIM1 Break interrupt and TIM9 global interrupt
    Interrupt_TIM1_UP_TIM10, // TIM1 Update Interrupt and TIM10 global interrupt
    Interrupt_TIM1_TRG_COM_TIM11, // TIM1 Trigger and Commutation Interrupt and TIM11 global interrupt
    Interrupt_TIM1_CC, // TIM1 Capture Compare Interrupt
    Interrupt_TIM2, // TIM2 global Interrupt
    Interrupt_TIM3, // TIM3 global Interrupt
    Interrupt_TIM4, // TIM4 global Interrupt
    Interrupt_I2C1_EV, // I2C1 Event Interrupt
    Interrupt_I2C1_ER, // I2C1 Error Interrupt
    Interrupt_I2C2_EV, // I2C2 Event Interrupt
    Interrupt_I2C2_ER, // I2C2 Error Interrupt
    Interrupt_SPI1, // SPI1 global Interrupt
    Interrupt_SPI2, // SPI2 global Interrupt
    Interrupt_USART1, // USART1 global Interrupt
    Interrupt_USART2, // USART2 global Interrupt
    Interrupt_USART3, // USART3 global Interrupt
    Interrupt_EXTI15_10, // External Line[15:10] Interrupts
    Interrupt_RTC_Alarm, // RTC Alarm (A and B) through EXTI Line Interrupt
    Interrupt_OTG_FS_WKUP, // USB OTG FS Wakeup through EXTI line interrupt
    Interrupt_TIM8_BRK_TIM12, // TIM8 Break Interrupt and TIM12 global interrupt
    Interrupt_TIM8_UP_TIM13, // TIM8 Update Interrupt and TIM13 global interrupt
    Interrupt_TIM8_TRG_COM_TIM14, // TIM8 Trigger and Commutation Interrupt and TIM14 global interrupt
    Interrupt_TIM8_CC, // TIM8 Capture Compare global interrupt
    Interrupt_DMA1_Stream7, // DMA1 Stream7 Interrupt
    Interrupt_FMC, // FMC global Interrupt
    Interrupt_SDIO, // SDIO global Interrupt
    Interrupt_TIM5, // TIM5 global Interrupt
    Interrupt_SPI3, // SPI3 global Interrupt
    Interrupt_UART4, // UART4 global Interrupt
    Interrupt_UART5, // UART5 global Interrupt
    Interrupt_TIM6_DAC, // TIM6 global and DAC1&2 underrun error  interrupts
    Interrupt_TIM7, // TIM7 global interrupt
    Interrupt_DMA2_Stream0, // DMA2 Stream 0 global Interrupt
    Interrupt_DMA2_Stream1, // DMA2 Stream 1 global Interrupt
    Interrupt_DMA2_Stream2, // DMA2 Stream 2 global Interrupt
    Interrupt_DMA2_Stream3, // DMA2 Stream 3 global Interrupt
    Interrupt_DMA2_Stream4, // DMA2 Stream 4 global Interrupt
    Interrupt_ETH, // Ethernet global Interrupt
    Interrupt_ETH_WKUP, // Ethernet Wakeup through EXTI line Interrupt
    Interrupt_CAN2_TX, // CAN2 TX Interrupt
    Interrupt_CAN2_RX0, // CAN2 RX0 Interrupt
    Interrupt_CAN2_RX1, // CAN2 RX1 Interrupt
    Interrupt_CAN2_SCE, // CAN2 SCE Interrupt
    Interrupt_OTG_FS, // USB OTG FS global Interrupt
    Interrupt_DMA2_Stream5, // DMA2 Stream 5 global interrupt
    Interrupt_DMA2_Stream6, // DMA2 Stream 6 global interrupt
    Interrupt_DMA2_Stream7, // DMA2 Stream 7 global interrupt
    Interrupt_USART6, // USART6 global interrupt
    Interrupt_I2C3_EV, // I2C3 event interrupt
    Interrupt_I2C3_ER, // I2C3 error interrupt
    Interrupt_OTG_HS_EP1_OUT, // USB OTG HS End Point 1 Out global interrupt
    Interrupt_OTG_HS_EP1_IN, // USB OTG HS End Point 1 In global interrupt
    Interrupt_OTG_HS_WKUP, // USB OTG HS Wakeup through EXTI interrupt
    Interrupt_OTG_HS, // USB OTG HS global interrupt
    Interrupt_DCMI, // DCMI global interrupt
    UnhandledException,
    Interrupt_HASH_RNG, // Hash and Rng global interrupt
    Interrupt_FPU, // FPU global interrupt
    Interrupt_UART7, // UART7 global interrupt
    Interrupt_UART8, // UART8 global interrupt
    Interrupt_SPI4, // SPI4 global Interrupt
    Interrupt_SPI5, // SPI5 global Interrupt
    Interrupt_SPI6, // SPI6 global Interrupt
    Interrupt_SAI1, // SAI1 global Interrupt
    Interrupt_LTDC, // LTDC global Interrupt
    Interrupt_LTDC_ER, // LTDC Error global Interrupt
    Interrupt_DMA2D, // DMA2D global Interrupt
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException,
    UnhandledException
  }
};

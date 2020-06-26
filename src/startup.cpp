static constexpr int NumVectors = 240;

extern "C" void Reset_Handler();
void Main();


#include "exception.h"

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

extern char _bss_start, _bss_end;
extern char _data_start, _data_end;
extern char _code_end;
void Reset_Handler()
{
  // copy data from flash to ram
  const char* from = &_code_end;
  for (char* p = &_data_start; p < &_data_end; ++p)
    *p = *from++;

  // set the bss section to zero
  for (char* p = &_bss_start; p < &_bss_end; ++p)
    *p = 0;
  
  // call program entry
  Main();
  
  while (1);
}

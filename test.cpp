
static constexpr int NumVectors = 240;

/* Exception handlers */
extern "C" void Reset_Handler();
void Exception_NonMaskableInt();
void Exception_HardFault();
void Exception_MemoryManagement();
void Exception_BusFault();
void Exception_UsageFault();
void Exception_SVCall();
void Exception_DebugMonitor();
void Exception_PendSV();
void Exception_SysTick();
void UnhandledException();

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

/* Implement exception handlers */
void Exception_NonMaskableInt() { while(1); }
void Exception_HardFault() { while(1); }
void Exception_MemoryManagement() { while(1); }
void Exception_BusFault() { while(1); }
void Exception_UsageFault() { while(1); }
void Exception_SVCall() { while(1); }
void Exception_DebugMonitor() { while(1); }
void Exception_PendSV() { while(1); }
void Exception_SysTick() { while(1); }
void UnhandledException() { while(1); }

void Main();

extern char _bss_start, _bss_end;
void Reset_Handler()
{
  int a;
  
  // set the clock to be faster
  
  // copy data from flash to ram
  
  
  // set the bss section to zero
  for (char* p = &_bss_start; p < &_bss_end; ++p)
    *p = 0;
  
  // call constructors
  
  // call program entry
  Main();
  
  // call destructors? what for...
}

int initializedVar = 15;
int bssVar[15];

/* Program entry point */
void Main()
{
  while(1);
}

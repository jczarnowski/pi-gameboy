int main();

__attribute__((weak)) void SystemSetup();

extern char _bss_start, _bss_end;
extern char _data_start, _data_end;
extern char _code_end;
extern "C" void Reset_Handler()
{
  // copy data from flash to ram
  const char* from = &_code_end;
  for (char* p = &_data_start; p < &_data_end; ++p)
    *p = *from++;

  // set the bss section to zero
  for (char* p = &_bss_start; p < &_bss_end; ++p)
    *p = 0;
  
  // e.g. to setup clock before calling constructors
  SystemSetup();
  
  // call constructors
  // TODO
  
  // call program entry
  main();
  
  // should not reach
  while(1);
}

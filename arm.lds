MEMORY
{
  flash (rx)  : ORIGIN = 0x08000000, LENGTH = 2M
  ram (rwx)   : ORIGIN = 0x20000000, LENGTH = 192K
}

ENTRY(Reset_Handler)

SECTIONS
{
  /* Vector table */
  .isr_vector :
  {
    . = ALIGN(4);
    KEEP(*(.isr_vector))
    . = ALIGN(4);
  } > flash
  
  /* Program code */
  .text : 
  {
    . = ALIGN(4);
    *(.text*)
    . = ALIGN(4);
  } > flash

  /* Read only data */
  .rodata :
  {
    . = ALIGN(4);
    *(.rodata*)
    . = ALIGN(4);
    _code_end = .; /* No FLASH beyond this point, only .data section contents */
  } > flash
  
  /* RW data */
  .data : 
  {
    . = ALIGN(4);
    _data_start = .;
    *(.data)
    . = ALIGN(4);
    _data_end = .;
  } > ram AT > flash
 
  /* BSS section */
  . = ALIGN(4);
  .bss :
  {
    _bss_start = .;
    *(.bss)
    . = ALIGN(4);
    _bss_end = .;
  } > ram
} 

PROVIDE(_stack = ORIGIN(ram) + LENGTH(ram));

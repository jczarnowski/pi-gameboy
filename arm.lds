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
    KEEP(*(.isr_vector))
  } > flash
  
  /* Program code */
  .text : 
  {
    *(.text*)
  } > flash

  /* Read only data */
  .rodata :
  {
    *(.rodata*)
  } > flash
 
  /* RW data */
  .data : 
  {
    *(.data)
  } > ram
 
  /* BSS section */
  .bss :
  {
    _bss_start = .;
    *(.bss)
    _bss_end = .;
  } > ram
} 

PROVIDE(_stack = ORIGIN(ram) + LENGTH(ram));

cmake_minimum_required(VERSION 3.7)
project(gamejoy CXX C)

set(CMAKE_BUILD_TYPE Debug)


set(C_SOURCES
  hal/stm32f4xx_ll_rcc.c
  hal/stm32f4xx_ll_pwr.c
  cmsis/system_stm32f4xx.c
)

set(EXEC_NAME gamejoy.elf)
add_executable(${EXEC_NAME})
target_sources(${EXEC_NAME} PRIVATE
  ${C_SOURCES}
  src/main.cpp
  src/startup.cpp
)
set_source_files_properties(${C_SOURCES} PROPERTIES LANGUAGE C)
target_include_directories(${EXEC_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/cmsis
    ${CMAKE_CURRENT_SOURCE_DIR}/hal
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

add_compile_definitions(
  USE_FULL_LL_DRIVER 
  HSE_VALUE=8000000
)

# set link properties
set(LINKER_SCRIPT ${CMAKE_CURRENT_SOURCE_DIR}/stm32f429zi.lds)
set_target_properties(${EXEC_NAME} PROPERTIES 
	LINK_FLAGS "-Wl,-T,${LINKER_SCRIPT},-Map,output.map -nostartfiles -nostdlib")

# depend on the linker script
set_target_properties(${EXEC_NAME} PROPERTIES LINK_DEPENDS ${LINKER_SCRIPT})
target_compile_options(${EXEC_NAME} PUBLIC -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -fno-exceptions)

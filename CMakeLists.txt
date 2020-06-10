cmake_minimum_required(VERSION 3.14)
project(gamejoy CXX)

set(CMAKE_BUILD_TYPE Debug)

add_executable(gamejoy.elf test.cpp)

# set link properties
set(LINKER_SCRIPT ${CMAKE_CURRENT_SOURCE_DIR}/arm.lds)
set_target_properties(gamejoy.elf PROPERTIES 
	LINK_FLAGS "-Wl,-T,${LINKER_SCRIPT},-Map,output.map -nostartfiles")

# depend on the linker script
set_target_properties(gamejoy.elf PROPERTIES LINK_DEPENDS ${LINKER_SCRIPT})
target_compile_options(gamejoy.elf PUBLIC -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16)

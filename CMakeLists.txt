cmake_minimum_required(VERSION 3.7)
project(gamejoy CXX)

set(CMAKE_BUILD_TYPE Debug)

set(SOURCES
    src/main.cpp
    src/startup.cpp
)

set(EXEC_NAME gamejoy.elf)
add_executable(${EXEC_NAME} ${SOURCES})
target_include_directories(${EXEC_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/cmsis
    ${CMAKE_CURRENT_SOURCE_DIR}/hal
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# set link properties
set(LINKER_SCRIPT ${CMAKE_CURRENT_SOURCE_DIR}/arm.lds)
set_target_properties(${EXEC_NAME} PROPERTIES 
	LINK_FLAGS "-Wl,-T,${LINKER_SCRIPT},-Map,output.map -nostartfiles -nostdlib")

# depend on the linker script
set_target_properties(${EXEC_NAME} PROPERTIES LINK_DEPENDS ${LINKER_SCRIPT})
target_compile_options(${EXEC_NAME} PUBLIC -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -fno-exceptions)

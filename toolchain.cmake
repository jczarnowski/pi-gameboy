set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR arm)

set(CMAKE_C_COMPILER arm-none-eabi-gcc)
set(CMAKE_CXX_COMPILER arm-none-eabi-g++)

# this is to pass compile test
set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)

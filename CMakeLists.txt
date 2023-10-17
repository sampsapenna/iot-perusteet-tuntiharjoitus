cmake_minimum_required(VERSION 3.13)

# initialize pico-sdk from submodule
include(pico-sdk/pico_sdk_init.cmake)
include(pico-sdk/external/pico_sdk_import.cmake)

project(iot-perusteet-tuntiharjoitus C CXX ASM)

pico_sdk_init()

add_compile_options(-Wall
	-Wno-format
	-Wno-unused-function
	-Wno-maybe-uninitialized
	)

add_executable(iot_perusteet_tuntiharjoitus
	io_exercise.c
)

target_link_libraries(iot_perusteet_tuntiharjoitus pico_stdlib)

pico_enable_stdio_usb(iot_perusteet_tuntiharjoitus 1)
pico_enable_stdio_uart(iot_perusteet_tuntiharjoitus 0)

pico_add_extra_outputs(iot_perusteet_tuntiharjoitus)

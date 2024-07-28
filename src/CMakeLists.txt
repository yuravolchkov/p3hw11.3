cmake_minimum_required (VERSION 3.20)

set(CMAKE_CXX_STANDART 17)
set(CMAKE_CXX_STANDART_REQUIRED True)

project(DynamicLibMain CXX)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../BIN)

include_directories(DynLib)
add_executable(DynamicLibMain main.cpp)
add_subdirectory(DynLib)
target_link_libraries(DynamicLibMain DynamicLib)
cmake_minimum_required (VERSION 3.20)

set(CMAKE_CXX_STANDART 17)
set(CMAKE_CXX_STANDART_REQUIRED True)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ../../DLL)
project(DynamicLib CXX)
set(SOURCE_Leaver DinamicLibLeaver.cpp DinamicLibLeaver.h) 
add_library(Exturnal_Leaver SHARED ${SOURCE_Leaver})
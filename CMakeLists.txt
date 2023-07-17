cmake_minimum_required(VERSION 3.20)

project(ModuleTest)
add_subdirectory(mrtrix3)
include(mrtrix.cmake)

add_mrtrix_cpp_cmd(mycommand main.cpp)
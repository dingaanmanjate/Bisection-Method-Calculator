cmake_minimum_required(VERSION 4.2)

project(AeroSim VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(AeroSim main.cpp)
set_property(TARGET AeroSim PROPERTY CXX_STANDARD 17)


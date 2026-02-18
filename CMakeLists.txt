cmake_minimum_required(VERSION 4.2)

project(BisectionMethod VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(BisectionMethod main.cpp)
set_property(TARGET BisectionMethod PROPERTY CXX_STANDARD 17)


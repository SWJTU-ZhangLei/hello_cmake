cmake_minimum_required(VERSION 3.0.0)

# set the project name
project(Step1 VERSION 1.0.1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(step1_config.h.in step1_config.h)

# add the executable
add_executable(Step1 step1.cpp)

target_include_directories(Step1 PUBLIC "${PROJECT_BINARY_DIR}")
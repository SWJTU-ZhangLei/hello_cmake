cmake_minimum_required(VERSION 3.0.0)

# set the project name
project(Step2 VERSION 1.0.2)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

option(USE_MYMATH "Use my math implementation" ON)

configure_file(step2_config.h.in step2_config.h)

if(USE_MYMATH)
  add_subdirectory(math_functions)
  list(APPEND EXTRA_LIBS math_functions)
  list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/math_functions")
endif()

# add the executable
add_executable(Step2 step2.cpp)

target_link_libraries(Step2 PUBLIC ${EXTRA_LIBS})

# add the binary tree to the search path for include files
target_include_directories(Step2 PUBLIC "${PROJECT_BINARY_DIR}" ${EXTRA_INCLUDES})
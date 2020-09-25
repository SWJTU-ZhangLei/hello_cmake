cmake_minimum_required(VERSION 3.0.0)

# set the project name
project(Step3 VERSION 1.0.4)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

option(USE_MYMATH "Use my math implementation" ON)

configure_file(step4_config.h.in step3_config.h)

if(USE_MYMATH)
  add_subdirectory(math_functions)
  list(APPEND EXTRA_LIBS math_functions)
  # list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/math_functions")
endif()

# add the executable
add_executable(Step4 step4.cpp)

target_link_libraries(Step4 PUBLIC ${EXTRA_LIBS})

# add the binary tree to the search path for include files
target_include_directories(Step4 PUBLIC "${PROJECT_BINARY_DIR}")

install(TARGETS Step4 DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/step4_config.h"
  DESTINATION include
)
add_subdirectory(hello)

include_directories(hello)
link_directories(hello)

add_executable(hello_cmake main.cpp)
target_link_libraries(hello_cmake hello)

install(TARGETS hello_cmake RUNTIME DESTINATION bin)

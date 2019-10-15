
#add_library(hello_static STATIC hello.cpp)
add_library(hello SHARED hello.cpp)

#set_target_properties(hello_static PROPERTIES OUTPUT_NAME "hello")

#set_target_properties(hello_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)
#set_target_properties(hello PROPERTIES CLEAN_DIRECT_OUTPUT 1)

set_target_properties(hello PROPERTIES VERSION 1.0 SOVERSION 1)

#install(TARGETS hello_static ARCHIVE DESTINATION libstatic/hello)
install(TARGETS hello LIBRARY DESTINATION lib/hello)
install(FILES hello.h DESTINATION include/hello)

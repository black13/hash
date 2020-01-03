cmake_minimum_required(VERSION 3.5)

project(hashtable )

set(CMAKE_BUILD_TYPE Debug)

add_executable(hashtable hashtable_test.c hashtable.c hashtable_str.c)
target_link_libraries(hashtable m)
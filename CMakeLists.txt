cmake_minimum_required(VERSION 3.22.1)

project(CAN_Socket VERSION 1.0.0)

add_subdirectory(functions)

add_executable(cansocket
main.c)

target_link_libraries(cansocket PRIVATE functions)

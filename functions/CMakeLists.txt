project(Functions_project VERSION 1.0.0)

add_library(functions
src/readBuffer.c)

target_include_directories(functions PUBLIC include)

message("Subdirectory level CMakeLists: CMAKE_PROJECT_NAME=${CMAKE_PROJECT_NAME}")
message("Subdirectory level CMakeLists: PROJECT_NAME=${PROJECT_NAME}")
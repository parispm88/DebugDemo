cmake_minimum_required(VERSION 3.16)
project(DebugDemo VERSION 0.1.0)


add_subdirectory(source)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

include_directories(${PROJECT_SOURCE_DIR}/source)

add_executable(DebugDemo main.c)
target_compile_options(DebugDemo PUBLIC)
target_link_libraries(DebugDemo PUBLIC DebugDemoLib pthread)
cmake_minimum_required(VERSION 3.16)

set(source
    ../include/foo.h
    foo.c
    ../include/kung.h
    kung.c
)

add_library(DebugDemoLib ${source})
target_compile_options(DebugDemoLib PUBLIC "-Wall" "-Wextra" "-g")
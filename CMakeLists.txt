cmake_minimum_required(VERSION 3.15)

project(nephis C)
set(CMAKE_C_STANDARD 99)

add_subdirectory(external/raylib)

set(SRC
  src/main.c
)

add_executable(nephis
  ${SRC}
)

target_include_directories(nephis PUBLIC include)
target_include_directories(nephis PUBLIC external/tomlc17/src)
target_link_libraries(nephis raylib)

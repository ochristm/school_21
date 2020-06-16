cmake_minimum_required(VERSION 3.14)
project(get_next_line)

set(CMAKE_C_STANDARD 90)

include_directories(libft)
add_executable(get_next_line main.c get_next_line.c get_next_line.h)
add_subdirectory(libft)
target_link_libraries(get_next_line libft)
cmake_minimum_required(VERSION 3.14)
project(Escape-the-Maze C)

set(CMAKE_C_STANDARD 11)

set(SOURCE_MAIN escapeTheMaze.c)
set(HEADERS_H mz_utils.h dt_utils.h)
set(HEADERS_IMPL mz_utils.c dt_utils.c)

add_executable(escapeTheMaze ${SOURCE_MAIN} ${HEADERS_H} ${HEADERS_IMPL})
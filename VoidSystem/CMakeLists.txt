cmake_minimum_required(VERSION 2.8)

project(VoidSystem)

set(HEADER_FILES
    src/Alpha.h
    src/Beta.h
)

set(SOURCE_FILES
    src/Alpha.cpp
    src/Beta.cpp
    src/main.cpp
)

include_directories(
    src
)

add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES})

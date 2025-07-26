cmake_minimum_required(VERSION 3.25)

project(sample_dll)

option(BUILD_SHARED_LIBS "Build shared libraries" OFF)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SAMPLE_SRCS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "src/*.cpp")
file(GLOB_RECURSE SAMPLE_HDRS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "src/*.hpp")

add_library(sample_lib ${SAMPLE_SRCS} ${SAMPLE_HDRS})

target_include_directories(sample_lib
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
        $<INSTALL_INTERFACE:include>
)

add_executable(sample_app tests/sample.cpp)
target_link_libraries(sample_app sample_lib)
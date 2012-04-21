cmake_minimum_required(VERSION 2.8)
project(console)

ADD_DEFINITIONS(-g -Wall -ansi -Wno-deprecated -std=c++0x)

INCLUDE_DIRECTORIES(${console_SOURCE_DIR}/include)

ADD_EXECUTABLE(
  console
  src/buffer.cpp
  src/console.cpp
  src/main.cpp
  src/test.cpp)


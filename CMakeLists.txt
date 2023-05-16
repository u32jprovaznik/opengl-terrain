# CMake Version
cmake_minimum_required(VERSION 3.0)

# Constants
set(PROJECT_NAME "terrain")

# Project Name
project(${PROJECT_NAME})

# C++ Standard
set(CMAKE_CXX_STANDARD 11)

# Executable
add_executable(
  ${PROJECT_NAME}
  src/Main.cpp
)
target_link_directories(${PROJECT_NAME} PUBLIC src)

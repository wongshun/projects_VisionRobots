cmake_minimum_required(VERSION 3.10)

project("VisionRobots")

# Use C++17 standard.
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_subdirectory("src")
add_subdirectory("test")


# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required(VERSION 3.8)

project("ReaCl")

# Include sub-projects.
add_subdirectory("3rdParty")

add_subdirectory("ReaCl")


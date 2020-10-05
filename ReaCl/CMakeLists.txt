# CMakeList.txt : CMake project for ReaCl, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
find_package(Boost REQUIRED)
find_package(SFML REQUIRED audio graphics network system window)

aux_source_directory(. source_directory)
add_executable(ReaCl ${source_directory})

lnk_deps(ReaCl)

target_include_directories(ReaCl PRIVATE ${Boost_INCLUDE_DIRS})
target_link_libraries(ReaCl PRIVATE FLAC OpenGL Vorbis sfml-audio sfml-graphics sfml-network sfml-system sfml-window)


# TODO: Add tests and install targets if needed.

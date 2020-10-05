# CMakeList.txt : CMake project for ReaCl, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
find_package(Boost REQUIRED)
find_package(SFML REQUIRED audio graphics main network system window)

aux_source_directory(. source_directory)
add_executable(ReaCl ${source_directory})

target_include_directories(ReaCl PRIVATE ${Boost_INCLUDE_DIRS})

target_link_directories(ReaCl PRIVATE ${SFML_LIBRARIES})

target_link_libraries(Reacl PRIVATE box2d::box2d)


# TODO: Add tests and install targets if needed.

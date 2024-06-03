cmake_minimum_required(VERSION 3.10)

# Project name
project(Testy)

SET ( CMAKE_VERBOSE_MAKEFILE true )

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


# Specify the source files
set(SOURCES main.cc)

# Find the SFML package
find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)

# Add the executable
add_executable(Testy ${SOURCES})

# Link SFML libraries
target_link_libraries(Testy sfml-system sfml-window sfml-graphics sfml-network sfml-audio)

# Include SFML headers
include_directories(${SFML_INCLUDE_DIR})


target_compile_options(Testy PRIVATE -Wall)
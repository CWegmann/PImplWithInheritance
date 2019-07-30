cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

project(PImplWithInheritance LANGUAGES CXX)

add_subdirectory(Shapes)
add_subdirectory(Algorithms)

add_executable(
    PImplWithInheritance
    main.cpp)

target_link_libraries(
    PImplWithInheritance
    Shapes
    Algorithms
)
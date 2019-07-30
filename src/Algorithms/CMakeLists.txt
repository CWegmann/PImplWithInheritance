add_library(Algorithms
    Stretching.cpp
    Translation.cpp
    )

target_link_libraries(
    Algorithms
    PRIVATE
    Shapes
    )

target_include_directories(
    Algorithms
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
    )

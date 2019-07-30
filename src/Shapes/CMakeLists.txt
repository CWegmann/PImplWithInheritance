add_library(Shapes
    Shape.cpp
    Circle.cpp
    Rectangle.cpp
    Square.cpp
    CircleImpl.cpp
    RectangleImpl.cpp
    SquareImpl.cpp
    )

target_link_libraries(
    Shapes
    PUBLIC
    Algorithms)

target_include_directories(
    Shapes
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
    )

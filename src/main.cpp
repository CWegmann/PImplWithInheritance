#include <iostream>

#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"

#include "Stretching.hpp"
#include "Translation.hpp"

#include "ShapeImpl.hpp"

int main(){

    Rectangle rectangle{0.0, 10.0, 1.0, 2.0};
    Square square{0.0, 10.0, 3.0};
    Circle circle{0.0, 10.0, 4.0};

    std::cout << "=== initial value ===\n";
    std::cout << rectangle.toString();
    std::cout << square.toString();
    std::cout << circle.toString();

    Stretching stretch{5.0};
    rectangle.getImpl()->accept(stretch);
    square.getImpl()->accept(stretch);
    circle.getImpl()->accept(stretch);

    std::cout << "=== after stretching ===\n";
    std::cout << rectangle.toString();
    std::cout << square.toString();
    std::cout << circle.toString();

    Translation translation{100.0, 200.0};
    rectangle.getImpl()->accept(translation);
    square.getImpl()->accept(translation);
    circle.getImpl()->accept(translation);

    std::cout << "=== after translation ===\n";
    std::cout << rectangle.toString();
    std::cout << square.toString();
    std::cout << circle.toString();


}

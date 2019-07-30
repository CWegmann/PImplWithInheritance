#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Shape.hpp"

class Rectangle
        : public Shape{

public:
    class Impl;

    Rectangle() = default;
    Rectangle(double lowerleftX,
              double lowerleftY,
              double width,
              double height);
    ~Rectangle() = default;

    double getArea() const override;
    double getCircumference() const override;
    std::string toString() const override;

};

#endif

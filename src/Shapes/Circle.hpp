#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Shape.hpp"

class Circle
        : public Shape{

public:
    class Impl;

    Circle() = default;
    Circle(double centerX,
           double centerY,
           double radius);
    ~Circle() = default;

    double getArea() const override;
    double getCircumference() const override;
    std::string toString() const override;

};

#endif

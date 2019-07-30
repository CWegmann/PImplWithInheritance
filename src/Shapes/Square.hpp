#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "Rectangle.hpp"

class Square
        : public Rectangle{

public:
    class Impl;

    Square() = default;
    Square(double lowerleftX,
           double lowerleftY,
           double width);
    ~Square() = default;

    double getArea() const override;
    double getCircumference() const override;
    std::string toString() const override;

};

#endif

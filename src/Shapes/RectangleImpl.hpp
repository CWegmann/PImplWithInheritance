#ifndef RECTANGLEIMPL_HPP
#define RECTANGLEIMPL_HPP

#include "ShapeImpl.hpp"
#include "Rectangle.hpp"

class Rectangle::Impl
        : public Shape::Impl{

public:
    Impl(double lowerleftX,
         double lowerleftY,
         double width,
         double height);

    void accept(const ShapeImplAlgorithm& algo) override;

    double lowerleftX;
    double lowerleftY;
    double width;
    double height;

};

#endif

#ifndef CIRCLEIMPL_HPP
#define CIRCLEIMPL_HPP

#include "ShapeImpl.hpp"
#include "Circle.hpp"

class Circle::Impl
        : public Shape::Impl{

public:
    Impl(double centerX,
         double centerY,
         double radius);

    void accept(const ShapeImplAlgorithm& algo) override;

    double centerX;
    double centerY;
    double radius;

};

#endif

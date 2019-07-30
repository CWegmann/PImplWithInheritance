#ifndef SHAPEIMPLALGORITHM_HPP
#define SHAPEIMPLALGORITHM_HPP

#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"

class ShapeImplAlgorithm{

public:
    virtual ~ShapeImplAlgorithm() = default;
    virtual void run(Circle::Impl& impl) const = 0;
    virtual void run(Rectangle::Impl& impl) const = 0;
    virtual void run(Square::Impl& impl) const = 0;

};

#endif

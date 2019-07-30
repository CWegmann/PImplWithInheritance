#ifndef SHAPEIMPL_HPP
#define SHAPEIMPL_HPP

#include "Shape.hpp"
#include "ShapeImplAlgorithm.hpp"

class Shape::Impl{

public:
    virtual ~Impl() = default;

    virtual void accept(const ShapeImplAlgorithm& algo) = 0;

};

#endif

#ifndef SQUAREIMPL_HPP
#define SQUAREIMPL_HPP

#include "ShapeImpl.hpp"
#include "Square.hpp"

class Square::Impl
        : public Shape::Impl{

public:
    Impl(double lowerleftX,
         double lowerleftY,
         double width);

    void accept(const ShapeImplAlgorithm& algo) override;

    double lowerleftX;
    double lowerleftY;
    double width;

};

#endif

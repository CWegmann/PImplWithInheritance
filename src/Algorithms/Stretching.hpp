#ifndef STRETCHING_HPP
#define STRETCHING_HPP

#include "ShapeImplAlgorithm.hpp"

class Stretching
        : public ShapeImplAlgorithm{

public:
    Stretching(double factor);

    void run(Circle::Impl& impl) const override;
    void run(Rectangle::Impl& impl) const override;
    void run(Square::Impl& impl) const override;

private:
    double factor;

};

#endif

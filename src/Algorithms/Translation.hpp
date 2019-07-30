#ifndef TRANSLATION_HPP
#define TRANSLATION_HPP

#include "ShapeImplAlgorithm.hpp"

class Translation
        : public ShapeImplAlgorithm{

public:
    Translation(double x,
                double y);

    void run(Circle::Impl& impl) const override;
    void run(Rectangle::Impl& impl) const override;
    void run(Square::Impl& impl) const override;

private:
    double x;
    double y;

};

#endif

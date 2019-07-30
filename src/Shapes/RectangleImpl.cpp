#include "RectangleImpl.hpp"

Rectangle::Impl::Impl(
        double lowerleftX,
        double lowerleftY,
        double width,
        double height)
    : lowerleftX{lowerleftX}
    , lowerleftY{lowerleftY}
    , width{width}
    , height{height}{
}

void
Rectangle::Impl::accept(
        const ShapeImplAlgorithm& algo){
    algo.run(*this);
}

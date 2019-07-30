#include "CircleImpl.hpp"

Circle::Impl::Impl(
        double centerX,
        double centerY,
        double radius)
    : centerX{centerX}
    , centerY{centerY}
    , radius{radius}{
}

void
Circle::Impl::accept(
        const ShapeImplAlgorithm& algo){
    algo.run(*this);
}

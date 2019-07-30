#include "SquareImpl.hpp"

Square::Impl::Impl(
        double lowerleftX,
        double lowerleftY,
        double width)
    : lowerleftX{lowerleftX}
    , lowerleftY{lowerleftY}
    , width{width}{
}

void
Square::Impl::accept(
        const ShapeImplAlgorithm& algo){
    algo.run(*this);
}

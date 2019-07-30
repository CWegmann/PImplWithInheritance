#include "Stretching.hpp"

#include "CircleImpl.hpp"
#include "RectangleImpl.hpp"
#include "SquareImpl.hpp"

Stretching::Stretching(
        double factor)
    : factor{factor}{
}

void
Stretching::run(
        Circle::Impl& impl) const{
    impl.radius *= factor;
}

void
Stretching::run(
        Rectangle::Impl& impl) const{
    impl.width *= factor;
    impl.height *= factor;
}

void
Stretching::run(
        Square::Impl& impl) const{
    impl.width *= factor;
}

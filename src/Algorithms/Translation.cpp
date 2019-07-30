#include "Translation.hpp"

#include "CircleImpl.hpp"
#include "RectangleImpl.hpp"
#include "SquareImpl.hpp"

Translation::Translation(
        double x,
        double y)
    : x{x}
    , y{y}{
}

void
Translation::run(
        Circle::Impl& impl) const{
    impl.centerX += x;
    impl.centerY += y;
}

void
Translation::run(
        Rectangle::Impl& impl) const{
    impl.lowerleftX += x;
    impl.lowerleftY += y;
}

void
Translation::run(
        Square::Impl& impl) const{
    impl.lowerleftX += x;
    impl.lowerleftY += y;
}

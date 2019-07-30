#include "Square.hpp"
#include "SquareImpl.hpp"
#include <sstream>

Square::Square(
        double lowerleftX,
        double lowerleftY,
        double width){
    pImpl = std::make_unique<Square::Impl>(
                lowerleftX,
                lowerleftY,
                width);
}

double
Square::getArea() const{
    auto ptr = dynamic_cast<Square::Impl*>(pImpl.get());
    return ptr->width * ptr->width;
}

double
Square::getCircumference() const{
    auto ptr = dynamic_cast<Square::Impl*>(pImpl.get());
    return 4 * ptr->width;
}

std::string
Square::toString() const{
    auto ptr = dynamic_cast<Square::Impl*>(pImpl.get());

    std::stringstream strstr;
    strstr << "   square: w = "
           << ptr->width
           << "\t(x, y) = ("
           << ptr->lowerleftX
           << ", "
           << ptr->lowerleftY
           << ")\n";

    return strstr.str();
}

#include "Circle.hpp"
#include "CircleImpl.hpp"
#include <sstream>

Circle::Circle(
        double centerX,
        double centerY,
        double radius){
    pImpl = std::make_unique<Circle::Impl>(
                centerX,
                centerY,
                radius);
}

double
Circle::getArea() const{
    auto ptr = dynamic_cast<Circle::Impl*>(pImpl.get());
    return ptr->radius * ptr->radius * 3.141593;
}

double
Circle::getCircumference() const{
    auto ptr = dynamic_cast<Circle::Impl*>(pImpl.get());
    return ptr->radius * 2 * 3.141593;
}

std::string
Circle::toString() const{
    auto ptr = dynamic_cast<Circle::Impl*>(pImpl.get());

    std::stringstream strstr;
    strstr << "   circle: r = "
           << ptr->radius
           << "\t(x, y) = ("
           << ptr->centerX
           << ", "
           << ptr->centerY
           << ")\n";

    return strstr.str();
}

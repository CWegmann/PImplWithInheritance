#include "Rectangle.hpp"
#include "RectangleImpl.hpp"
#include <sstream>

Rectangle::Rectangle(
        double lowerleftX,
        double lowerleftY,
        double width,
        double height){
    pImpl = std::make_unique<Rectangle::Impl>(
                lowerleftX,
                lowerleftY,
                width,
                height);
}

double
Rectangle::getArea() const{
    auto ptr = dynamic_cast<Rectangle::Impl*>(pImpl.get());
    return ptr->width * ptr->height;
}

double
Rectangle::getCircumference() const{
    auto ptr = dynamic_cast<Rectangle::Impl*>(pImpl.get());
    return 2 * (ptr->width + ptr->height);
}

std::string
Rectangle::toString() const{
    auto ptr = dynamic_cast<Rectangle::Impl*>(pImpl.get());

    std::stringstream strstr;
    strstr << "rectangle: w = "
           << ptr->width
           << "\th = "
           << ptr->height
           << "\t(x, y) = ("
           << ptr->lowerleftX
           << ", "
           << ptr->lowerleftY
           << ")\n";

    return strstr.str();
}

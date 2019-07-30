#include "Shape.hpp"

Shape::Impl*
Shape::getImpl(){
    return pImpl.get();
}

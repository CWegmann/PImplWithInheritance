#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <memory>
#include <string>

class Shape{

public:
    class Impl;

    virtual ~Shape() = default;

    virtual double getArea() const = 0;
    virtual double getCircumference() const = 0;
    virtual std::string toString() const = 0;

    Impl* getImpl();

protected:
    std::unique_ptr<Impl> pImpl;

};

#endif

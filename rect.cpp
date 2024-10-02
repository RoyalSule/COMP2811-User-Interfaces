#include <stdexcept>
#include "rect.hpp"

Rectangle::Rectangle(double x, double y, double w, double h):
    xorigin(x), yorigin(y), width(w), height(h)
{
    if (width <= 0 || height <= 0) {
        throw std::invalid_argument("dimensions must be > 0");
    }
}

Rectangle::Rectangle(double w, double h) :
    xorigin(0), yorigin(0), width(w), height(h)
{
}

double Rectangle::getX() const
{
    return xorigin;
}

double Rectangle::getY() const
{
    return yorigin;
}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getHeight() const
{
    return height;
}

double Rectangle::perimeter() const
{
    return 2 * (width + height);
}

double Rectangle::area() const
{
    return width * height;
}
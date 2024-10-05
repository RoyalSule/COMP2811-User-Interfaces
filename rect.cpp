#include <stdexcept>
#include "rect.hpp"

using namespace std;

Rectangle::Rectangle(double w, double h) :
    Shape(0, 0), width(w), height(h)
{
    if (width <= 0.0 || height <= 0.0) {
        throw invalid_argument("dimensions must be > 0\n");
    }
}

Rectangle::Rectangle(double x, double y, double w, double h):
    Shape(x, y), width(w), height(h)
{
    if (width <= 0.0 || height <= 0.0) {
        throw invalid_argument("dimensions must be > 0\n");
    }
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
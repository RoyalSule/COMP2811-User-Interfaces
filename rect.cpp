#include <stdexcept>
#include "rect.hpp"
#include <iostream>

using namespace std;

Rectangle::Rectangle(double x, double y, double w, double h):
    Shape(x, y), width(w), height(h)
{
    if (width <= 0.0 || height <= 0.0) {
        throw invalid_argument("dimensions must be > 0\n");
    }
}

void Rectangle::draw() const 
{
    cout << "Drawing Cirle("
         << "x=" << getX()
         << ",y=" << getY()
         << ",w=" << getWidth()
         << ",h=" << getHeight()
         << ")" << endl;
}
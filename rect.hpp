#pragma once

#include "shape.hpp"

class Rectangle: public Shape
{    
    public:
        Rectangle(double, double);
        Rectangle(double, double, double, double);
        double getWidth() const;
        double getHeight() const;
        double perimeter() const;
        double area() const;
        
    private:
        double xorigin, yorigin;
        double width, height;
};
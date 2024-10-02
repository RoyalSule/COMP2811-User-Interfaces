#pragma once

class Rectangle 
{    
    public:
        Rectangle(double w, double h) : Rectangle(0, 0, w, h) {};
        Rectangle(double, double, double, double);
        double getX() const { return xorigin; }
        double getY() const { return yorigin; }
        double getWidth() const { return width; }
        double getHeight() const { return height; }
        double perimeter() const { return 2 * (width + height); }
        double area() const { return width * height; }

    private:
        double xorigin, yorigin;
        double width, height;
};
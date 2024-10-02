#pragma once

class Rectangle 
{    
    public:
        Rectangle(double, double);
        Rectangle(double, double, double, double);
        double getX() const;
        double getY() const;
        double getWidth() const;
        double getHeight() const;
        double perimeter() const;
        double area() const;
        
    private:
        double xorigin, yorigin;
        double width, height;
};
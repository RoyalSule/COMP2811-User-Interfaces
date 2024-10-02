#include <iostream>
#include "rect.hpp"

using namespace std;

int main() {
    Rectangle r(5, 10);

    cout << "Origin = (" << r.getX() << ", " << r.getY() << ")"
         << "\nWidth = " << r.getWidth()
         << "\nHeight = " << r.getHeight()
         << "\nArea = " << r.area()
         << "\nPerimeter = " << r.perimeter() << endl;

    return 0;
}

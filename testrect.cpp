#include <stdexcept>
#include <iostream>
#include "rect.hpp"

using namespace std;

int main() {
    try {
        Rectangle r(0, 0);

        cout << "Origin = (" << r.getX() << ", " << r.getY() << ")"
             << "\nWidth = " << r.getWidth()
             << "\nHeight = " << r.getHeight()
             << "\nArea = " << r.area()
             << "\nPerimeter = " << r.perimeter() << endl;
    }
    catch(const exception& e) {
        cerr << e.what();
    }

    return 0;
}

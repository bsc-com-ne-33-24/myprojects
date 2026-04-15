#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"
using namespace std;
using namespace shapes;
 
int main() {
    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Calculate area of Square\n";
        cout << "2. Calculate area of Triangle\n";
        cout << "3. Calculate area of Circle\n";
        cout << "4. Quit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            float side;
            cout << "Enter side length: ";
            cin >> side;
            Square sq(side);
            cout << "Area of square: " << Area::calculateSquareArea(sq) << endl;
        } else if (choice == 2) {
            float base, height;
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;
            Triangle tri(base, height);
            cout << "Area of triangle: " << Area::calculateTriangleArea(tri) << endl;
        } else if (choice == 3) {
            float radius;
            cout << "Enter radius: ";
            cin >> radius;
            Circle cir(radius);
            cout << "Area of circle: " << Area::calculateCircleArea(cir) << endl;
        }
    } while (choice != 4);

    return 0;
}

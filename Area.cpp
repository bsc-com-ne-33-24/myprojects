#include <iostream>
using namespace std;

double triangleArea(double base, double height) {
    return 0.5 * base * height;
}
double rectangleArea(double length, double width) {
    return length * width;
}
double squareArea(double side) {
    return side * side;
}

int main() {
    int choice;
    while (true) {
        cout << "\nChoose shape to calculate area:\n";
        cout << "1. Triangle\n2. Rectangle\n3. Square\n4. Quit\n";
        cin >> choice;

        if (choice == 4) break;

        switch (choice) {
            case 1: {
                double b,h;
                cout << "Enter base and height: ";
                cin >> b >> h;
                cout << "Area of triangle: " << triangleArea(b,h) << endl;
                break;
            }
            case 2: {
                double l,w;
                cout << "Enter length and width: ";
                cin >> l >> w;
                cout << "Area of rectangle: " << rectangleArea(l,w) << endl;
                break;
            }
            case 3: {
                double s;
                cout << "Enter side: ";
                cin >> s;
                cout << "Area of square: " << squareArea(s) << endl;
                break;
            }
            default:
                cout << "Invalid input. Try again." << endl;
        }
    }
    return 0;
}
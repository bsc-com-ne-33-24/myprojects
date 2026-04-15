#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    float l, w;

    // First rectangle using default constructor
    Rectangle rect1;
    cout << "Enter length for rect1: ";
    cin >> l;
    rect1.setLength(l);
    cout << "Enter width for rect1: ";
    cin >> w;
    rect1.setWidth(w);
    cout << "Area of rect1: " << rect1.calculateArea() << endl;

    // Second rectangle using overloaded constructor
    cout << "Enter length for rect2: ";
    cin >> l;
    cout << "Enter width for rect2: ";
    cin >> w;
    Rectangle rect2(l, w);
    cout << "Area of rect2: " << rect2.calculateArea() << endl;

    return 0;
}

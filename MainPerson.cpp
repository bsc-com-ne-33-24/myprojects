#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

int main() {
    Person p1("Jane", 60.0f, 25);
    Person p2("John", 75.0f, 30);

    cout << "Total Weight: " << (p1 + p2) << endl;

    if (p1 == p2)
        cout << "Same person\n";
    else
        cout << "Different people\n";

    if (p1 < p2)
        cout << "p1 is younger\n";

    if (p2 > p1)
        cout << "p2 is older\n";

    int age = (int)p2;
    cout << "Age: " << age << endl;

    string name = (string)p1;
    cout << "Name: " << name << endl;

    return 0;
}
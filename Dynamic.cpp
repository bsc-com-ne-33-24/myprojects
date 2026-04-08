#include <iostream>
#include <string>
using namespace std;

int main() {
    // Dynamically allocate memory
    int* pInt = new int;
    string* pStr = new string;

    // User input
    cout << "Enter an integer: ";
    cin >> *pInt;

    cout << "Enter a string: ";
    cin.ignore(); // clear newline from buffer
    getline(cin, *pStr);

    // Output values
    cout << "Integer value: " << *pInt << endl;
    cout << "String value: " << *pStr << endl;

    // Free memory
    delete pInt;
    delete pStr;


    return 0;
}

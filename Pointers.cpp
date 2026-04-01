#include <iostream>
using namespace std;

int main() {

    int firstValue;
    int secondValue;

    int * pPointer = nullptr;

    //assign ponter with the address of firstValue
    pPointer = &firstValue;
    *pPointer = 20;//Indiretion

    cout << "firstValue is " << firstValue << '\n';
    cout << "secondValue is " <<secondValue << '\n';

    return 0;
}
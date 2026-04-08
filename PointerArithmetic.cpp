#include <iostream>
using namespace std;

int main() {
//null pointer
    int* pPointer = nullptr;

    int numbersArray[3] = {10 ,20 , 30};

    //assign addressvof the first element
    pPointer = numbersArray;

    //output the ddress of the first elemennt
    cout << "Address at pPointer: " << pPointer << endl;
    cout << "Address of numbersArray[0]: " << numbersArray << endl;

    //output the value of the first element using the pointer and indirection
    cout << "Value at pPointer: "<< *pPointer << endl;

    //This outputs the value of the second element
    cout << "Value  at ++pPointer: " << *(++pPointer) << endl;

    //assign address of the firstelement to pointer
    pPointer = numbersArray;

    //This outputs the value of the first element
    cout << "Value at pPointer++: " << *(pPointer++) << endl;

    return 0;
}
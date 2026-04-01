#include <iostream>
using namespace std;

int main() {
    string arr[] = {"B123","C234","A345","C15","B177","G3003","C235","B179"};

    for (string code : arr) {
        if (code[0] == 'B') {
            cout << code << endl;
        }
    }

    return 0;
}
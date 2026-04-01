#include <iostream>
using namespace std;

int main() {
    int value;
    bool valid = false;

    while (!valid) {
        cout << "Enter an integer between 5 and 10: ";
        cin >> value;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input. Please enter an integer." << endl;
        } else if (value < 5 || value > 10) {
            cout << "Value not in range. Try again." << endl;
        } else {
            valid = true;
        }
    }

    cout << "Your input value " << value << " has been accepted." << endl;
    return 0;
}
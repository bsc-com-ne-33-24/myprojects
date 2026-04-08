#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows (max 3): ";
    cin >> rows;
    cout << "Enter number of columns (max 3): ";
    cin >> cols;

    // Validate dimensions
    if (rows <= 0 || cols <= 0 || rows > 3 || cols > 3) {
        cout << "Error: dimensions must be between 1 and 3." << endl;
        return 1;
    }

    // Allocate 2D array dynamically
    double** array2D = new double*[rows];
    for (int i = 0; i < rows; i++) {
        array2D[i] = new double[cols];
    }

    // Assign values
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> array2D[i][j];
        }
    }

    // Output values
    cout << "Array contents:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array2D[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < rows; i++) {
        delete[] array2D[i];
    }
    delete[] array2D;

    return 0;
}

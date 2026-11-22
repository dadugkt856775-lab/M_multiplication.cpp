#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication is not possible.";
        return 0;
    }

    cout << "Enter first matrix:\n";
    for (int i = 0; i < r1; i++)
       

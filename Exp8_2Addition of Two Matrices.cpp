#include <iostream>
using namespace std;

int main() {
    int row, col, A[10][10], B[10][10];
    cout << "Enter rows and columns: ";
    cin >> row >> col;

    cout << "Enter Matrix A:\n";
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            cin >> A[i][j];

    cout << "Enter Matrix B:\n";
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            cin >> B[i][j];

    cout << "Sum (A + B):\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++)
            cout << A[i][j] + B[i][j] << " ";
        cout << endl;
    }
    return 0;
}

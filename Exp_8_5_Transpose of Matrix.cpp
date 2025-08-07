include <iostream>
using namespace std;

int main() {
    int A[10][10], row, col;
    cout << "Enter rows and columns: ";
    cin >> row >> col;

    cout << "Enter Matrix A:\n";
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            cin >> A[i][j];

    cout << "Transpose:\n";
    for(int i = 0; i < col; i++) {
        for(int j = 0; j < row; j++)
            cout << A[j][i] << " ";
        cout << endl;
    }
    return 0;
}

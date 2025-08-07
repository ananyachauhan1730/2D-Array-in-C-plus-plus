include <iostream>
using namespace std;

int main() {
    int A[10][10], B[10][10], C[10][10] = {0};
    int row, col;
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

    
    cout << "Multiplication (A x B):\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            for(int k = 0; k < col; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

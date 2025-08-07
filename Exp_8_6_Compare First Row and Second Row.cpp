include <iostream>
using namespace std;

int main() {
    int A[10][10], row, col;
    cout << "Enter rows and columns: ";
    cin >> row >> col;

    if(row < 2) {
        cout << "Need at least 2 rows to compare.\n";
        return 0;
    }

    cout << "Enter Matrix A:\n";
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            cin >> A[i][j];

    cout << "Comparing first and second row:\n";
    for(int j = 0; j < col; j++) {
        if(A[0][j] == A[1][j])
            cout << "Column " << j << ": Equal (" << A[0][j] << ")\n";
        else
            cout << "Column " << j << ": Not Equal (" << A[0][j] << " vs " << A[1][j] << ")\n";
    }
    return 0;
}

include <iostream>
using namespace std;

int main() {
    int A[10][10], n, sum = 0;
    cout << "Enter size of square matrix (n x n): ";
    cin >> n;

    cout << "Enter matrix A:\n";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> A[i][j];

    for(int i = 0; i < n; i++)
        sum += A[i][i];

    cout << "Diagonal Sum: " << sum << endl;
    return 0;
}

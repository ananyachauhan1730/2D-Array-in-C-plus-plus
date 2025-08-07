#include <iostream>
using namespace std;
int main() {
    int marks[3][3];
    int i, j;
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cout << "Enter element ("<<i<<","<<j<<"):";
            cin >> marks[i][j];
        }
    }
    cout<<"matrix is:";
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cout<<marks[i][j];
        }
        cout << endl;
    }

    return 0;
}

/*
Output:
Enter element (0,0):
1
Enter element (0,1):
2
Enter element (0,2):
3
Enter element (1,0):
4
Enter element (1,1):
5
Enter element (1,2):
6
Enter element (2,0):
7
Enter element (2,1):
8
Enter element (2,2):
9
matrix is:
123
456
789
*/

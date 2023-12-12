#include <iostream>
using namespace std;

int main() {
    //        i  j         i  j         i  j         i  j
    // matrix[0][0] matrix[0][1] matrix[0][2] matrix[0][3]

    // matrix[1][0] matrix[1][1] matrix[1][2] matrix[1][3]

    // matrix[2][0] matrix[2][1] matrix[2][2] matrix[2][3]

    // matrix[3][0] matrix[1][1] matrix[2][2] matrix[3][3]

     int n;

    cin >> n;

     int matrix[100][100];

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            cin >> matrix[i][j];
        }
    }

    cout << "Elements on the main diagonal:" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Matrix[" << i << "][" << i << "] = " << matrix[i][i] << endl;
    }

    return 0;
}
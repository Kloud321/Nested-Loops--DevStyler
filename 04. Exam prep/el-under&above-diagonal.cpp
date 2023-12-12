#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    int matrix[100][100];

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            cin >> matrix[i][j];
        }
    }

    // cout << "Elements below the main diagonal:" << endl;



    // for (int i = 1; i < n; i++) {
    //     for (int j = 0; j < i; j++) {
    //         cout << "Matrix[" << i << "][" << j << "] = " << matrix[i][j] << endl;
    //     }
    // }


    cout << "Elements above the main diagonal:" << endl;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "Matrix[" << i << "][" << j << "] = " << matrix[i][j] << endl;
        }
    }

    return 0;
}


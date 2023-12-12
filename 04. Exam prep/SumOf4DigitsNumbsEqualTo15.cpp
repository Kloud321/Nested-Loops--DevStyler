#include <iostream>
using namespace std;

int main() {
    cout << "4-digit numbers in the range 1000 to 9999 whose digits sum up to 15:" << endl;

    for (int i = 100; i < 1000; i++) {
        int currentNumber = i;
        int sumOfDigits = 0;

        // Calculate the sum of digits
        while (currentNumber > 0) {
            sumOfDigits += currentNumber % 10;
            currentNumber /= 10;
        }

        // Check if the sum is equal to 15
        if (sumOfDigits == 15) {
            cout << i << endl;
        }
    }

    return 0;
}

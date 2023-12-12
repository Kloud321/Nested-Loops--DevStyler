#include <iostream>
using namespace std;

int main() {
    cout << "4-digit numbers in the range 1000 to 9999 with the same digits (all equal to 5):" << endl;

    for (int i = 1000; i < 10000; i++) {
        int currentNumber = i;

        // Extract the first digit
        int digit = currentNumber % 10;

        // Check if all digits are the same and equal to 5
        bool sameDigits = true;
        while (currentNumber > 0) {
            if (currentNumber % 10 != digit) {
                sameDigits = false;
                break;  // Break the loop early if any digit is different
            }
            currentNumber /= 10;
        }

        if (sameDigits) {
            cout << i << endl;
        }
    }

    return 0;
}

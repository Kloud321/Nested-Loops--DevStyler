#include <iostream>
using namespace std;

int main() {
      cout << "Numbers in the range 100 to 9999 where each digit is bigger by 1 than the digit before:" << endl;

    for (int i = 100; i < 150; i++) {
        int currentNumber = i;
        int previousDigit = currentNumber % 10;
        currentNumber /= 10;

        // Check if each digit is bigger by 1 than the digit before
        bool isValid = true;
        while (currentNumber > 0) {
            int currentDigit = currentNumber % 10;
            
            if (currentDigit != previousDigit - 1) {
                isValid = false;
                break;  // Break the loop early if the condition is not met
            }

            previousDigit = currentDigit;
            currentNumber /= 10;
        }

        // If all digits satisfy the condition, print the number
        if (isValid) {
            cout << i << endl;
        }
    }

    return 0;
}

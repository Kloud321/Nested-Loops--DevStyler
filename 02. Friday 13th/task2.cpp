#include <iostream>
using namespace std;

int main() {
    int januaryFirst;
    bool leapYear, check;

    cin >> januaryFirst >> leapYear;

    int currentFirstDay = januaryFirst;

    int monthWithFriday13th[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    int monthsSize[] = {31, 28, 31, 30, 31, 31, 30, 31, 30, 31};

    monthsSize[1] += leapYear;

    for (int i = 0; i < 12; ++i) {
        check = ((currentFirstDay + 12) % 7 == 4);
        if (check) {
           monthWithFriday13th[i] += 1;
        }
        currentFirstDay = (currentFirstDay + monthsSize[i]) % 7;
    }

    for (int i = 0; i < 12; ++i) {
        cout << monthWithFriday13th[i] << " ";
    }

    return 0;
}

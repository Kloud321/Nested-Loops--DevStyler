#include <iostream>
using namespace std;

int main() {
    int januaryFirst; // Input the starting day of the week for January 1st 0 for Sunday ... 6 for Saturday 
    bool leapYear;    // Input whether it's a leap year or not 0/1

    cin >> januaryFirst >> leapYear;

    int currentFirstDay = januaryFirst;

    int tuesday7Count[12] = {0}; // Array to store counts for Tuesdays on the 7th of each month

    int monthsSize[] = {31, 28, 31, 30, 31, 31, 30, 31, 30, 31};

    monthsSize[1] += leapYear;

    for (int i = 0; i < 12; ++i) {
        if ((currentFirstDay + 6) % 7 == 2) { // Check if the 7th is a Tuesday (2)
            tuesday7Count[i]++; // Increment the count for this month
        }
        currentFirstDay = (currentFirstDay + monthsSize[i]) % 7;
    }

    for (int i = 0; i < 12; ++i) {
        cout << "Number of Tuesdays on the 7th in month " << i + 1 << ": " << tuesday7Count[i] << endl;
    }

    return 0;
}

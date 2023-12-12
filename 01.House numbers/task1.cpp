#include <iostream>
#include <iomanip>
using namespace std;
 

 int main() {
    int initialNumber, countHouses;

    cin >> initialNumber >> countHouses;

    int currentHouse = 0;

    int digits[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };

    int currentNumber;

    for(int i = initialNumber; currentHouse < countHouses;  i +=2){

        currentHouse += 1;
        currentNumber = i;

        cout << currentNumber << " ";

        while (currentNumber > 0){

            digits[currentNumber % 10] += 1;

            currentNumber /= 10;
        }
    }

        cout << endl << endl;


        for (int i = 0; i < 10; ++i){
            cout << digits[i] << " ";

        }
      
        cout << endl;

    return 0;
 }
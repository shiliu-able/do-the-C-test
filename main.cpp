#include <iostream>
#include "Second.h"
#include "Third.h"

using namespace std;

int main() {

    // Second second;
    //
    // second.showNameAndAddress("six", "here");
    //
    // second.showLonglength(20);
    //
    // second.oneHalf();
    //
    // second.twoHalf();
    //
    // second.showAgeMonths(22);
    //
    // second.showCelsius(20);
    //
    // second.showLightYear(4.2);
    //
    // second.showTime(9,28);

    Third third;

    cout << "Please enter the high: " << endl;
    int high;
    cin >> high;
    third.translateHigh(high);

    cout << "Please enter the highOne: " << endl;
    int highOne;
    cin >> highOne;
    cout << "Please enter the highTwo: " << endl;
    int highTwo;
    cin >> highTwo;
    cout << "Please enter the weight: " << endl;
    int weight;
    cin >> weight;
    third.highAndWeight(highOne, highTwo, weight);

    return 0;
}
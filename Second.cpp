//
// Created by 十六 on 2026/1/19.
//

#include "Second.h"

#include <iostream>
#include <ostream>

void Second::showNameAndAddress(string name, string address) {
    cout << name << endl;
    cout << address << endl;
}

void Second::showLonglength(int longlength) {
    cout << longlength * 220 << endl;
}

void Second::oneHalf() {
    for (int i = 0; i < 2; ++i) {
        cout << "Three blind mice" << endl;
    }
}

void Second::twoHalf() {
    for (int i = 0; i < 2; ++i) {
        cout << "See how they run" << endl;
    }
}

void Second::showAgeMonths(int age) {
    cout << age * 12 << endl;
}

void Second::showCelsius(double number) {
    cout << number * 1.8 + 32.0 << endl;
}

void Second::showLightYear(double year) {
    cout << year * 63240 << endl;
}

void Second::showTime(int hour, int minute) {
    cout << "Time: " << hour << ":" << minute << endl;
}



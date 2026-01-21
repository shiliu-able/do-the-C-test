//
// Created by 十六 on 2026/1/21.
//

#include "Third.h"

#include <iostream>
#include <ostream>

using namespace std;

namespace {
    const int translateHighNumber = 12;
    const double highTranslate = 0.0254;
    const double weightTranslate = 2.2;
}

void Third::translateHigh(int high) {

    cout << "The high number is " << high << endl;

}

void Third::highAndWeight(int highOne, int highTwo, int weight) {

    double high = (highOne * translateHighNumber + highTwo) * highTranslate;
    double weightNew = weight / weightTranslate;
    double bmi = weightNew / high / high;
    cout << "The BMI number is " << bmi << endl;

}

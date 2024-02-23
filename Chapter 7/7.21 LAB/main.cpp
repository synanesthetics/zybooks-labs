// 7.21 Triangle area comparison

#include <iostream>
#include "Triangle.h"
using namespace std;

int main() {
    Triangle triangle1;
    Triangle triangle2;

    double usrBase;
    double usrHeight;

    cin >> usrBase;
    cin >> usrHeight;

    triangle1.SetBase(usrBase);
    triangle1.SetHeight(usrHeight);

    cin >> usrBase;
    cin >> usrHeight;

    triangle2.SetBase(usrBase);
    triangle2.SetHeight(usrHeight);

    cout << "Triangle with smaller area:" << endl;

    if (triangle1.GetArea() > triangle2.GetArea()) {
        triangle2.PrintInfo();
    }
    else {
        triangle1.PrintInfo();
    }

    return 0;
}
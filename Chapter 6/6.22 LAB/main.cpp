// 6.22 Step counter

#include <iostream>
#include <iomanip>
using namespace std;

int FeetToSteps(double userFeet) {
    double steps = userFeet / 2.5;
    return static_cast<int>(steps);
}

int main() {

    double feet;
    cin >> feet;

    cout << FeetToSteps(feet) << endl;

    return 0;
}
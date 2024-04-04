// 6.24 Driving cost - functions

#include <iostream>
#include <iomanip>
using namespace std;

double DrivingCost(double milesPerGallon, double dollarsPerGallon, double milesDriven) {
    double gallons = milesDriven / milesPerGallon;
    
    return dollarsPerGallon * gallons;
}

int main() {

    double mpg;
    double dpg;

    cin >> mpg;
    cin >> dpg;

    cout << fixed << setprecision(2);

    cout << DrivingCost(mpg, dpg, 10) << " " << DrivingCost(mpg, dpg, 50) << " " << DrivingCost(mpg, dpg, 400)  << endl;

    return 0;
}
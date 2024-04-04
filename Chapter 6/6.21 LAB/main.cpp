// 6.21 Track laps to miles

#include <iostream>
#include <iomanip>
using namespace std;

double LapsToMiles(double laps) {
    return laps * 0.25;
}

int main() {

    double userLaps;
    cin >> userLaps;

    cout << fixed << setprecision(2);
    cout << LapsToMiles(userLaps) << endl;;

    return 0;
}
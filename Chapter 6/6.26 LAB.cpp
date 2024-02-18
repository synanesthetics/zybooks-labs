// 6.26 Max Magnitude

#include <iostream>
#include <cstdlib>
using namespace std;

int MaxMagnitude(int val1, int val2, int val3) {
    const int valCount = 3;

    int valArray[valCount] = {val1, val2, val3};
    int maxMag = val1;

    for (int i = 1; i < valCount ; i++)
    if (abs(valArray[i]) > abs(maxMag)) {
        maxMag = valArray[i];
    }

    return maxMag;
}

int main() {

    int usrVal1, usrVal2, usrVal3;
    cin >> usrVal1;
    cin >> usrVal2;
    cin >> usrVal3;

    cout << MaxMagnitude(usrVal1, usrVal2, usrVal3) << endl;

    return 0;
}
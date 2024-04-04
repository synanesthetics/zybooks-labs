// 6.25 Swapping Variables

#include <iostream>
using namespace std;

void SwapValues(int& userVal1, int& userVal2, int& userVal3, int& userVal4) {

    int temp;
    
    // swap first & second
    temp = userVal1;
    userVal1 = userVal2;
    userVal2 = temp;

    // swap third & fourth
    temp = userVal3;
    userVal3 = userVal4;
    userVal4 = temp;

}

int main() {

    int userVal1, userVal2, userVal3, userVal4;
    cin >> userVal1;
    cin >> userVal2;
    cin >> userVal3;
    cin >> userVal4;

    SwapValues(userVal1, userVal2, userVal3, userVal4);

    cout << userVal1 << " " << userVal2 << " " << userVal3 << " " << userVal4 << endl;

    return 0;
}
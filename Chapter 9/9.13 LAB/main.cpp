// 9.13 Overload operator<< for ostream

#include <iostream>

#include "Number.h"
using namespace std;

int main() {
    int input;
    cin >> input;

    Number num = Number(input);
    cout << num;

    return 0;
}
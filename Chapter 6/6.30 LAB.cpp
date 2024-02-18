// 6.30 Convert to binary - functions

#include <iostream>
#include <string>
using namespace std;

string IntToReverseBinary(int integerValue) {
    
    string reverseBinary;

    while (integerValue > 0) {
        reverseBinary.push_back(static_cast<char>((integerValue % 2) + 48));

        integerValue /= 2;
    }

    return reverseBinary;
}

string StringReverse(string input) {
    string output;

    for (int i = input.size() - 1; i >= 0; i--) {
        output.push_back(input[i]);
    }

    return output;
}

int main() {

    int usrInt;
    cin >> usrInt;

    cout << StringReverse(IntToReverseBinary(usrInt)) << endl;

    return 0;
}
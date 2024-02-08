#include <iostream>
#include <string>
using namespace std;

int main() {

    string userString;
    bool valid = true;

    cin  >> userString;

    for (int i = 0; i < userString.length(); i++) {
        if (!(isdigit(userString.at(i)))) {
            valid = false;
        }
    }

    if (valid) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}
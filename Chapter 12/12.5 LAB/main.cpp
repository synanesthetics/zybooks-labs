// 12.5 Exception handling to detect input string vs int

#include <string>
#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    string inputName;
    int age;
    // Set exception mask for cin stream
    cin.exceptions(ios::failbit);

    cin >> inputName;
    while(inputName != "-1") {
        
        try {

            cin >> age;
            cout << inputName << " " << (age + 1) << endl;

        }
        catch (ios_base::failure) {
            cout << inputName << " 0" << endl;
            cin.clear();
            string garbage;
            getline(cin, garbage);
        }

        cin >> inputName;
    }
   
    return 0;
}
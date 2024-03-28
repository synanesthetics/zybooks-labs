// 9.11 Warm up: Parsing strings

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    istringstream inputString;
    string line;
    string string1;
    string string2;
    bool continueLoop = true;

    cout << "Enter input string:" << endl;
    getline(cin, line);
    inputString.str(line);

    while (continueLoop) {

        bool validInput = true;

        inputString >> string1;

        if (string1 != "q") {

            if (string1.find(',') != string::npos) {
                if (string1.find(',') != string1.length() - 1) { // "Jill,Allen"
                    string2 = string1.substr(string1.find(',') + 1, string1.length() - string1.find(','));

                    string1 = string1.substr(0, string1.find(','));
                } 
                else { // "Jill, Allen"
                    inputString >> string2;

                    string1 = string1.substr(0, string1.length() - 1);
                }
            } 
            else { // "Jill , Allen"
                inputString >> string2;

                if (string2 == ",") {
                    inputString >> string2; // overwrite comma
                }
                else {
                    validInput = false;
                }

            }

            if(validInput) {
                cout << "First word: " << string1 << endl << "Second word: " << string2 << endl;
            }
            else {
                cout << "Error: No comma in string." << endl;
            }

            inputString.clear();
            cout << endl << "Enter input string:" << endl;
            getline(cin, line);
            inputString.str(line);

        }
        else {
            continueLoop = false;
            break;
        }
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
   string inputMonth;
   int inputDay;
   bool invalid = true;
   
   cin >> inputMonth;
   cin >> inputDay;
    
    if (inputDay > 0) {
        if (inputMonth == "January") {
            if (inputDay <= 31) {
                cout << "Winter";
                invalid = false;
            }
        }
        else if (inputMonth == "February") { 
            if (inputDay <= 28) {
                cout << "Winter";
                invalid = false;
            }
        }
        else if (inputMonth == "March") {
            if (inputDay <= 31) {
                if (inputDay < 20) {
                    cout << "Winter";
                }
                else {
                    cout << "Spring";
                }
                invalid = false;
            }
        }
        else if (inputMonth == "April") {
            if (inputDay <= 30) {
                cout << "Spring";
                invalid = false;
            }
        }
        else if (inputMonth == "May") {
            if (inputDay <= 31) {
                cout << "Spring";
                invalid = false;
            }
        }
        else if (inputMonth == "June") {
            if (inputDay <= 30) {
                if (inputDay < 21) {
                    cout << "Spring";
                }
                else {
                    cout << "Summer";
                }
                invalid = false;
            }
        }
        else if (inputMonth == "July") {
            if (inputDay <= 31) {
                cout << "Summer";
                invalid = false;
            }
        }
        else if (inputMonth == "August") {
            if (inputDay <= 31) {
                cout << "Summer";
                invalid = false;
            }
        }
        else if (inputMonth == "September") {
            if (inputDay <= 30) {
                if (inputDay < 22) {
                    cout << "Summer";
                }
                else {
                    cout << "Autumn";
                }
                invalid = false;
            }
        }
        else if (inputMonth == "October") {
            if (inputDay <= 31) {
                cout << "Autumn";
                invalid = false;
            }
        }
        else if (inputMonth == "November") {
            if (inputDay <= 30) {
                cout << "Autumn";
                invalid = false;
            }
        }
        else if (inputMonth == "December") {
            if (inputDay <= 31) {
                if (inputDay < 21) {
                    cout << "Autumn";
                }
                else {
                    cout << "Winter";
                }
                invalid = false;
            }
        }
    }

    if (invalid == true) {
        cout << "Invalid" << endl;
    }
    else {
        cout << endl;
    }

   return 0;
}
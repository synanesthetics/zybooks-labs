// 9.10 Parsing Dates

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int GetMonthAsInt(string month) {
	int monthInt = 0;
	
	if (month == "January")
		monthInt = 1;
	else if (month == "February")
		monthInt = 2;
	else if (month == "March")
		monthInt = 3;
	else if (month == "April")
		monthInt = 4;
	else if (month == "May")
		monthInt = 5;
	else if (month == "June")
		monthInt = 6;
	else if (month == "July")
		monthInt = 7;
	else if (month == "August")
		monthInt = 8;
	else if (month == "September")
		monthInt = 9;
	else if (month == "October")
		monthInt = 10;
	else if (month == "November")
		monthInt = 11;
	else if (month == "December")
		monthInt = 12;
	return monthInt;
}

int main () {
	
    string inputDate;
    istringstream date;
    string inputMonth;
    char commaTest;
    int inputDay;
    int inputYear;

    getline(cin, inputDate);
    date.str(inputDate);

    while(date >> inputMonth) {
        
        if(inputMonth == "-1") {
            break;
        }
        
        int monthNum = GetMonthAsInt(inputMonth);

        if(monthNum != 0) {
            date >> inputDay;
            
            date >> commaTest;

            date >> inputYear;

            if(!date.fail() && commaTest == ',') {
                cout << monthNum << "-" << inputDay << "-" << inputYear << endl;
            }
        }

        date.clear();
        getline(cin, inputDate);
        date.str(inputDate);
    }
	// TODO: Read dates from input, parse the dates to find the ones
	//       in the correct format, and output in m-d-yyyy format

}

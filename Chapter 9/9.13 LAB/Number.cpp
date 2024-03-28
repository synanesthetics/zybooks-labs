#include "Number.h"

#include <iostream>
#include <string>
using namespace std;

Number::Number(int number) {
    num = number; 
}

void Number::SetNum(int number) {
    num = number;
}

int Number::GetNum() {
    return num;
}

/* Type your code here */
ostream& operator<<(ostream &out, const  Number& n) {
    int num = n.num;
    string number = to_string(num);
    out << "The value is " << number << endl;
    
    return out;
}
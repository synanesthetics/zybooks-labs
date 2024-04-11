// 11.13 Count the digits

#include <iostream>
using namespace std;

int DigitCount(int number) {
   if (number / 10 == 0) {
      return 1;
   }
   else {
      return 1 + DigitCount(number / 10);
   }
}

int main() {
   int num;
   int digits;

   cin >> num;
   digits = DigitCount(num);
   cout << digits << endl;
   return 0;
}

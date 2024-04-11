// 11.12 Fibonacci sequence (recursion)

#include <iostream>
using namespace std;

int Fibonacci(int n) {
   
   if (n < 0) {
      return -1;
   }
   else if (n == 0) {
      return 0;
   }
   else if (n <= 2) {
      return 1;
   }
   else {
      return Fibonacci(n - 2) + Fibonacci(n - 1);
   }
      
}

int main() {
   int startNum;
   
   cin >> startNum;  
   cout << "Fibonacci(" << startNum << ") is " << Fibonacci(startNum) << endl;
   
   return 0;
}

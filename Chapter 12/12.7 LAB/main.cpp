// 12.7 Simple integer division - multiple exception handlers

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int userNum;
    int divNum;
    int result;
    cin.exceptions(ios::failbit);       // Allow cin to throw exceptions

    try {
        cin >> userNum;
        cin >> divNum;

        if (divNum == 0) {
            throw runtime_error("Divide by zero!");
        }

        cout << userNum / divNum << endl;
    }
    catch (ios_base::failure& excpt) {
        cout << "Input Exception: " << excpt.what() << endl;
    }
    catch (runtime_error& excpt) {
        cout << "Runtime Exception: " << excpt.what() << endl; 
    }

   return 0;
}

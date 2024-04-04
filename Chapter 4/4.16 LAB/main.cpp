// 4.16 Varied amount of input data

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int userInput;
    int cuml = 0;
    int max;
    int count = 0;
    double avg;

    cin >> userInput;

    while (userInput >= 0) {
        
        cuml += userInput;

        if (count == 0 || userInput > max) {
            max = userInput;
        }

        cin >> userInput;

        count++;
    }

    avg = static_cast<double>(cuml) / count;

    cout << fixed << setprecision(2) << max << " " << avg << endl;

    return 0;
}
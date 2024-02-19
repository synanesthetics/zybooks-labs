// 6.45 Fibonacci sequence

#include <iostream>
#include <vector>
using namespace std;

int Fibonacci(int n) {
   
    if (n > -1) {

        vector<int> sequence = {0, 1};

        for (int i = 1; i < n; i++) {
            sequence.push_back(sequence[i - 1] + sequence[i]);       
        }

        return sequence.at(n);
    }

    return -1;

}

int main() {
    int startNum;
        
    cin >> startNum;
    cout << "Fibonacci(" << startNum << ") is " << Fibonacci(startNum) << endl;

    return 0;
}

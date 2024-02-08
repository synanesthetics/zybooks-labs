#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int numCount;
    int input;
    int lowerBound;
    int upperBound;
    vector<int> numList;

    cin >> numCount;

    for (int i = 0; i < numCount; i++) {
        cin >> input;
        numList.push_back(input);
    }

    cin >> lowerBound;
    cin >> upperBound;

    for (int i = 0; i < numCount; i++) {
        if (lowerBound <= numList[i] && numList[i] <= upperBound) {
            cout << numList[i] << ",";
        }
    }
    
    cout << endl;
    
    return 0;
}
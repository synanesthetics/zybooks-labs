#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> numList;
    int input;
    int middle;
    int iterator = 0;

    cin >> input;

    while (input != -1) {
        if (iterator != 9) {
            numList.push_back(input);
            cin >> input;
        }
        else {
            cout << "Too many numbers" << endl;
            return 0;
        }

        iterator++;
    }

    middle = numList[numList.size() / 2];

    cout << "Middle item: " << middle << endl;

    return 0;
}
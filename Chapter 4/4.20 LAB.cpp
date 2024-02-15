// 4.20 Remove all non-alphabetic characters

#include <iostream>
#include <string>
using namespace std;

int main() {

    string input;
    string output;

    getline(cin, input);

    for (int i = 0; i < input.length(); i++) {
        if (isalpha(input[i])) {
            output.push_back(input[i]);
        }
    }

    cout << output << endl;

    return 0;
}
// 4.17 Count Characters

#include <iostream>
#include <string>
using namespace std;

int main() {

    char character;
    string word;
    int count = 0;

    cin >> character;
    getline(cin, word);

    for (int i = 0; i < word.length(); i++) {
        if (word.at(i) == character) {
            count++;
        }
    }

    if (count == 1) {
        cout << count << ' ' << character << endl;
    }
    else {
        cout << count << ' ' << character << "'s" << endl;
    }

    return 0;
}
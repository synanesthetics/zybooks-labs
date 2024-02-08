#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    
    int words;
    string input;
    vector<string> wordList;
    char letter;

    cin >> words;

    for (int i = 0; i < words; i++) {
        cin >> input;
        wordList.push_back(input);
    }

    cin >> letter;

    for (int i = 0; i < wordList.size(); i++) {
        if (wordList[i].find(letter) != string::npos) {
            cout << wordList[i] << ",";
        }
    }

    cout << endl;

    return 0;
}
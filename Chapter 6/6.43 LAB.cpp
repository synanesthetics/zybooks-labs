// 6.43 Authoring Assistant

#include <iostream>
#include <string>
using namespace std;

void PrintMenu() {
    cout << "MENU" << endl;
    cout << "c - Number of non-whitespace characters" << endl;
    cout << "w - Number of words" << endl;
    cout << "f - Find text" << endl;
    cout << "r - Replace all !'s" << endl;
    cout << "s - Shorten spaces" << endl;
    cout << "q - Quit" << endl;
}

int GetNumOfNonWSCharacters(const string text) {
    
    int count = 0;
    
    for (int i = 0; i < text.size(); i++) {
        if (!isspace(text[i])) {
            count++;
        }
    }

    return count;
}

int GetNumOfWords(const string text) {
    
    bool notspace;
    int words = 0;
    
    for (int i = 0; i < text.size(); i++) {
        if (!isspace(text[i])) {
            if ((i == text.size() - 1) && notspace) {
                words++;
                return words;
            }
            else {
                notspace = true;
                continue;
            }
        }

        if (notspace) {
            words++;
            notspace = false;
        }
    }

    return words;
}

void ExecuteMenu(char option, string text, bool& quit) {

    switch (option) {
        case 'q':
            quit = true;
            return void();
            break;
        case 'c':
            cout << endl << "Number of non-whitespace characters: " << GetNumOfNonWSCharacters(text) << endl << endl;
            break;
        case 'w':
            cout << endl << "Number of words: " << GetNumOfWords(text) << endl << endl;
            break;
        case 'f':
            break;
        case 'r':
            break;
        case 's':
            break;
    }
}

int main() {

    string usrInput;
    char usrOpt;
    bool quit = false;

    cout << "Enter a sample text:" << endl;
    getline(cin, usrInput);
    cout << endl;
    cout << "You entered: " << usrInput << endl;
    cout << endl;

    while (!quit){
        PrintMenu();
        cout << endl;
        cout << "Choose an option:" << endl;
        cin >> usrOpt;
        ExecuteMenu(usrOpt, usrInput, quit);
    }

    return 0;
}
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

int GetNumOfNonWSCharacters(const string& text) {
    
    int count = 0;
    
    for (int i = 0; i < text.size(); i++) {
        if (!isspace(text[i])) {
            count++;
        }
    }

    return count;
}

int GetNumOfWords(const string& text) {
    
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

int FindText(string phrase, const string& text) {
    
    int count = 0;

    for (int i = 0; i < text.size(); i++) {
        if (text[i] == phrase[0]) {
            for (int j = 0; j < phrase.size(); j++) {
                if (text[i+j] != phrase[j]) {
                    break;
                }
                
                if (j == phrase.size() - 1) {
                    count++;
                }
            }
        }
    }

    return count;
}

void ReplaceExclamation(string& text) {
    for (int i = 0; i < text.size(); i++) {
        if (text[i] == '!') {
            text[i] = '.';
        }
    }
}

void ShortenSpace(string& text) {
    for (int i = 0; i < text.size(); i++) {
        if (isspace(text[i])) {
            int j = 1;
            cout << i << ": ";
            while (isspace(text[i+j])) {
                cout << j << " ";
                text.erase(i+j, 1);
                j++;
            }
            i -= j - 1;
            cout << endl;
        }
    }
}

void ExecuteMenu(char option, string text) {

    string phrase;
    
    switch (option) {
        case 'c':
            cout << "Number of non-whitespace characters: " << GetNumOfNonWSCharacters(text);
            break;
        case 'w':
            cout << "Number of words: " << GetNumOfWords(text);
            break;
        case 'f':
            cin.ignore();
            cout << "Enter a word or phrase to be found:" << endl;
            getline(cin, phrase);

            cout << "\"" << phrase << "\" instances: " << FindText(phrase, text); 
            break;
        case 'r':
            ReplaceExclamation(text);
            cout << "Edited text: " << text;
            break;
        case 's':
            ShortenSpace(text);
            cout << "Edited text: " << text;
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
        if (usrOpt != 'q') {
            cout << endl;
            ExecuteMenu(usrOpt, usrInput);
            cout << endl << endl;
        }
        else {
            quit = true;
        }
    }

    return 0;
}
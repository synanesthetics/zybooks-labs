// 4.19 Password modifier

#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    char character;

    cin >> password;

    for (int i = 0; i < password.length(); i++) {
        character = password[i];

        switch (character) {
            case 'i':
                password[i] = '1';
                break;
            case 'a':
                password[i] = '@';
                break;
            case 'm':
                password[i] = 'M';
                break;
            case 'B':
                password[i] = '8';
                break;
            case 's':
                password[i] = '$';
                break;
        }
    }

    cout << password << "!" << endl;

    return 0;
}
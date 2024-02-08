#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    const int numInputs = 5; // n players 
    int input;
    char  menuInput;
    vector<int> jerseyNum;
    vector<int> ratingNum;

    for (int i = 0; i < numInputs; i++) {
        cout << "Enter player " << i + 1 << "'s jersey number:";
        cin >> input;
        jerseyNum.push_back(input);
        cout << endl;
        
        cout << "Enter player " << i + 1 << "'s rating:";
        cin >> input;
        ratingNum.push_back(input);
        cout << endl << endl;
    }

    cout << "ROSTER" << endl;

    for (int i = 0; i < numInputs; i++) {
        cout << "Player " << i + 1 << " -- Jersey number: " << jerseyNum[i] << ", Rating: " << ratingNum[i] << endl; 
    }
    cout << endl;

    do {
        cout << "MENU" << endl;
        cout << "a - Add player" << endl;
        cout << "d - Remove player" << endl;
        cout << "u - Update player rating" << endl;
        cout << "r - Output players above a rating" << endl; 
        cout << "o - Output roster" << endl;
        cout << "q - Quit" << endl;
        cout << endl;
        cout << "Choose an option:";
        cout << endl;

        cin >> menuInput;

        switch (menuInput) {
            case 'a': 
                cout << endl;

                cout << "Enter a new player's jersey number:";
                cin >> input;
                jerseyNum.push_back(input);
                cout << endl;
                
                cout << "Enter the player's rating:";
                cin >> input;
                ratingNum.push_back(input);
                cout << endl << endl;

                break;
            case 'd':

                cout << "Enter a jersey number:";
                cin >> input;

                for (int i = 0; i < jerseyNum.size(); i++) {
                    if (jerseyNum[i] == input) {
                        jerseyNum.erase(jerseyNum.begin() + i);
                        ratingNum.erase(ratingNum.begin() + i);
                    }
                }

                break;
            case 'u':
                break;
            case 'r':
                break;
            case 'o':
                
                cout << "ROSTER" << endl;
                for (int i = 0; i < jerseyNum.size(); i++) {
                    cout << "Player " << i + 1 << " -- Jersey number: " << jerseyNum[i] << ", Rating: " << ratingNum[i] << endl; 
                }
                cout << endl;

                break;
        }
    }
    while (menuInput != 'q');
    
    return 0;
}
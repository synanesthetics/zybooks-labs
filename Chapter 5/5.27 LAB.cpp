// 5.27 Soccer team roster

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    const int numInputs = 5; // n players 
    int input;
    char  menuInput;
    vector<int> jerseyNum;
    vector<int> ratingNum;

    for (int i = 0; i < numInputs; i++) { // get init 5 players
        cout << "Enter player " << i + 1 << "'s jersey number:";
        cin >> input;
        jerseyNum.push_back(input);
        cout << endl;
        
        cout << "Enter player " << i + 1 << "'s rating:";
        cin >> input;
        ratingNum.push_back(input);
        cout << endl << endl;
    }

    cout << "ROSTER" << endl; // output roster 
    for (int i = 0; i < numInputs; i++) {
        cout << "Player " << i + 1 << " -- Jersey number: " << jerseyNum[i] << ", Rating: " << ratingNum[i] << endl; 
    }
    cout << endl;

    do { // menu loop
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
        tolower(menuInput);

        switch (menuInput) {
            case 'a': // add new player
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
            case 'd': // remove / delete player

                cout << "Enter a jersey number:";
                cin >> input;

                for (int i = 0; i < jerseyNum.size(); i++) {
                    if (jerseyNum[i] == input) {
                        jerseyNum.erase(jerseyNum.begin() + i);
                        ratingNum.erase(ratingNum.begin() + i);
                    }
                }

                break;
            case 'u': // update player rating
                cout << "Enter a jersey number:";
                cin >> input;
                cout << endl;

                for (int i = 0; i < jerseyNum.size(); i++) {
                    if (jerseyNum[i] == input) {
                        cout << "Enter a new rating for player:";
                        cin >> input;
                        cout << endl;
                        ratingNum[i] = input;
                    }
                }
                break;
            case 'r': // above a rating
                cout << "Enter a rating:";
                cin >> input;
                cout << endl << endl;

                cout << "ABOVE " << input << endl;

                for (int i = 0; i < jerseyNum.size(); i++) {
                    if (ratingNum[i] > input) {
                        cout << "Player " << i + 1 << " -- Jersey number: " << jerseyNum[i] << ", Rating: " << ratingNum[i] << endl;
                    }
                }

                cout << endl;

                break;
            case 'o': // output roster
                cout << "ROSTER" << endl;
                for (int i = 0; i < jerseyNum.size(); i++) {
                    cout << "Player " << i + 1 << " -- Jersey number: " << jerseyNum[i] << ", Rating: " << ratingNum[i] << endl; 
                }
                cout << endl;

                break;
        }
    }
    while (menuInput != 'q'); // quit menu if q
    
    return 0;
}
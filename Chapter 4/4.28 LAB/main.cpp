// 4.28 Drawing a half arrow

#include <iostream>
using namespace std;

int main() {
    
    int row;
    int col;
    int headWidth;

    cin >> row >> col >> headWidth;

    while (headWidth <= col) {
        cin >> headWidth;
    }

    for (int i = row; i > 0; i--) {
        for (int j = col; j > 0; j--) {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = headWidth; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
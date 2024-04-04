// 6.27 Flip a coin

#include <iostream>
#include <cstdlib>
using namespace std;

string CoinFlip() {
   
    if (rand() % 2 == 1) {
        return "Heads";
    }
    else {
        return "Tails";
    }

    return "Error";
}

int main() {

    int count;
    cin >> count;

    srand(2);

    for (int i = 0; i < count; i++) {
        cout << CoinFlip() << endl;
    }

    return 0;
}
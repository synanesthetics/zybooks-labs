#include <iostream>
using namespace std;

int main() {
    
    int x = 5;
    int y = 7;

    x += y;
    y = x - y;
    x = x - y;

    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;

    return 0;
}
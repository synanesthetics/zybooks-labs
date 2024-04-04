// 10.11 Pet information (derived classes)

#include <iostream>
#include <string>

#include "Cat.h"

using namespace std;

int main() {
    string petName, catName, catBreed;
    int petAge, catAge;

    Pet myPet;
    Cat myCat;

    getline(cin, petName);
    cin >> petAge;
    cin.ignore();

    getline(cin, catName);
    cin >> catAge;
    cin.ignore();
    getline(cin, catBreed);

    myPet.SetName(petName);
    myPet.SetAge(petAge);

    myPet.PrintInfo();

    myCat.SetName(catName);
    myCat.SetAge(catAge);
    myCat.SetBreed(catBreed);

    myCat.PrintInfo();

    cout << "   Breed: " << myCat.GetBreed() << endl;

    return 0;
}

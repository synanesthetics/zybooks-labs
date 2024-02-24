#include "Artist.h"
#include <iostream>
#include <string>
using namespace std;

Artist::Artist() {
    artistName = "Unknown";
    birthYear = -1;
    deathYear = -1;
}

Artist::Artist(string artistName, int birthYear, int deathYear) {
    this->artistName = artistName;
    this->birthYear = birthYear;
    this->deathYear = deathYear;
}

string Artist::GetName() const {
    return artistName;
}


int Artist::GetBirthYear() const {
    return birthYear;
}

int Artist::GetDeathYear() const {
    return deathYear;
}

void Artist::PrintInfo() const {
    if (birthYear != -1) {
        if (deathYear != -1) {
            cout << "Artist: " << artistName << " (" << birthYear << " to " << deathYear << ")" << endl;
        }
        else {
            cout << "Artist: " << artistName << " (" << birthYear << " to present)" << endl;
        }
    }
}
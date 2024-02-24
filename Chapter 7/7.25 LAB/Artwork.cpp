#include "Artwork.h"
#include <iostream>

// TODO: Define default constructor
Artwork::Artwork() {
    title = "Unknown";
    yearCreated = -1;
}

Artwork::Artwork(string title, int yearCreated, Artist artist) {
    this->title = title;
    this->yearCreated = yearCreated;
    this->artist = artist;
}

string Artwork::GetTitle() {
    return title;
}

int Artwork::GetYearCreated() {
    return yearCreated;
}

void Artwork::PrintInfo() {
    
}
// TODO: Define PrintInfo() function
//       Call the PrintInfo() function in the Artist class to print an artist's information  
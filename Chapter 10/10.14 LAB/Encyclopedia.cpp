#include "Encyclopedia.h"
#include <iostream>

void Encyclopedia::SetEdition(string editionNum) {
    edition = editionNum;
}

void Encyclopedia::SetNumPages(int pages) {
    numPages = pages;
}

string Encyclopedia::GetEdition() {
    return edition;
}

int Encyclopedia::GetNumPages() {
    return numPages;
}

void Encyclopedia::PrintInfo() {
    Book::PrintInfo();

    cout << "   Edition: " << edition << endl;
    cout << "   Number of Pages: " << numPages << endl;
}
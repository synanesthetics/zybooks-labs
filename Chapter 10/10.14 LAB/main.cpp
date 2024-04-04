// 10.14 Book information (overriding member functions)

// read only

#include <iostream>
#include <string>

#include "Book.h"
#include "Encyclopedia.h"
using namespace std;

int main() {
    Book myBook;
    Encyclopedia myEncyclopedia;

    string title, author, publisher, publicationDate;
    string eTitle, eAuthor, ePublisher, ePublicationDate, edition;
    int numPages;

    getline(cin, title);
    getline(cin, author);
    getline(cin, publisher);
    getline(cin, publicationDate);

    getline(cin, eTitle);
    getline(cin, eAuthor);
    getline(cin, ePublisher);
    getline(cin, ePublicationDate);
    getline(cin, edition);
    cin >> numPages;

    myBook.SetTitle(title);
    myBook.SetAuthor(author);
    myBook.SetPublisher(publisher);
    myBook.SetPublicationDate(publicationDate);
    myBook.PrintInfo();

    myEncyclopedia.SetTitle(eTitle);
    myEncyclopedia.SetAuthor(eAuthor);
    myEncyclopedia.SetPublisher(ePublisher);
    myEncyclopedia.SetPublicationDate(ePublicationDate);
    myEncyclopedia.SetEdition(edition);
    myEncyclopedia.SetNumPages(numPages);
    myEncyclopedia.PrintInfo();

    return 0;
}
// 8.13 Library Book Sorting

#include <fstream>
#include <iostream>

#include "Book.h"
#include "BookNode.h"
#include "LinkedListLibrary.h"
#include "VectorLibrary.h"
using namespace std;

void FillLibraries(LinkedListLibrary &linkedListLibrary,
                   VectorLibrary &vectorLibrary) {
    ifstream inputFS;  // File input stream
    int linkedListOperations = 0;
    int vectorOperations = 0;

    BookNode *currNode;
    Book tempBook;

    string bookTitle;
    string bookAuthor;
    long long bookISBN;

    // Try to open file
    inputFS.open("books.txt");

    while (getline(inputFS, bookTitle)) {
        inputFS >> bookISBN;
        inputFS.ignore(1, '\n');
        getline(inputFS, bookAuthor);

        // Insert into linked list and accumulate operation counts
        currNode = new BookNode(bookTitle, bookAuthor, bookISBN);
        linkedListOperations += linkedListLibrary.InsertSorted(currNode);

        // Insert into vector and accumulate operation counts
        tempBook = Book(bookTitle, bookAuthor, bookISBN);
        vectorOperations += vectorLibrary.InsertSorted(tempBook);
    }

    inputFS.close();  // close() may throw ios_base::failure if fails
}

int main() {
    int linkedListOperations = 0;
    int vectorOperations = 0;

    // Create libraries
    LinkedListLibrary linkedListLibrary = LinkedListLibrary();
    VectorLibrary vectorLibrary;

    // Fill libraries with 100 books
    FillLibraries(linkedListLibrary, vectorLibrary);

    // Create new book to insert into libraries
    BookNode *currNode;
    Book tempBook;

    string bookTitle;
    string bookAuthor;
    long long bookISBN;

    getline(cin, bookTitle);
    cin >> bookISBN;
    cin.ignore();
    getline(cin, bookAuthor);

    // Insert into linked list
    // No need to delete currNode, deleted by LinkedListLibrary destructor
    currNode = new BookNode(bookTitle, bookAuthor, bookISBN);
    linkedListOperations = linkedListLibrary.InsertSorted(currNode);

    // Insert into VectorList
    tempBook = Book(bookTitle, bookAuthor, bookISBN);
    vectorOperations = vectorLibrary.InsertSorted(tempBook);

    cout << "Number of linked list book copy operations: "
         << linkedListOperations << endl;
    cout << "Number of vector book copy operations: " << vectorOperations
         << endl;
}
// read only

#include "LinkedListLibrary.h"

#include <iostream>

LinkedListLibrary::LinkedListLibrary() {
    // Front of nodes list
    headNode = new BookNode();
}

LinkedListLibrary::~LinkedListLibrary() {
    while (headNode != nullptr) {
        BookNode *tempNode = headNode->GetNext();
        delete headNode;
        headNode = tempNode;
    }
}

int LinkedListLibrary::InsertSorted(BookNode *newNode) {
    BookNode *currNode, nextNode;
    int counter = 0;

    // Special case for head node
    if (headNode->GetNext() == nullptr ||
        headNode->GetNext()->GetBookISBN() >= newNode->GetBookISBN()) {
        newNode->SetNext(headNode->GetNext());
        headNode->SetNext(newNode);
    } else {
        // Locate the node before insertion point
        currNode = headNode->GetNext();

        while (currNode->GetNext() &&
               currNode->GetNext()->GetBookISBN() < newNode->GetBookISBN()) {
            currNode = currNode->GetNext();
        }
        currNode->insertAfter(newNode);
    }

    ++counter;
    return counter;
}

void LinkedListLibrary::PrintLibrary() const {
    BookNode *currNode;

    currNode = headNode->GetNext();
    while (currNode != nullptr) {
        currNode->PrintBookInfo();
        cout << endl;
        currNode = currNode->GetNext();
    }
}
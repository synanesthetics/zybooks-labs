// 8.18 Warm up: Contacts

#include <iostream>
using namespace std;

class ContactNode {
public:
    ContactNode(string name, string number) {
        this->contactName = name;
        this->contactPhoneNumber = number;
    }

    string GetName() {
        return this->contactName;
    }

    string GetPhoneNumber() {
        return this->contactPhoneNumber;
    }

    void InsertAfter(ContactNode* newNode) {
        ContactNode* tempNode;
        tempNode = this->nextNodePtr;
        this->nextNodePtr = newNode;
        newNode->nextNodePtr = tempNode;
    };

    ContactNode* GetNext() {
        return this->nextNodePtr;
    }

    void PrintContactNode() {
        cout << "Name: " << this->contactName << endl;
        cout << "Phone number: " << this->contactPhoneNumber << endl;
    }
   
private:
    string contactName;
    string contactPhoneNumber;
    ContactNode* nextNodePtr;
};

int main() {
    /* Type your code here. */
    ContactNode* headNode;
    ContactNode* currNode;
    ContactNode* lastNode;

    headNode = new ContactNode("unknown", "-1");

    string userName;
    string userNumber;

    lastNode = headNode;

    for (int i = 0; i < 3; i++) {
        getline(cin, userName);
        getline(cin, userNumber);

        cout << "Person " << i+1 << ": " << userName << ", " << userNumber << endl;

        currNode = new ContactNode(userName, userNumber);
        lastNode->InsertAfter(currNode);
        lastNode = currNode;
    }
   
    cout << endl << "CONTACT LIST" << endl;
    lastNode = headNode;
    for (int i = 0; i < 3; i++) {
        currNode = lastNode->GetNext();
        currNode->PrintContactNode();
        cout << endl;
        lastNode = currNode;
    }

    return 0;
}

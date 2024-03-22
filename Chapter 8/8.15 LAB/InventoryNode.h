#include <iostream>
#include <string>
using namespace std;

class InventoryNode {
   private:
    string item;
    int numberOfItems;
    InventoryNode *nextNodeRef;

   public:
    // Constructor
    InventoryNode() {
        this->item = "head";
        this->numberOfItems = -1;
        this->nextNodeRef = nullptr;
    }

    // Constructor
    InventoryNode(string itemInit, int numberOfItemsInit) {
        this->item = itemInit;
        this->numberOfItems = numberOfItemsInit;
        this->nextNodeRef = nullptr;
    }

    // Constructor
    InventoryNode(string itemInit, int numberOfItemsInit, InventoryNode nextLoc) {
        this->item = itemInit;
        this->numberOfItems = numberOfItemsInit;
        this->nextNodeRef = &nextLoc;
    }

    void InsertAtFront(InventoryNode *headNode, InventoryNode *newNode) {
        InventoryNode *shiftNode = headNode->GetNext();
        headNode->nextNodeRef = newNode;
        newNode->nextNodeRef = shiftNode;
    }

    // Get the next node
    InventoryNode *GetNext() { return this->nextNodeRef; }

    // Print node data
    void PrintNodeData() {
        cout << this->numberOfItems << " " << this->item << endl;
    }
};
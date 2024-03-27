#ifndef MILEAGETRACKERNODEH
#define MILEAGETRACKERNODEH

#include <iostream>
#include <string>
using namespace std;

class ItemNode {
private:
	string item;
	ItemNode* nextNodeRef;

public:
	// Constructor
	ItemNode();

	// Constructor                                                                                     
	ItemNode(string itemInit);

	// Constructor        
   	ItemNode(string itemInit, ItemNode *nextLoc);

	// Insert node after this node.     
    void InsertAfter(ItemNode &nodeLoc);

    // Insert node at the end of the list
    void InsertAtEnd(ItemNode *nodeLoc); 


	// Get location pointed by nextNodeRef                                                             
	ItemNode* GetNext();

	// Print data of this node
	void PrintNodeData();

	// Get data of this node
	string GetNodeItem();
};

#endif
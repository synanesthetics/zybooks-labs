// read only

#include "MileageTrackerNode.h"

#include <iostream>

// Constructor
MileageTrackerNode::MileageTrackerNode() {
    miles = -1;
    date = "";
    nextNodeRef = nullptr;
}

// Destructor
MileageTrackerNode::~MileageTrackerNode() {
    if (nextNodeRef != nullptr) {
        delete nextNodeRef;
    }
}

// Constructor
MileageTrackerNode::MileageTrackerNode(double milesInit, string dateInit) {
    miles = milesInit;
    date = dateInit;
    nextNodeRef = nullptr;
}

// Constructor
MileageTrackerNode::MileageTrackerNode(double milesInit, string dateInit,
                                       MileageTrackerNode *nextLoc) {
    miles = milesInit;
    date = dateInit;
    nextNodeRef = nextLoc;
}

/* Insert node after this node.
Before: this -- next
After:  this -- node -- next
*/

void MileageTrackerNode::InsertAfter(MileageTrackerNode *nodeLoc) {
    MileageTrackerNode *tmpNext;
    tmpNext = nextNodeRef;
    nextNodeRef = nodeLoc;
    nodeLoc->nextNodeRef = tmpNext;
}

// Get location pointed by nextNodeRef
MileageTrackerNode *MileageTrackerNode::GetNext() { return nextNodeRef; }

void MileageTrackerNode::PrintNodeData() {
    cout << miles << ", " << date << endl;
}
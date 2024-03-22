// 8.14 Mileage tracker for runner

#include <iostream>
#include <string>

#include "MileageTrackerNode.h"

using namespace std;

int main() {
    // References for MileageTrackerNode objects
    MileageTrackerNode *headNode;
    MileageTrackerNode *currNode;
    MileageTrackerNode *lastNode;

    double miles;
    string date;
    int i;

    // Front of nodes list
    headNode = new MileageTrackerNode();
    // End of nodes list
    lastNode = headNode;

    cin >> i;
    while (i > 0) {
        cin >> miles;
        cin >> date;

        currNode = new MileageTrackerNode(miles, date);
        lastNode->InsertAfter(currNode);

        lastNode = currNode;
        i--;
    }

    currNode = headNode->GetNext();
    while (currNode != nullptr) {
        currNode->PrintNodeData();
        currNode = currNode->GetNext();
    }

    // MileageTrackerNode Destructor deletes all following nodes
    delete headNode;

    return 0;
}
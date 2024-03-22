#include "SongNode.h"

// Constructor
SongNode::SongNode(string songTitleInit, string songLengthInit,
                   string songArtistInit) {
    this->songTitle = songTitleInit;
    this->songLength = songLengthInit;
    this->songArtist = songArtistInit;
    this->nextNodeRef = nullptr;
}

// Constructor
SongNode::SongNode(string songTitleInit, string songLengthInit,
                   string songArtistInit, SongNode* nextLoc) {
    this->songTitle = songTitleInit;
    this->songLength = songLengthInit;
    this->songArtist = songArtistInit;
    this->nextNodeRef = nextLoc;
}

// insertAfter
void SongNode::InsertAfter(SongNode* nodeLoc) {
    SongNode* tmpNext;
    tmpNext = this->nextNodeRef;
    this->nextNodeRef = nodeLoc;
    nodeLoc->nextNodeRef = tmpNext;
}

// Get location pointed by nextNodeRef
SongNode* SongNode::GetNext() { return this->nextNodeRef; }

void SongNode::PrintSongInfo() {
    cout << "Title: " << this->songTitle << endl;
    cout << "Length: " << this->songLength << endl;
    cout << "Artist: " << this->songArtist << endl;
}
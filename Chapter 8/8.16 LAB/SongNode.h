#include <string>

#include "iostream"

using namespace std;

class SongNode {
   private:
    string songTitle;
    string songLength;
    string songArtist;
    SongNode* nextNodeRef;  // Reference to the next node

   public:
    SongNode() {
        songTitle = "-1";
        songLength = "";
        songArtist = "";
        nextNodeRef = nullptr;
    }

    // Constructor
    SongNode(string songTitleInit, string songLengthInit,
             string songArtistInit);

    // Constructor
    SongNode(string songTitleInit, string songLengthInit, string songArtistInit,
             SongNode* nextLoc);

    // insertAfter
    void InsertAfter(SongNode* nodeLoc);

    // Get location pointed by nextNodeRef
    SongNode* GetNext();

    // Prints song information
    void PrintSongInfo();
};
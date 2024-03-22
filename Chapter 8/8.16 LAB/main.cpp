// 8.16 Playlist (output linked list)

#include <iostream>
using namespace std;

#include "SongNode.h"

// TODO: Write PrintPlaylist() function
void PrintPlaylist(SongNode *head) {
    SongNode *currSong = head->GetNext();
    
    while(currSong != nullptr) {
        currSong->PrintSongInfo();
        currSong = currSong->GetNext();
        if (currSong != nullptr) {
            cout << endl;
        }
    }
}

int main() {
    SongNode* headNode;
    SongNode* currNode;
    SongNode* lastNode;

    string songTitle;
    string songLength;
    string songArtist;

    // Front of nodes list
    headNode = new SongNode();
    lastNode = headNode;

    // Read user input until -1  entered
    getline(cin, songTitle);
    while (songTitle != "-1") {
        getline(cin, songLength);
        getline(cin, songArtist);

        currNode = new SongNode(songTitle, songLength, songArtist);
        lastNode->InsertAfter(currNode);
        lastNode = currNode;

        getline(cin, songTitle);
    }

    // Print linked list
    cout << "LIST OF SONGS" << endl;
    cout << "-------------" << endl;
    PrintPlaylist(headNode);

    return 0;
}
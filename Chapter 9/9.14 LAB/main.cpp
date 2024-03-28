// 9.14 File name change

#include <cstring>
#include <fstream>
#include <iostream>

// Include any necessary libraries here.

using namespace std;

int main() {
    
    string listFilename;
    string itemFilename;
    ifstream filestream;
    const string suffix = "_photo.jpg";
    const string replacementSuffix = "_info.txt";

    cin >> listFilename;

    filestream.open(listFilename);

    if (!filestream.is_open()) {
        cout << "Error opening file" << endl;
        return 1;
    }

    while(!filestream.eof()) {

        filestream >> itemFilename;

        if (itemFilename.find(suffix) != string::npos) {

            itemFilename.erase(itemFilename.length() - suffix.length(), suffix.length());

            itemFilename.append(replacementSuffix);

            cout << itemFilename << endl;
        }

    }

    filestream.close();

    return 0;
}

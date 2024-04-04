#include "StringInstrument.h"

void StringInstrument::SetNumOfStrings(int strings) {
    numStrings = strings;
}

void StringInstrument::SetNumOfFrets(int frets) {
    numFrets = frets;
}

void StringInstrument::SetIsBowed(bool bowed) {
    isBowed = bowed;
}

int StringInstrument::GetNumOfStrings() {
    return numStrings;
}

int StringInstrument::GetNumOfFrets() {
    return numFrets;
}

bool StringInstrument::GetIsBowed() {
    return isBowed;
}
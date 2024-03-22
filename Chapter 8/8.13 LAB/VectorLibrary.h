// read only

#ifndef VECTORLIBRARYH
#define VECTORLIBRARYH

#include <vector>

#include "Book.h"
using namespace std;

class VectorLibrary {
   public:
    VectorLibrary();

    int InsertSorted(const Book &newBook);

    void PrintLibrary() const;

   private:
    // vector library
    vector<Book> library;
};

#endif
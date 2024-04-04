#ifndef ENCYCLOPEDIAH
#define ENCYCLOPEDIAH

#include "Book.h"

class Encyclopedia : public Book {
    private:
        string edition;
        int numPages;

    public:
        void SetEdition(string editionNum);
        void SetNumPages(int pages);

        string GetEdition();
        int GetNumPages();

        void PrintInfo();
};

#endif
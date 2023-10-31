#ifndef BOOKSORTED_H
#define BOOKSORTED_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class BookSorted
{
private:
    vector<string> books;
    ifstream inputFile;
public:
    bool exemOpenFil(const string& fileNameBook);

    void openFil();
   
    void sortFileBook();
   
    void saveFile();
};

#endif

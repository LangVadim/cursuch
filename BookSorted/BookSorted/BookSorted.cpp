#include "BookSorted.h"
#include <iostream>
#include <string>
/*#include <fstream>
#include <vector>
#include <algorithm>*/

using namespace std;

bool BookSorted::exemOpenFil(const string& fileNameBook) 
{
    inputFile.open(fileNameBook);

    return inputFile.is_open();
}

void BookSorted::openFil() 
{
    string line;
    while (getline(inputFile, line))
    {
        books.push_back(line);
    }
    inputFile.close();
}

void BookSorted::sortFileBook()
{
    sort(books.begin(), books.end());
}

void BookSorted::saveFile() 
{
    ofstream outputFile("sortBooks.txt");

    if (outputFile.is_open())
    {
        for (const auto& book : books)
        {
            outputFile << book << endl;
        }
        outputFile.close();
    }
    else
    {
        cout << "Невозможно создать sortBooks.txt" << endl;
    }

    outputFile.close();
}

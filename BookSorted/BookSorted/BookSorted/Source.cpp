#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "BookSorted.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    BookSorted bookSort;
    if (bookSort.exemOpenFil("book.txt"))
    {
        bookSort.openFil();
        bookSort.sortFileBook();
        bookSort.saveFile();
    }
    else
    {
        cout << "Не удалось открыть файл.";
    }

    return 0;
}
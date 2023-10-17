#include <iostream>
#include <fstream>  
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class freeCells 
{
private:
    char cimbol;
    string codeRack, number, maxMass;
    int cellRack;
    string s;
    int sumCellRack = 0;
    int quantityCell = 0;
public:
    void sumCell() 
    {
        ifstream fileInput1("rack.txt");
        if (!fileInput1.is_open())
        {
            cout << "Пошел нах" << endl;
        }
        else
        {
            while (!fileInput1.eof()) 
            {
                fileInput1 >> codeRack >> number >> cellRack >> maxMass;
                sumCellRack += cellRack;
            }
        }
        fileInput1.close();
    }
    void sumPos()
    {
        ifstream fileInput2("position.txt");
        if (!fileInput2.is_open())
        {
            cout << "Пошел нах" << endl;
        }
        else
        {
            while (!fileInput2.eof())
            {
                getline(fileInput2, s);
                for (auto c : s) 
                {
                    if (c == ';')
                    {
                        quantityCell++;
                    }
                }
            }
        }
        fileInput2.close();
    }
    void freeCell() 
    {
        ofstream fileOutput1("output.txt");

        fileOutput1 << "Свободных ячеек:\n" << sumCellRack - quantityCell;

        fileOutput1.close();
    }
};

class diagram
{
private:
    vector<string> massRack;
    vector<string> rack;
    string codeRack, number, cellRack, maxMass;
    string codePosition, codeCargo, mass, date;
public:
    void massOfRack()
    {
        ifstream fileInputRack("rack.txt");
        if (!fileInputRack.is_open())
        {
            cout << "Пошел нах" << endl;
        }
        else
        {
            while (!fileInputRack.eof())
            {
                fileInputRack >> codeRack >> number >> cellRack >> maxMass;
                rack.push_back(codeRack);
                rack.push_back(maxMass);
            }
        }
        fileInputRack.close();
    }
    
    void massCargo()
    {
        ifstream fileInputPosition("rack.txt");
        if (!fileInputPosition.is_open())
        {
            cout << "Пошел нах" << endl;
        }
        else
        {
            while (!fileInputPosition.eof())
            {
                fileInputPosition >> codePosition >> codeCargo >> codeRack >> number >> mass >> date;
                massRack.push_back(codeRack);
                massRack.push_back(mass);
            }
        }
        fileInputPosition.close();
    }

    void percentageOfMass()
    {
        ofstream fileProcentOut("procentOut");

        if (!fileProcentOut.is_open())
        {
            cout << "Пошел нах" << endl;
        }

        fileProcentOut.close();
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    freeCells a;
    a.sumCell();
    a.sumPos();
    a.freeCell();

    diagram y;

    return 0;
}

#ifndef TRADE_H
#define TRADE_H
#include "Header.h"

class Trade
{
private:

	std::vector<Manager> managers;
	std::string word;
public:
	void inputManagers();

	void sortManger();

	void printSort();
};

#endif // !TRADE_H


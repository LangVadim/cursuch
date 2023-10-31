#ifndef ORDER_H
#define ORDER_H

#include "Header.h"

class Order
{
private:
	int order_id;
	int manager_id;
	int client_id;
	std::string order_date;
	float amount;
public:
	Order();
};

#endif // !ORDER_H

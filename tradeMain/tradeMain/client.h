#ifndef CLIENT_H
#define CLIENT_H

#include "Header.h"

class Client 
{
private:
    int client_id;
    std::string name;
    std::string city;
    std::string rating;
    std::string manager_id;
public:
    Client();
};

#endif // !CLIENT_H


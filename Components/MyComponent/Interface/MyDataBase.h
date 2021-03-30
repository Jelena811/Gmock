#pragma once
#include "../Interface/DataBaseConnect.h"

class MyDataBase
{
    DataBaseConnect& dbc;
public:

    MyDataBase(DataBaseConnect& _dbc);

    int Init(std::string username, std::string password);

};
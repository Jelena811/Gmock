#pragma once
#include <iostream>
#include "../Interface/DataBaseConnect.h"
#include "../Interface/MyDataBase.h"

MyDataBase::MyDataBase(DataBaseConnect& _dbc): dbc{_dbc}
{}

int MyDataBase::Init(std::string username, std::string password)
{
    if(dbc.login(username,password) != true)
    {
        std::cout<<"DB Failure!!!"<<std::endl;
        return -1;
    }
    else
    {
        std::cout<<"DB Success!!!"<<std::endl;
        return 1;
    }
}
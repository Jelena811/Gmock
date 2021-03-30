#pragma once
#include<iostream>
#include<vector>
#include<string>
using namespace std;

//interfejs koji treba da implementira komponenta koju zelimo da testiramo
class DataBaseConnect 
{
public:
    virtual bool login(string username,string password)
    {
        return true;   
    }
    virtual bool logout(string username)
    {
        return true;   
    }
    virtual int fetchReccord()
    {
        return -1;   
    }
};
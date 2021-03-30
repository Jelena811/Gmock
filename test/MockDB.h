#include "gmock/gmock.h"
#include "../Components/MyComponent/Interface/DataBaseConnect.h"

/*
We create Mock class to substitute the original Connection class which Component uder test uses
Component class is MyDataBase
DataBaseConnect is class which we want to simulate with Mock class
Keep in mind - gtest will do these following implementations for us!
*/

class MockDB: public DataBaseConnect
{
public:
    MOCK_METHOD0(fetchRecord, int());
    MOCK_METHOD1(logout, bool (std::string username));
    MOCK_METHOD2(login, bool (std::string username,std::string password));

};
#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include <iostream>

#include "test/MockDB.h"
#include "../Components/MyComponent/Interface/MyDataBase.h"

using ::testing::AtLeast;
using ::testing::Return;
using ::testing::_;

TEST(MyDBTest,LoginTest)
{
    //Arrange
    MockDB mdb;
    MyDataBase db(mdb); // in this case MyDataBase is constructed with Mock class which will simulate its behaviour

        //To use a mock use EXPECT_CALL or ON_CALL Macros
        //Expect call expects login to be executed
    EXPECT_CALL(mdb,login(_,_)) // _ substitutes any parameter
        .Times(1)
        .WillOnce(Return(true)); //implementation of mock class will be desides by this

        // ON_CALL(mdb,login(_,_)).WillByDefault(Return(true)); 
        // This call need not to be executed but if it's executed it'll return true
        //On call is usefull when we don't know which function will be called so we setup a sequence

    //Act
    int retValue = db.Init("Jelena","Tosic");

    //Assert
    EXPECT_EQ(retValue,1);
}

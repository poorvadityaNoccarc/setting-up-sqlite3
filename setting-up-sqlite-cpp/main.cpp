// setting up sqlite with cpp
#include <iostream>
#include <sqlite3.h>
#include "utils/dbConfig.h"

using namespace std;


int main()
{
    cout<<"setting up sqlite with cpp..."<<endl;

    // db path 
    string dbPath ="/home/poorvaaditya/Desktop/cpp_practise/setting-up-sqlite-cpp/sqlite.db";
    
    Database dbObj(dbPath);

    // connect to database
    if(dbObj.connectDB())
    {
        cout<<"db connected"<<endl;

        // close db 
        if(dbObj.closeDB())
        {
            cout<<"db connection closed"<<endl;
        }
        else
        {
            cout<<"db was not able to close connection"<<endl;
        }
    }
    else{
        cout<<"db not connected"<<endl;
    }
    return 0;
}
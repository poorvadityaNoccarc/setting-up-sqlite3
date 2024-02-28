#include<sqlite3.h>
#include<string.h>
#include<iostream>


class Database 
{
    // members 
    private:
        sqlite3* db=nullptr; // pointer to store the database handle
        const char *dbPathName;
        int rc; // result of openning the database


    // member function 
    public:
        Database(std::string &dbPath);
        bool connectDB();
        bool closeDB();
};

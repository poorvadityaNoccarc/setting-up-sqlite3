#include<iostream>
#include<sqlite3.h>
#include "dbConfig.h"

Database::Database(std::string &dbPath)
{
    std::cout<<"calling database constructor"<<std::endl;
    dbPathName = dbPath.c_str();
    std::cout<<"dbPathName: "<< dbPathName <<std::endl;
}

bool Database::connectDB()
{
    std::cout<<"connecting with Database...."<<std::endl;
    
    rc = sqlite3_open(dbPathName,&db);

    if(rc)
    {
        std::cout<<"Not able to open database connection"<<std::endl;
        return false;
    }
    else
    {
        std::cout<<"successfully connected to database."<<std::endl;
        return true;
    }
}

bool Database::closeDB()
{
    std::cout<<"closing database connection..."<<std::endl;
    rc = sqlite3_close(db);

    if(rc)
    {
        std::cout<<"Not able to close database connection"<<std::endl;
        return false;
    }
    else
    {
        std::cout<<"successfully closed connection."<<std::endl;
        return true;
    }
}
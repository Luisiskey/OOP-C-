#include <iostream>
#include <string>
#ifndef RECORD_H
#define RECORD_H

class Record {
    public:
        Record(std::string cat,std::string bor,std::string st, int zip,int yr, );
        Record();
        void print () const;

    private:
    std::string street;
    int zipcode;
    std::string borough;
    int year;
    std::string category;
};
#endif

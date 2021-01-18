#include "Record.h"

Record::Record(std::string cat,std::string bor,std::string st, int zip,int yr, ){
        street = st;
        zipcode = zip;
        borough = bor;
        year = yr;
        category = cat;
}
void Record::print const{
    std::cout
        <<"\n\nSTREET" << street
        <<"\nZIPCODE"<< zipcode
        <<"\nBOROUGH" << borough
        <<"\nYEAR"<< year
        <<"\nCATEGORY"<< category<< "\n\n";
}
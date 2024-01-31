#ifndef AUTHOR_H_INCLUDED
#define AUTHOR_H_INCLUDED
#include <iostream>
using namespace std;

class Author{
public:
    Author(string, string, string);
    void setFname(string);
    string getFname();
    void setLname(string);
    string getLname();
    void setNation(string);
    string getNation();
    void print();
private:
    string fname;
    string lname;
    string nation;
};


#endif // AUTHOR_H_INCLUDED

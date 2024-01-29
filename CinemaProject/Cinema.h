#ifndef CINEMA_H_INCLUDED
#define CINEMA_H_INCLUDED
#include <string>
#include <vector>
#include <iostream>
#include "Hall.h"

using namespace std;

class Cinema{
public:
    Cinema(string, string, vector<Hall>);

    void setName(string);
    string getName();
    void setAddress(string);
    string getAddress();
    void setHallsList(vector<Hall>);
    vector<Hall> getHallsList();
    void addHallToList(Hall);
    void print();

private:
    string name;
    string address;
    vector<Hall> hallsList;


};


#endif // CINEMA_H_INCLUDED

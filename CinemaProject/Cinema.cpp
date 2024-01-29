#include "Cinema.h"
#include <iostream>
using namespace std;

Cinema::Cinema(string name, string address, vector<Hall> halls){
    setName(name);
    setAddress(address);
}

void Cinema::setName(string name){
    this->name = name;
}
string Cinema::getName(){
    return this->name;
}

void Cinema::setAddress(string address){
    this->address = address;
}

string Cinema::getAddress(){
    return this->address;
}












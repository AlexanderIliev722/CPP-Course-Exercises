#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include <iostream>

using namespace std;

class Employee{
private:
string name;
string employeeID;
string position;

public:
Employee(string = "", string = "", string = "");
void setName(string);
string getName();
void setID(string);
string getID();
void setPosition(string);
string getPosition();
void display();
};


#endif // EMPLOYEE_H_INCLUDED

#include "Employee.h"

using namespace std;

Employee::Employee(string n, string i, string p){
setName(n);
setID(i);
setPosition(p);
}

void Employee::setName(string n){
name = n;
}
string Employee::getName(){
return name;
}
void Employee::setID(string i){
employeeID = i;
}
string Employee::getID(){
    return employeeID;
}

void Employee::setPosition(string p){
position = p;

}
string Employee::getPosition(){
return position;
}
void Employee::display(){
cout << "Name: " << getName() << endl;
cout << "EmployeeID: " << getID() << endl;
cout << "Position: " << getPosition() << endl;
cout << endl;
}

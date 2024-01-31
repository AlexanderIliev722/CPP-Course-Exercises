#ifndef DEPARTMENT_H_INCLUDED
#define DEPARTMENT_H_INCLUDED
#include "Employee.h"

using namespace std;

class Department{
private:
string departmentName;
Employee *employees;
int numEmployees;

public:
Department(string departmentName = ""); //default is ""
~Department();
void addEmployee(Employee);
void displayEmployees();
};

#endif // DEPARTMENT_H_INCLUDED

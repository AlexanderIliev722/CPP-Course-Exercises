#include "Department.h"

using namespace std;

Department::Department(string departmentName){
this->departmentName = departmentName;
employees = new Employee[5];
numEmployees = 0; //on default is 0
}
Department::~Department(){
delete employees;
}

void Department::addEmployee(Employee employee){
if (numEmployees == 5){
        cout << "Department is full!" << endl;
        return;
        }
    employees[numEmployees] = employee;
    numEmployees++;
}

void Department::displayEmployees(){
for (int i = 0; i < numEmployees; i++){
    employees[i].display();
    }
}

#include <iostream>
#include "Employee.h"
#include "Department.h"

using namespace std;

int main()
{
Employee e1("Ivan", "1234567", "Programmer");
Employee e2("Sasho", "6464626", "QA");
Employee e3("John", "3124567", "Manager");
//e1.display();

Department d1("Audi");
d1.addEmployee(e1);
d1.addEmployee(e2);
d1.addEmployee(e3);
cout << "Employees of the company: " << endl;
d1.displayEmployees();

    return 0;
}

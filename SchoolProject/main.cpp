#include <iostream>
#include "Discipline.h"
#include "Teacher.h"

using namespace std;

int main()
{
Discipline dis("History", 45, 69);
Teacher t1("Ivan Ivanov", "Mr", dis);
t1.print();
    return 0;
}

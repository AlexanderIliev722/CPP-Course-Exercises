#ifndef TEACHER_H_INCLUDED
#define TEACHER_H_INCLUDED

#include <iostream>
#include <string>
#include "Discipline.h"
using namespace std;

class Teacher{
public:
Teacher(string, string, Discipline); //Discipline&
void print();

private:
string name;
string title;
Discipline discipline;
};

#endif // TEACHER_H_INCLUDED

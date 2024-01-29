#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class Student{
public:
Student(string, int);
void setName(string);
void setId(int);
string getName();
int getId();
void printInfo();

private:
string name;
int id;



};

#endif // STUDENT_H_INCLUDED

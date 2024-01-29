#ifndef DISCIPLINE_H_INCLUDED
#define DISCIPLINE_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;


class Discipline{
public:
Discipline(string, int, int);
void setName(string);
void setLectures(int);
void setExercises(int);
void printDiscipline();

private:
string name;
int lecturesCount;
int exercisesCount;

};

#endif // DISCIPLINE_H_INCLUDED

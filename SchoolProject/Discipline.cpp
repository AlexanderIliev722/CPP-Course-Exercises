#include "Discipline.h"


Discipline::Discipline(string name, int lectures, int exercises){
this->name = name;
this->lecturesCount = lectures;
this->exercisesCount = exercises;
}

void Discipline::printDiscipline(){
cout << this->name << " " << this->lecturesCount << " " << this->exercisesCount << endl;
}

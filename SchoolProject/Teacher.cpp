#include "Teacher.h"


Teacher::Teacher(string name, string title, Discipline discipline) //&discipline
: name(name), discipline(discipline){

    this->title = title; // moje i taka
}

void Teacher::print(){
    cout << "Teacher name:" << this->name << " title:" << this->title << " and discipline:"; this->discipline.printDiscipline();
}

#include "Student.h"

Student::Student(string name, int id){
setName(name);
setId(id);
}

void Student::setName(string name){
this->name = name;
}

void Student::setId(int id){
this->id = id;
}

void Student::printInfo(){
cout << "Student name: " << this->name << " and id: " << this->name << endl;
}

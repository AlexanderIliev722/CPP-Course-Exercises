#include "Shape.h"

using namespace std;

Shape::Shape(int a){
    this->a = a;
}

void Shape::setA(int a){
this->a=a;
}

int Shape::getA(){
return this->a;
}

void Shape::print(){
cout << getA() << endl;;
}

int Shape::calcArea(){
return 0;
}


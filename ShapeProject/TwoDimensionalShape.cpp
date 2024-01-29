#include "TwoDimensionalShape.h"

using namespace std;

TwoDimensionalShape::TwoDimensionalShape(int a, int size, int position, string shape, char ch) : Shape(a){
}

void TwoDimensionalShape::setSize(int size){
    this->size = size;
}
int TwoDimensionalShape::getSize(){
    return this->size;
}

void TwoDimensionalShape::setPosition(int p){
this->position = p;
}
int TwoDimensionalShape::getPosition(){
    return this->position;
}

void TwoDimensionalShape::setShape(string sh){
this->shape = sh;
}
string TwoDimensionalShape::getShape(){
    return this->shape;
}

void TwoDimensionalShape::setCh(char ch){
this->ch = ch;
}
string TwoDimensionalShape::getCh(){
    return this->ch;
}

void TwoDimensionalShape::print(){
//cout<< "2D side of shape: ";
Shape::print(); //ima endl na print() ot klasa Shape
}

int TwoDimensionalShape::calcArea(){
Shape::calcArea();
return 0;
}

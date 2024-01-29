#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(int a, int b, int size, int position, string shape, char char) : TwoDimensionalShape(a){
this->b = b;
}
void Rectangle::print(){
cout << "we are in rectangel"
TwoDimensionalShape::print(); // ili Shape::print()
}
int Rectangle::calcArea(){
    return getB() * getA();
}

void Rectangle::setB(int b){
    this->b = b;
}
int Rectangle::getB(){
    return this->b;
}

void Rectangle::setSize(int size){
    this->size = size;
}
int Rectangle::getSize(){
    return this->size;
}

void Rectangle::setPosition(int p){
this->position = p;
}
int Rectangle::getPosition(){
    return this->position;
}

void Rectangle::setShape(string sh){
this->shape = sh;
}
string Rectangle::getShape(){
    return this->shape;
}

void Rectangle::setCh(char ch){
this->ch = ch;
}
string Rectangle::getCh(){
    return this->ch;
}


void Rectangle::print(){
cout << "Side A of Rectangle is: ";
TwoDimensionalShape::print();
}
void Rectangle::printB(){
cout << "Side A of Rectangle is: " << this->b << endl;
}

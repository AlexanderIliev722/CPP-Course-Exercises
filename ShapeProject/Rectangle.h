#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include "TwoDimensionalShape.h"
#include <string>
#include <iostream>

using namespace std;

class Rectangle : public TwoDimensionalShape{
public:
Rectangle(int, int, int, int, string, char);
int calcArea(); //ne e zaduljitelno da gi pishem virtual zashtoto veche roditelskiq klas gi enapisal taka
void print();

void setB(int);
int getB();
void printB();

//void setSize(int);
//int getSize():
//
//void setPosition(int);
//int getPositon():
//
//void setShape(string);
//string getShape():
//
//void setCh(char);
//char getCh():

private:
int b;
//int size;
//int position;
//string shape;
//char ch;

};


#endif // RECTANGLE_H_INCLUDED

#ifndef TWODIMENSIONALSHAPE_H_INCLUDED
#define TWODIMENSIONALSHAPE_H_INCLUDED
#include "Shape.h"

using namespace std;

class TwoDimensionalShape : public Shape{
public:
TwoDimensionalShape(int, int, int, string, char);
virtual int calcArea();
virtual void print();
void setSize(int);
int getSize():

void setPosition(int);
int getPositon():

void setShape(string);
string getShape():

void setCh(char);
char getCh():

private:
int size2;
int position;
string shape;
char ch;

};



#endif // TWODIMENSIONALSHAPE_H_INCLUDED

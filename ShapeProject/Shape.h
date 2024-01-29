#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED
#include <iostream>

using namespace std;

class Shape{
public:
    Shape(int);
   virtual int calcArea();
   virtual void print();
   void setA(int);
   int getA();

private:
int a;

};


#endif // SHAPE_H_INCLUDED

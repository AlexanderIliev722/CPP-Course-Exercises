#ifndef SQUARE_H_INCLUDED
#define SQUARE_H_INCLUDED
#include "TwoDimensionalShape.h"

using namespace std;

class Square : public TwoDimensionalShape{
public:
Square(int);
virtual int calcArea();
virtual void print();


};



#endif // SQUARE_H_INCLUDED

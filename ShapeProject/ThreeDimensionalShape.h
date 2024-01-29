#ifndef THREEDIMENSIONALSHAPE_H_INCLUDED
#define THREEDIMENSIONALSHAPE_H_INCLUDED
#include "Shape.h"

using namespace std;

class ThreeDimensionalShape : public Shape{
public:
ThreeDimensionalShape(int, int );
virtual int calcArea();
virtual void print();
int calcVolume();
void setH(int);
int getH();

private:
int h;

};


#endif // THREEDIMENSIONALSHAPE_H_INCLUDED

#ifndef 2DSHAPE_H_INCLUDED
#define 2DSHAPE_H_INCLUDED
#include "Shape.h"

using namespace std;

class 2DShape : public Shape{
public:
2DShape(int);
virtual int calcArea();
virtual void print();

//private:


};


#endif // 2DSHAPE_H_INCLUDED

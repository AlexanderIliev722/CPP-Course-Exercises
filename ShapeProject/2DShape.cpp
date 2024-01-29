#include "2DShape.h"
#include <iostream>

using namespace std;

2DShape::2Dshape(int a) : Shape(a){
}

void 2DShape::print(){
cout << "In 2D " << "the side is: " << this->a << endl;
}

int 2DShape::calcArea(){
cout << "In 2D the area is: " << endl;
return 0;
}


#include "ThreeDimensionalShape.h"
#include <iostream>
using namespace std;

 ThreeDimensionalShape::ThreeDimensionalShape(int a, int h) : Shape( a) {
setH(h); //setH shte bude  i tva stava this->h = h;
}

 int ThreeDimensionalShape::calcArea(){
    cout << "3D shape area: " << getA()*getA()*getH() << endl; // this->h * this->h  i tva stava
}
 void ThreeDimensionalShape::print(){//za strana a
cout <<"3D side is: ";
Shape::print();
}
int ThreeDimensionalShape::calcVolume(){
    cout << "3D Shape volume";
}
void ThreeDimensionalShape::setH(int h){
    this->h = h;
}
int ThreeDimensionalShape::getH(){
    return this->h;
}





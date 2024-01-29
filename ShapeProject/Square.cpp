#include "Square.h"

using namespace std;

Square::Square(int a) : TwoDimensionalShape(a){
setA(a);
}
int Square::calcArea(){
   cout << "Area of Square is: " << getA() * getA() << endl; //TwoDimSHape::getA , ili SHape::getA
}

void Square::print(){
cout << "Side of square is: ";
TwoDimensionalShape::print();
}

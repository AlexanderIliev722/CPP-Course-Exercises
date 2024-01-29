#include <iostream>
#include "Shape.h"
#include "TwoDimensionalShape.h"
#include "ThreeDimensionalShape.h"
#include <vector>
#include "Square.h"
#include "Rectangle.h"
using namespace std;

int main()
{
  Shape *sPtr1 = new TwoDimensionalShape(30);
  Shape *sPtr2 = new ThreeDimensionalShape(15, 20);
  Shape *sPtr3 = new Square(10);
  Shape *sPtr4 = new Rectangle()

  vector <Shape *> myShapes;
  myShapes.push_back(sPtr1);
  myShapes.push_back(sPtr2);
  myShapes.push_back(sPtr3);
  myShapes.push_back(sPtr4);

  for(int i=0; i<myShapes.size();++i){
        myShapes.at(i)->print(); // (->) shtoto sa pointeri, a pri normalnoto e tochka(.)
        myShapes.at(i)->calcArea();
    }
    return 0;
}

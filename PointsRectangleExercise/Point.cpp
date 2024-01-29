#include "Point.h"
using namespace std;

Point::Point(int x, int y){
setX(x);
setY(y);

}
void Point::setX(int x)
{
if(this->x>=0 && this->x<=20){
this->x = x;
}

}

int Point::getX()
{
return this->x;
}

void Point::setY(int y)
{
if(this->y>=0 && this->y<=20){
this->y = y;
}
}

int Point::getY()
{
return this->y;
}

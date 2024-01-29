#include "Rectangle.h"

Rectangle::Rectangle(const Point& p1, const Point& p2, const Point& p3, const Point& p4) : p1(p1), p2(p2), p3(p3), p4(p4)
{

}
int Rectangle::calculateLength(int first, int second){
    return second - first;//second is always greater
}

bool Rectangle::isRectangle(){
if(this->p1.getX() == this->p3.getX() && this->p2.getX() == this->p4.getX()){// dvete tochki ednata otdolu i drugata otgore, toest otlqvo gore i dolu i otdqsno otgore i otdtolu
return true;
}
 return false;
}

bool Rectangle::isSquare(){
if(isRectangle()){
//check if sides are equal -> is square -> return true;
int sideA = calculateLength(p1.getX(), p2.getX());
int sideB = calculateLength(p1.getX(), p3.getX());//principno shte e if(calculateLength(p1.getX(),p2.getX() == calculateLength(p1.getX(),p3.getX())) po dobra praktika e
if(sideA == sideB){
    return true;
}
    }
    return false;
}

void Rectangle::setP1(const Point &p1)
{
this->p1 = p1;
}

const Point &Rectangle::getP1() const
{
return p1 ;
}

void Rectangle::setP2(const Point &p2)
{
this->p2 = p2;
}

const Point &Rectangle::getP2() const
{
return p2;
}

void Rectangle::setP3(const Point &p3)
{
this->p3 = p3;
}

const Point &Rectangle::getP3() const
{
return p3;
}

void Rectangle::setP4(const Point &p4)
{
this->p4 = p4;
}

const Point &Rectangle::getP4() const
{
return p4;
}

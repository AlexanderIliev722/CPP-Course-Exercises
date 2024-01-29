#include "Drinks.h"
#include <iostream>

using namespace std;

Drinks::Drinks(const string &n, const double &p, const double &q,const string &t)
: name(n), price(p), quantity(q), type(t){

}

void Drinks::setName(const string &n){
    name = n;
}
string Drinks::getName()const{
    return name;
}
void Drinks::setPrice(const double &p){
    price = p;
}
double Drinks::getPrice()const{
    return price;
}
void Drinks::setQuantity(const double &q){
    quantity = q;
}
double Drinks::getQuantity()const{
    return quantity;
}
void Drinks::setType(const string &t){
    type = t;
}
string Drinks::getType()const{
    return type;
}
void Drinks::print(){
    cout << getName() << " " << getPrice() << " " << getQuantity() << " " << getType() << " ";

}
double Drinks::calculatePrice(){
return 0;
cout << endl;
}


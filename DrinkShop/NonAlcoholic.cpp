#include "NonAlcoholic.h"

using namespace std;

NonAlcoholic::NonAlcoholic(const string &n, const double &p, const double &q, const string &t, double l, double ctx) : Drinks(n, p, q, t){
setLiters(l);
setCityTax(ctx);
}

void NonAlcoholic::setLiters(double l){
liters = l;
}

double NonAlcoholic::getLiters(){
return liters;
}

void NonAlcoholic::setCityTax(double ctx){
cityTax = ctx;
}

double NonAlcoholic::getCityTax(){
return cityTax;
}

void NonAlcoholic::print(){
Drinks::print();
cout << getLiters() << " " << getCityTax() << endl;
cout << "Calculated price is: " << calculatePrice() << endl;

}

double NonAlcoholic::calculatePrice(){
return getQuantity() * (getPrice() + getCityTax() );
}

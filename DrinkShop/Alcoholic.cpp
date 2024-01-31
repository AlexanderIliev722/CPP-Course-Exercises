#include "Alcoholic.h"

using namespace std;

Alcoholic::Alcoholic(const string &n, const double &p, const double &q, const string &t, double v, double tx) : Drinks(n, p, q, t){
setVolume(v);
setTax(tx);
}

void Alcoholic::setVolume(double v){
volume = v;
}

double Alcoholic::getVolume(){
return volume;
}

void Alcoholic::setTax(double tx){
tax = tx;
}

double Alcoholic::getTax(){
return tax;
}
void Alcoholic::print(){
Drinks::print();
cout << getVolume() << " " << getTax() << endl;
cout << "Calculated price is: " << calculatePrice() << endl;
}

double Alcoholic::calculatePrice(){
return getQuantity() * (getPrice() * getTax() );
}


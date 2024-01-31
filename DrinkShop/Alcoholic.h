#ifndef ALCOHOLIC_H_INCLUDED
#define ALCOHOLIC_H_INCLUDED
#include "Drinks.h"

using namespace std;

class Alcoholic : public Drinks{
public:
Alcoholic(const string&, const double&, const double&, const string&, double, double);
void setVolume(double);
double getVolume();
void setTax(double);
double getTax();
void print();
double calculatePrice();


private:
double volume;
double tax;

};

#endif // ALCOHOLIC_H_INCLUDED

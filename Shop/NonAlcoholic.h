#ifndef NONALCOHOLIC_H_INCLUDED
#define NONALCOHOLIC_H_INCLUDED
#include "Drinks.h"

using namespace std;

class NonAlcoholic : public Drinks{
public:
NonAlcoholic(const string&, const double&, const double&, const string&, double, double);
void setLiters(double);
double getLiters();
void setCityTax(double);
double getCityTax();
void print();
double calculatePrice();


private:
double liters;
double cityTax;

};



#endif // NONALCOHOLIC_H_INCLUDED

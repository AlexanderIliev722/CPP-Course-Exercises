#ifndef DRINKS_H_INCLUDED
#define DRINKS_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Drinks{
public:
Drinks(const string &, const double &, const double &, const string &);

void setName(const string &);
string getName() const;
void setPrice(const double &);
double getPrice() const;
void setQuantity(const double &);
double getQuantity() const;
void setType(const string &);
string getType() const;
virtual void print();
virtual double calculatePrice();

private:
string name;
double price;
double quantity;
string type;

};


#endif // DRINKS_H_INCLUDED

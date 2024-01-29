#ifndef ORDERS_H_INCLUDED
#define ORDERS_H_INCLUDED
#include "Drinks.h"
#include <vector>
#include <iostream>
using namespace std;

class Orders{
public:
Orders();

void setDrinks(const vector<Drinks*> &);
vector<Drinks*> getDrinks() const;
void setDate(const string &);
string getDate() const;
void setTotal(double);
double getTotal() const;
void print();

private:
vector<Drinks*> drinks;
string date;
double total;

};


#endif // ORDERS_H_INCLUDED

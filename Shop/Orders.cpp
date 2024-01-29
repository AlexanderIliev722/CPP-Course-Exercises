#include "Orders.h"
#include <iostream>

using namespace std;

//Orders::Orders() :
//drinks(vector<Drinks*>()), date(""), total(0.0) {}
Orders::Orders(){
}
void Orders::setDrinks(const vector<Drinks*> &drinks) {
this->drinks = drinks;
}

vector<Drinks*> Orders::getDrinks() const {
return drinks;
}

void Orders::setDate(const string &date) {
this->date = date;
}

string Orders::getDate() const {
return date;
}

void Orders::setTotal(double total) {
this->total = total;
}

double Orders::getTotal() const {
return total;
}

void Orders::print() {
 cout << "Поръчка: ";
  cout << "Напитки: ";
  for (Drinks* drink : getDrinks()) {
    cout << drink->getName() << " ";
  }
  cout << endl;
  cout << "Дата: " << getDate() << endl;
  cout << "Крайна сума: " << getTotal() << endl;
}


#include <iostream>
#include "Drinks.h"
#include "Alcoholic.h"
#include "NonAlcoholic.h"
#include <vector>
#include "Orders.h"
#include "User.h"
using namespace std;

int main()
{

Drinks *alc = new Alcoholic("jin", 15, 2, "a", 2,3);
alc->print();

Drinks *nonalc = new NonAlcoholic("orange", 10, 2, "b", 3, 4);
nonalc->print();
vector<Drinks*> drinks;
drinks.push_back(alc);
drinks.push_back(nonalc);

Orders order;
order.setDrinks({drinks});
order.setDate("2023-07-20");
order.setTotal(order.getDrinks()[0]->calculatePrice()); // Задаване на крайната сума
//  // Отпечатване на поръчката
//  cout << "Поръчка: ";
//  cout << "Напитки: ";
//  for (Drinks* drink : order.getDrinks()) {
//    cout << drink->getName() << " ";
//  }
//  cout << endl;
//  cout << "Дата: " << order.getDate() << endl;
//  cout << "Крайна сума: " << order.getTotal() << endl;
order.print();
  User us1("Alexander", order);
  us1.print();

    return 0;
}

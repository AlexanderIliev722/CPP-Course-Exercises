#include <iostream>
#include <vector>
#include "User.h"
using namespace std;

User::User() {}
User::User(const string &username, Orders* ord) {
  this->username = username;
  addOrder(ord);
}

string User::getUsername() const {
  return username;
}

void User::setUsername(const string &username) {
  this->username = username;
}
void User::setOrders(const vector<Orders*> &orders) {
this->orders = orders;
}
void User::addOrder(Orders* obj){
    orders.push_back(obj);
}

vector<Orders*> User::getOrders() const {
return orders;
}


void User::print() {
  cout << "Username: " << username << endl;

  cout << "Orders: " << endl;

  for (Orders *order : getOrders()) {
    order->print();
  }
}




#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED
#include "Orders.h"
#include <iostream>
#include <vector>

using namespace std;

class User {
public:
User() ;
User(const string &, Orders* &);

  string getUsername() const;
  void setUsername(const string&);

  vector<Orders*> getOrders() const;
  void setOrders(const vector<Orders*>&);

  void addOrder(Orders* );
  void removeOrder(Orders);
void print();
private:
  string username;
  vector<Orders*> orders;
};


#endif // USER_H_INCLUDED

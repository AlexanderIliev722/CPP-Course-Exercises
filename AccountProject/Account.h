#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED

#include <iostream>
using namespace std;

class Account{
public:
Account(unsigned);// bqha double vsichki
void credit(unsigned);
void debit(unsigned);
double getBalance();


private:

unsigned balance;

};


#endif // ACCOUNT_H_INCLUDED

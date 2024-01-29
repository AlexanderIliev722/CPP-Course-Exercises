#include "Account.h"

Account::Account(unsigned balance){// bqha double
if(balance >= 0){
    this->balance = balance;
} else {
    this->balance = 0;
    cerr << "Invalid inital balance" << endl;

    }
}

void Account::credit(unsigned amount){
if(amount >= 0){
    this->balance += amount;
} else{
    cerr << "Credit amount is invalid" << endl;
}

}

void Account::debit(unsigned amount){
if(amount <= this->balance){
    this->balance -= amount;
} else {
    cerr << "Debit amount exceeded account balance" << endl;
    }
}

double Account::getBalance(){
    return this->balance;
}


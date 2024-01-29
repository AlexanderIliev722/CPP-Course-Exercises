#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class User{
public:
User(string, string);
void setName(string);
string getName();
void setPass(string);
string getPass();


string name;
string password;
};


#endif // USER_H_INCLUDED

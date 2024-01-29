#include "User.h"
#include <string>
using namespace std;

User::User(string n, string p){
setName(n);
setPass(p);
}

void User::setName(string n){
name = n;
}


void User::setPass(string p){
if(p.length() > 5 && p.length() < 15){
password = p;
} else {
cout << "No such password";
}
}

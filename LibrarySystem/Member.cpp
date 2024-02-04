#include "Member.h"

using namespace std;

Member::Member(string name, int age, string memberID){
setName(name);
setAge(age);
setMemberID(memberID);
}

void Member::setName(string n){
name = n;
}
string Member::getName(){
return name;
}
void Member::setAge(int a){
age = a;
}
int Member::getAge(){
return age;
}
void Member::setMemberID(string m ){
memberID = m;
}
string Member::getMemberID(){
return memberID;
}
void Member::display(){
    cout << "Name: " << getName() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "MemberID: " << getMemberID() << endl;
    cout << endl;
}
void Member::borrowBook(Book *book){
cout << name <<" borrowed the book: " << book->getTitle() << endl;
}



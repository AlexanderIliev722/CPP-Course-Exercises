#ifndef MEMBER_H_INCLUDED
#define MEMBER_H_INCLUDED
#include <iostream>
#include "Book.h"

using namespace std;

class Member{
private:
string name;
int age;
string memberID;

public:
Member(string name = "", int age = 0, string memberID = "");
void setName(string );
string getName();
void setAge(int );
int getAge();
void setMemberID(string );
string getMemberID();
void display();
void borrowBook(Book *book);

};

#endif // MEMBER_H_INCLUDED

#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED
#include <iostream>

using namespace std;

class Book{
private:
string title;
string author;
string ISBN;

public:
Book(string title = "", string author = "", string ISBN = "");

void setTitle(string );
string getTitle();
void setAuthor(string );
string getAuthor();
void setISBN(string );
string getISBN();
void display();


};


#endif // BOOK_H_INCLUDED

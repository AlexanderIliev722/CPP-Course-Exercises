#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED
#include "Author.h"


class Book{
public:
Book(string, int, string, Author);
void setName(string);
string getName();

void setYear(int);
int getYear();

void setGenre(string);
string getGenre();

void setAuthor(Author);
Author getAuthor();



private:
string name;
int year;
string genre;
Author author;


};



#endif // BOOK_H_INCLUDED

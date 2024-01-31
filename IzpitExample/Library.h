#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED
#include "Book.h"
#include <vector>
#include <iostream>

using namespace std;

class Library{
public:
    void addBookToBooksVector(Book);
    void print();
    void findBookByName(string);
private:
vector<Book> books;

};

#endif // LIBRARY_H_INCLUDED

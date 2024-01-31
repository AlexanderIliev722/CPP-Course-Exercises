#include "Library.h"
#include <iostream>
using namespace std;

void Library::addBookToBooksVector(Book b){
this->books.push_back(b);
}

void Library::print(){
    for(Book b : book){
        book.print();
    }
}

void Library::findBookByName(string text){
    for(Book book : books){
        if(book.getName().find(text) != string::npos){ // ili != -1
            cout << "Found the book" << endl;
            book.print();
        }
    }
}

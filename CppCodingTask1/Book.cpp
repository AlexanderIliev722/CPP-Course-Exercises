#include "Book.h"
#include <iostream>
using namespace std;

Book::Book(string title, string author , string ISBN ){
setTitle(title);
setAuthor(author);
setISBN(ISBN);
}

void Book::setTitle(string title){
    this->title = title;
}
string Book::getTitle(){
    return this->title;
}
void Book::setAuthor(string author){
    this->author = author;
}
string Book::getAuthor(){
    return this->author;
}
void Book::setISBN(string ISBN){
    this->ISBN = ISBN;
}
string Book::getISBN(){
    return this->ISBN;
}
void Book::display(){
    cout << "Title: " << getTitle() << endl;
    cout << "Author: " << getAuthor() << endl;
    cout << "ISBN: " << getISBN() << endl;
    cout << endl;
}


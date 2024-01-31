#include "Book.h"

Book::Book(string title,  int y, string genre, Author a) : author(a){
this->name = title;
this->year = y;
this->genre = genre;

}
void Book::print(){
cout << this->title << " " << this->year << " " << this->genre << endl;
author.print();
}

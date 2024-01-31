//#include <iostream
//
//using namespace std;
//
//class Genre{
//public:
//    Genre(string, string, string string, string);
//};
#include "Genre.h"

using namespace std;

Genre::Genre(int name){
setGenre(name);
}
void Genre::setGenre(name){
genre = name;
}
int Genre::getGenre(){
return genre;
}
void Genre::print(){
    cout << getGenre();
}

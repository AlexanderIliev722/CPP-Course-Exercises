#include <iostream>
#include "Author.h"
#include "Genre.h"
using namespace std;

int main()
{
  enum Genre{CLASSIC, CRIME, FANTASY };
//    string genreNames[] = {"Classic", "Fantasy"};
//    int g;
//    cout << "Ако искаш Classic - Въведи: 1,
//            "Ако искаш Classic - Въведи: 2";
//    cin >> g;
//    switch(g){
//    case CLASSIC:
//        cout << genreNames[0];
//        break;
//    case CLASSIC:
//        cout << genreNames[1];
//        break;
//    }
Genre gen; // ДА ГО ПОМИСЛЯ
string genre;
int choice;
cout << "Enter genre " << endl;
cin >>  genre;
switch(chooice){
case 0:
case 1:
case 2:
    cout << "genre is ok";
    default:
    cout << "INvalid";
}

Author a1("Angel", "Karter", "EN");
Genre g1(g);
g1.print();


    return 0;
}

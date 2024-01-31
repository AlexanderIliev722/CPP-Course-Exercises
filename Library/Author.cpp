#include "Author.h"

using namespace std;

Author::Author(string fname, string lname, string nat ){
setFname(fname);
setLname(lname);
setNation(nat);
}

    void Author::setFname(string fname){
    this->fname = fname;


    }
    string Author::getFname(){
        return this->fname;
    }
    void Author::setLname(string lname){
        this->lname = lname;

    }
    string Author::getLname(){
        return this->lname;

    }
    void Author::setNation(string nat){
        this->nation = nat;

    }
    string Author::getNation(){
        return this->nation;

    }

    void Author::print(){
        cout << getFname() << " ";
        cout << getLname() << " ";
        cout << getNation() << " ";


    }

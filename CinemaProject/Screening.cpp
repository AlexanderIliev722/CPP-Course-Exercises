#include "Screening.h"

using namespace std;

Screening::Screening(string name, int tickets){
setMovieName(name);
setSoldTickets(tickets);

}

void Screening::setMovieName(string name){
    if(name.length() >= 5){
        this->movieName = name;
    }
}

void Screening::setSoldTickets(int tickets){
    if(tickets >= 0){
        this->soldTickets = tickets;
    } else{
        cerr << "Movie name too short" << endl;
    }
}

string Screening::getMovieName(){
    return this->movieName;
}

int Screening::getSoldTickets(){
    return this->soldTickets;
}

void Screening::print(){
cout << "Projection is:"
        << getMovieName()<< " "//tq beshe napisala this-> pred metodite
        << getSoldTickets()<< " " << endl;
}



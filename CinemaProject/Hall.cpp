#include "Hall.h"
#include <vector>
using namespace std;

Hall::Hall(string name, int capacity){
setName(name);
setSeats(capacity);
}

Hall::Hall(string name, int seats, vector<Screening> screeningList)
    /*: screeningList(screeningList)*/ {
   setName(name);
   setSeats(seats);
   setScreeningList(screeningList);
   //Hall(name, seats); sushto stava
}

void Hall::addScreening(Screening obj){//screening sushto moje, tva e parametur za obekt ot tip Screening
    //this->screeningList.push_back(obj);
}

void Hall::print(){
    cout << "Hall is: " << this->name << " with " << this->seats << "seats"<< " ";
    for(int i=0; i<screeningList.size();++i){
        this->screeningList.at(i).print();
    }
}
void Hall::setScreeningList(vector<Screening> screeningList){
    this->screeningList = screeningList;
}

vector<Screening> Hall::getScreeningList(){
    return this->screeningList;
}

void Hall::setName(string name){
    this->name = name;
}

void Hall::setSeats(int capacity){
    this->seats = capacity;
}

#ifndef HALL_H_INCLUDED
#define HALL_H_INCLUDED
#include <iostream>
#include "Screening.h"
#include <vector>

using namespace std;

class Hall{
public:
    Hall(string, int);
    Hall(string, int, vector<Screening>);
    void setScreeningList(vector<Screening>);
    vector<Screening> getScreeningList();
    void addScreening(Screening);
    void setName(string);
    void setSeats(int);
    void print();
private:

    string name;
    int seats;
    vector<Screening>screeningList;



};

#endif // HALL_H_INCLUDED

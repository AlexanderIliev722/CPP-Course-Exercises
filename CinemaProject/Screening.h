#ifndef SCREENING_H_INCLUDED
#define SCREENING_H_INCLUDED

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Screening{
public:
    Screening(string, int);
    void setMovieName(string);
    string getMovieName();
    void setSoldTickets(int);
    int getSoldTickets();
    void print();

private:
    string movieName;
    int soldTickets;
};

#endif // SCREENING_H_INCLUDED

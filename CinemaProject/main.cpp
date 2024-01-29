#include <iostream>
#include "Screening.h"
#include "Hall.h"

using namespace std;

int main()
{
    Screening sc1("Star Wars", 10);
    Screening sc2("Terminator", 30);

    vector<Screening>screenings;
    vector<Screening>screenings2;

    screenings.push_back(sc1);
    screenings.push_back(sc2);

    Screening sc3("Indiana Jones", 40);
    Screening sc4("Find Nemo", 50);
    screenings2.push_back(sc3);
    screenings2.push_back(sc4);

    Hall h1("Hall 8", 80, screenings);
    //Hall h2("Hall 9", 50, screenings);
    Hall h3("Hall 10", 100, screenings2);
    h1.print();
    //h2.print();
    h3.print();
    Screening sc5("CSKA vs Levski", 55);
    h3.addScreening(sc5);
    h3.print();



    return 0;
}

#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED

#include <iostream>
#include <vector>
using namespace std;

class Car

{

public:

    Car(string, int, string, string, string, string, string);

    void setModel(string);
    string getModel();

    void setYear(int);
    int getYear();

    void setColor(string);

    void setFuel(string);

    void setVIN(string);

    void setTransmission(string);

    void setPlate(string);

    void displayMessage();



private:

    string model;

    int year;

    string color;

    string fuel;

    string vin;

    string transmission;

    string plate;

};


#endif // CAR_H_INCLUDED

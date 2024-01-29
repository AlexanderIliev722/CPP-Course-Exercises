#ifndef TEAM_H_INCLUDED
#define TEAM_H_INCLUDED

#include <string>
#include <iostream>

using namespace std;

class Team{
public:
Team(string, string);

void setName(string);
string getName();
void setCity(string);
string getCity();
void updatePoints(int);
int getPoints();

private:
string name;
string city;
int points;

};

#endif // TEAM_H_INCLUDED

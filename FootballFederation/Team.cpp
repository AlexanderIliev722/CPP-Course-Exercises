#include "Team.h"
#include <string>
using namespace std;

Team::Team(string n, string c){
setName(n);
setCity(c);
points = 0;
}

void Team::setName(string n){
name = n;
}

string Team::getName(){
return name;
}

void Team::setCity(string c){
city = c;
}
string Team::getCity(){
return city;
}

void Team::updatePoints(int p){
points += p;
}

int Team::getPoints(){
return points;
}

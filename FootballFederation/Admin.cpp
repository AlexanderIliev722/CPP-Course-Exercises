#include "Admin.h"
#include <vector>
using namespace std;

Admin::Admin(string n, string pass) : User(name, password){}

void Admin::addTeam(Team t){
teams.push_back(t);
}
void Admin::updateTeam(Team t){
teams += t;
}
vector<Team> Admin::getTeams(){
return teams;
}

void Admin::removeTeam(Team t){
string teamName = t.getName();
for(int i=0; i < teams.size(); i++){
if(teams.at(i).getName() == teamName){
            teams.erase(teams.begin()+i);
        }
    }
}

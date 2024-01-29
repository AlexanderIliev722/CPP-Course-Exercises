#ifndef ADMIN_H_INCLUDED
#define ADMIN_H_INCLUDED
#include "User.h"
#include "Team.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Admin : public User{
public:
Admin(string, string);
void addTeam(Team);
void removeTeam(Team);
void updateTeam(Team);
vector<Team> getTeams();
private:
vector<Team> teams;


};

#endif // ADMIN_H_INCLUDED

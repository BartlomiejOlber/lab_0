//============================================================================
// Name        : lab_0.cpp
// Author      : d
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "league.hpp"
#include "team.hpp"
using namespace std;

int main() {
	League::League* a = new League::League;
	Team::Team* stoke = new Team::Team("Stoke");
	a->round_simulate();
	std::string derby = "Derby County";
	if((*stoke = derby)) 
	   a->display_table();
	stoke->print();
	delete stoke; 
	delete stoke;
	return 0;
}

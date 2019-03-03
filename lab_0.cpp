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
	League::League a;
	a.round_simulate();
	a.display_table();
	return 0;
}

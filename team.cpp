/*
 * team.cpp
 *
 *  Created on: Mar 2, 2019
 *      Author: bartlomiej
 */

#include <string>
#include <random>
#include <iostream>
#include "team.hpp"

namespace Team{

Team::Team(std::string name_string, int pts){

	points = pts;
	name = name_string;
}

void Team::game( Team& away){

	std::random_device rd; // obtain a random number from hardware
	std::mt19937 eng(rd()); // seed the generator
	std::uniform_int_distribution<> distr(0, 2); // define the range
	int result = distr(eng);
	if(!result ){
		points+=3;
	}else if(result == 1 ){
		points++;
		away.points++;
	}else
		away.points+=3;
}

void Team::print(){
	std::cout << name << " " << points << std::endl;
}

}



/*
 * team.cpp
 *
 *  Created on: Mar 2, 2019
 *      Author: bartlomiej
 */

#include <string>
#include <ctime>
#include <iostream>
#include "team.hpp"

namespace Team{

Team::Team(std::string name_string, int pts, int standing ){

	points = pts;
	place = standing;
	name = name_string;
}

void Team::game( Team& away){
	int result = 0;
	srand(time(0));
	result = rand()%3;
	if(!result ){
		points+=3;
	}else if(result == 1 ){
		points++;
		away.points++;
	}else
		away.points+=3;
}

void Team::print(){
	std::cout << place << ". " << name << " " << points << std::endl;
}

}



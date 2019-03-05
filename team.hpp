/*
 * team.hpp
 *
 *  Created on: Mar 2, 2019
 *      Author: bartlomiej
 */

#ifndef TEAM_HPP_
#define TEAM_HPP_

#include <string>

namespace Team {

class Team {

public:
	std::string name;
	int points;
	Team(std::string,int = 0);
	void game( Team& );
	void print();
	bool operator > (const Team& other )const{
		return points>other.points;
	}
	bool operator = (int);
	bool operator = (std::string);
};

inline bool Team::operator = ( int value ) {
	
	name = std::to_string(value);
	return value;
}

inline bool Team::operator = (std::string ns){

	name = ns;
	return 1;
}
}



#endif /* TEAM_HPP_ */

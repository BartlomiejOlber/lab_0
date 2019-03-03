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
};

}



#endif /* TEAM_HPP_ */

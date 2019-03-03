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

private:
	std::string name;
	int points;
	int place;

public:
	Team(std::string,int = 0, int = 1);

	void game( Team& );
	void print();

};

}



#endif /* TEAM_HPP_ */

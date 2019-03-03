/*
 * league.hpp
 *
 *  Created on: Mar 2, 2019
 *      Author: bartlomiej
 */

#ifndef LEAGUE_HPP_
#define LEAGUE_HPP_

#include <vector>
#include "team.hpp"

namespace League{

class League{

private:
	std::vector<Team::Team> Table;
	int gameweek;

public:
	League(int = 0);
	void round_simulate();
	void gameweek_simulate();
	void display_table();
};


}




#endif /* LEAGUE_HPP_ */

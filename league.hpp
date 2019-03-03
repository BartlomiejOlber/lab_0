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
	void season_simulate(League&);
	void gameweek_simulate(League&);
	void display_table(League&);
};


}




#endif /* LEAGUE_HPP_ */

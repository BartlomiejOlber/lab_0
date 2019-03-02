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

	public:
		Team(int = 0);

		void game( Team& );

};

}



#endif /* TEAM_HPP_ */

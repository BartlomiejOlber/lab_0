/*
 * league.cpp
 *
 *  Created on: Mar 2, 2019
 *      Author: bartlomiej
 */

#include <vector>
#include <string>
#include <algorithm>
#include "team.hpp"
#include "league.hpp"

namespace League{

League::League(int week){
	gameweek = week;
	Table.push_back(Team::Team("Liverpool"));
	Table.push_back(Team::Team("Arsenal"));
	Table.push_back(Team::Team("Manchester City"));
	Table.push_back(Team::Team("Manchester United"));
	Table.push_back(Team::Team("Chelsea"));
	Table.push_back(Team::Team("Tottenham"));
	Table.push_back(Team::Team("Everton"));
	Table.push_back(Team::Team("Wolverhampton"));
	Table.push_back(Team::Team("Bournemouth"));
	Table.push_back(Team::Team("Southampton"));
	Table.push_back(Team::Team("Newcastle"));
	Table.push_back(Team::Team("Brighton"));
	Table.push_back(Team::Team("Huddersfield"));
	Table.push_back(Team::Team("Crystal Palace"));
	Table.push_back(Team::Team("West Ham"));
	Table.push_back(Team::Team("Fulham"));
	Table.push_back(Team::Team("Watford"));
	Table.push_back(Team::Team("Cardiff"));
	Table.push_back(Team::Team("Leicester"));
	Table.push_back(Team::Team("Burnley"));

}

void League::display_table(){
	sort( Table.begin( ), Table.end( ), [ ]( const Team::Team& lhs, const Team::Team& rhs )
	{
	   return lhs.points > rhs.points;
	});
	std::vector<Team::Team>::iterator pos;
	for(pos = Table.begin(); pos!=Table.end(); ++pos){
		(*pos).print();
	}
}

void League::round_simulate(){
	std::vector<Team::Team>::iterator pos;
	std::vector<Team::Team>::iterator pos_2;
	for(pos = Table.begin(); pos!=Table.end(); ++pos){
		for(pos_2 = pos; pos_2!=Table.end(); ++pos_2){
			(*pos).game(*pos_2);
			}
	}

}

}



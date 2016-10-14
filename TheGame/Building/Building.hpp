/*
 * Building.hpp
 *
 *  Created on: Oct 14, 2016
 *      Author: xander
 */

#ifndef THEGAME_BUILDING_BUILDING_HPP_
#define THEGAME_BUILDING_BUILDING_HPP_
#include "../Resource/Price.hpp"
class Building
{
	Price& p;
public:
	Building(const Price& p);
};



#endif /* THEGAME_BUILDING_BUILDING_HPP_ */

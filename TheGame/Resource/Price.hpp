/*
 * Price.hpp
 *
 *  Created on: Oct 14, 2016
 *      Author: xander
 */

#ifndef THEGAME_PRICE_HPP_
#define THEGAME_PRICE_HPP_

class Price
{
	int _gold;
	int _silver;
	int _wood;
public:
	Price(int gold,int silver, int wood);
	~Price();
	int getGold() const;
	int getSilver() const;
	int getWood() const;

};



#endif /* THEGAME_PRICE_HPP_ */

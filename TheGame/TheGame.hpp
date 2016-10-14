/*
 * TheGame.hpp
 *
 *  Created on: Oct 13, 2016
 *      Author: xander
 */

#ifndef THEGAME_THEGAME_HPP_
#define THEGAME_THEGAME_HPP_
#include<string>
class TheGame
{
private:

	std::string _name;
public:
	TheGame(std::string _name);
	~TheGame();
	void play();
};



#endif /* THEGAME_THEGAME_HPP_ */

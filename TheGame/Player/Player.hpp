/*
 * Player.hpp
 *
 *  Created on: Oct 13, 2016
 *      Author: xander
 */

#ifndef THEGAME_PLAYER_PLAYER_HPP_
#define THEGAME_PLAYER_PLAYER_HPP_
#include"../../Thread/Thread.hpp"
#include"../../Thread/Condition/Condition.hpp"
#include "../Resource/IResource.hpp"
#include "../Resource/GoldResource.hpp"
#include <string>
class Player : public Thread
{
	std::string _name;
	IResource* _aquiredResource;
	GoldResource* _gold;
	Condition _mutex;
public:
	Player(std::string name, GoldResource* gold);
	void aquireResource(IResource* resource);
	void minning();
	virtual void runTask();
	int getGold() const;
	~Player();
};





#endif /* THEGAME_PLAYER_PLAYER_HPP_ */

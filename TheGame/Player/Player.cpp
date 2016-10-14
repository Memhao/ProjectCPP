/*
 * Player.cpp
 *
 *  Created on: Oct 13, 2016
 *      Author: xander
 */

#include "Player.hpp"
#include <iostream>
#include "../../Thread/Condition/Condition.hpp"

Player::Player(std::string name, GoldResource* gold):
	_name(name),
	_aquiredResource(0),
	_gold(gold)
{

}
Player::~Player()
{

}
void
Player::aquireResource(IResource* resource)
{
	_aquiredResource = resource;
}
void
Player::minning()
{
	_aquiredResource->decreaseAmount(10);
	_gold->increaseAmount(10);

	std::cout<<_aquiredResource->getAmout()<<std::endl;
	std::cout<<"The resource has been increased by 10 by thread:"<<id()<<";"<<std::endl;

}
void
Player::runTask()
{
	_mutex.lock();
	while(_aquiredResource->getAmout()>0)
	{
		minning();
	}
	std::cout<<"The resource has been nullified:"<<_aquiredResource->getAmout()<<std::endl;
	_mutex.unlock();
}
int
Player::getGold() const
{
	return _gold->getAmout();
}

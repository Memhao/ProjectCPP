/*
 * Shared.cpp
 *
 *  Created on: Oct 11, 2016
 *      Author: xander
 */
#include"Shared.hpp"

Shared::Shared():_cnt(0)
{

}
Shared::~Shared()
{

}
void
Shared::incCnt()
{
	++_cnt;
}
int
Shared::getCnt()
{
	return _cnt;
}

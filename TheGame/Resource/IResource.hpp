/*
 * Resource.hpp
 *
 *  Created on: Oct 13, 2016
 *      Author: xander
 */

#ifndef THEGAME_RESOURCE_IRESOURCE_HPP_
#define THEGAME_RESOURCE_IRESOURCE_HPP_
#include <string>

class IResource
{
protected:
	int _value;
public:
	IResource(unsigned short value):
		_value(value){}
	virtual void increaseAmount(int value)
	{
		_value+=value;
	}
	virtual void decreaseAmount(int value)
	{
		if(_value>=0)
			_value-=value;
	};
	virtual int getAmout() const
	{
		return _value;
	}
	virtual ~IResource(){};

};



#endif /* THEGAME_RESOURCE_IRESOURCE_HPP_ */

/*
 * GoldResource.hpp
 *
 *  Created on: Oct 14, 2016
 *      Author: xander
 */

#ifndef THEGAME_RESOURCE_GOLDRESOURCE_HPP_
#define THEGAME_RESOURCE_GOLDRESOURCE_HPP_
#include "IResource.hpp"
class GoldResource : public IResource
{
public:
	GoldResource(unsigned short amount);
	virtual ~GoldResource();
};





#endif /* THEGAME_RESOURCE_GOLDRESOURCE_HPP_ */

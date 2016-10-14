/*
 * Shared.hpp
 *
 *  Created on: Oct 11, 2016
 *      Author: xander
 */

#ifndef THREAD_SHARED_HPP_
#define THREAD_SHARED_HPP_

class Shared
{
private:
	int _cnt;
public:
	Shared();
	~Shared();
	void incCnt();
	int getCnt();
};



#endif /* THREAD_SHARED_HPP_ */

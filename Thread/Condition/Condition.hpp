/*
 * Condition.hpp
 *
 *  Created on: Oct 12, 2016
 *      Author: xander
 */

#ifndef THREAD_CONDITION_HPP_
#define THREAD_CONDITION_HPP_
#include "../Mutex/Mutex.hpp"
class Condition : public Mutex
{
	pthread_cond_t _cond;
	Condition(const Condition&);
	Condition& operator=(const Condition&);
public:
	Condition();
	~Condition();
	void wait();
	void notify();
};



#endif /* THREAD_CONDITION_HPP_ */

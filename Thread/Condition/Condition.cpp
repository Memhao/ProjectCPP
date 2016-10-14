/*
 * Condition.cpp
 *
 *  Created on: Oct 12, 2016
 *      Author: xander
 */


#include "Condition.hpp"

Condition::Condition()
{
	pthread_cond_init(&_cond,NULL);
}
Condition::~Condition()
{
	pthread_cond_destroy(&_cond);
}
void
Condition::notify()
{
	pthread_cond_signal(&_cond);
}
void
Condition::wait()
{
	pthread_cond_wait(&_cond,&_lock);
}

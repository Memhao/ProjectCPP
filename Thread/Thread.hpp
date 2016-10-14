/*
 * Thread.hpp
 *
 *  Created on: Oct 6, 2016
 *      Author: xander
 */

#ifndef THREAD_THREAD_HPP_
#define THREAD_THREAD_HPP_
#include<pthread.h>
#include "Condition/Condition.hpp"
class Thread
{
public:
	Thread();
	void start() ;
	void stop()  ;
	unsigned int  id() const;
	virtual ~Thread();
	virtual void runTask() = 0;


private:
	Thread(const Thread&);
	Thread& operator=(const Thread&);

	void manageTask();
	static  void* entry(void* arg);

	pthread_t _threadID;
};




#endif /* THREAD_THREAD_HPP_ */

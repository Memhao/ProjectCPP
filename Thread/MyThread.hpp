/*
 * MyThread.hpp
 *
 *  Created on: Oct 12, 2016
 *      Author: xander
 */

#ifndef THREAD_MYTHREAD_HPP_
#define THREAD_MYTHREAD_HPP_
#include "Mutex/Mutex.hpp"
#include "Shared.hpp"
#include "Thread.hpp"
class MyThread : public Thread
{
private:
	Mutex* _lock;
	Shared& _s;

	MyThread(const MyThread&);
	MyThread& operator=(const MyThread&);
public:
	MyThread(Shared& s);
	~MyThread();
	virtual void runTask();

};



#endif /* THREAD_MYTHREAD_HPP_ */

/*
 * MyThread.cpp
 *
 *  Created on: Oct 12, 2016
 *      Author: xander
 */


#include"MyThread.hpp"
#include <iostream>
MyThread::MyThread(Shared& s):_s(s)
{
	_lock = new Mutex();
}
MyThread::~MyThread()
{
	delete _lock;
}
void
MyThread::runTask()
{
	_lock->lock();
	_s.incCnt();
	 	 std::cout<<"Thread id:"<<id()<<":value:"<<_s.getCnt()<<std::endl;
	_lock->unlock();
	sleep(2);
}

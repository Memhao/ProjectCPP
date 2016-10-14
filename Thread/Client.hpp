/*
 * Client.hpp
 *
 *  Created on: Oct 7, 2016
 *      Author: xander
 */

#ifndef THREAD_CLIENT_HPP_
#define THREAD_CLIENT_HPP_
#include <iostream>
#include <string>
#include "Thread.hpp"
#include "../Box/Mailbox.hpp"
class Client: public Thread
{
public:
	Client(std::string name,Mailbox& mbox);
	virtual void runTask();
	~Client();
private:
	std::string _name;
	Mailbox& _mailbox;
};



#endif /* THREAD_CLIENT_HPP_ */

/*
 * Postman.hpp
 *
 *  Created on: Oct 6, 2016
 *      Author: xander
 */

#ifndef THREAD_POSTMAN_HPP_
#define THREAD_POSTMAN_HPP_
#include<string>
#include"Thread.hpp"
#include "../Box/Mailbox.hpp"
#include "../Box/Mail.hpp"
class Postman : public Thread
{
public:
	Postman(std::string name, Mailbox& mbox);
	~Postman();

	virtual void runTask();

private:
	std::string _name;
	Mailbox& _mailbox;
};




#endif /* THREAD_POSTMAN_HPP_ */

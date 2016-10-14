/*
 * Client.cpp
 *
 *  Created on: Oct 7, 2016
 *      Author: xander
 */

#include "Client.hpp"
#include "../Box/Mailbox.hpp"
#include "../Box/Mail.hpp"
Client::Client(std::string name, Mailbox& mbox):
	_name(name),
	_mailbox(mbox)
{

}
Client::~Client()
{

}

void
Client::runTask()
{
	IMail* mail;
	while(1)
	{
		mail = _mailbox.getMessage();
		mail->doWork(*this);
		delete mail;
	}
}

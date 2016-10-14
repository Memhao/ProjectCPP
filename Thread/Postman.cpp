/*
 * Postman.cpp
 *
 *  Created on: Oct 6, 2016
 *      Author: xander
 */

#include "Postman.hpp"
#include "../Box/Mailbox.hpp"
#include <stdlib.h>
#include <iostream>
Postman::Postman(std::string name, Mailbox& mbox):
	_name(name),
	_mailbox(mbox)
{

}

Postman::~Postman()
{

}



void
Postman::runTask()
{
	while(1){
	std::cout<<"Postman "<<_name<<" "<<id()<< " put a message"<<std::endl;
	_mailbox.putMessage(new Mail("a","b"));
	sleep(5);
	}
}

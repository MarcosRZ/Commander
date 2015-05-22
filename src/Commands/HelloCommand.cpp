/*
 * HelloCommand.cpp
 *
 *  Created on: 22/5/2015
 *      Author: marcos
 */

#include "HelloCommand.h"
#include <string>
#include <iostream>

HelloCommand::HelloCommand() {
	// TODO Auto-generated constructor stub

}

HelloCommand::~HelloCommand() {
	// TODO Auto-generated destructor stub
}


void HelloCommand::execute(){

	std::cout << "Hello Command !!" << std::endl;
}

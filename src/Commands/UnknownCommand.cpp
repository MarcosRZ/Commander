/*
 * UnknownCommand.cpp
 *
 *  Created on: 22/5/2015
 *      Author: marcos
 */

#include "UnknownCommand.h"
#include <iostream>
#include <string>

UnknownCommand::UnknownCommand() {
	// TODO Auto-generated constructor stub

}

UnknownCommand::~UnknownCommand() {
	// TODO Auto-generated destructor stub
}

void UnknownCommand::execute(){

	std::cout << "Unkown command!" << std::endl;
}

/*
 * CommandExecuttor.cpp
 *
 *  Created on: 22/5/2015
 *      Author: marcos
 */

#include "CommandExecuttor.h"

CommandExecuttor::CommandExecuttor() {
	// TODO Auto-generated constructor stub

}

CommandExecuttor::~CommandExecuttor() {
	// TODO Auto-generated destructor stub
}

void CommandExecuttor::execute(ICommand * command){

	command->execute();
}


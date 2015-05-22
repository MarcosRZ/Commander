/*
 * CommandExecuttor.h
 *
 *  Created on: 22/5/2015
 *      Author: marcos
 */

#ifndef SRC_COMMANDS_COMMANDEXECUTTOR_H_
#define SRC_COMMANDS_COMMANDEXECUTTOR_H_

#include "ICommand.h"

class CommandExecuttor {
public:
	CommandExecuttor();
	virtual ~CommandExecuttor();
	void execute(ICommand * command);
};

#endif /* SRC_COMMANDS_COMMANDEXECUTTOR_H_ */

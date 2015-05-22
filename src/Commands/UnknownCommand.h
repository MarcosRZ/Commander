/*
 * UnknownCommand.h
 *
 *  Created on: 22/5/2015
 *      Author: marcos
 */

#ifndef SRC_COMMANDS_UNKNOWNCOMMAND_H_
#define SRC_COMMANDS_UNKNOWNCOMMAND_H_

#include "ICommand.h"

class UnknownCommand : public ICommand {
public:
	UnknownCommand();
	virtual ~UnknownCommand();

	void execute();
};

#endif /* SRC_COMMANDS_UNKNOWNCOMMAND_H_ */

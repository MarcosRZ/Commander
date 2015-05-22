/*
 * GoodbyeCommand.h
 *
 *  Created on: 22/5/2015
 *      Author: marcos
 */

#ifndef SRC_COMMANDS_GOODBYECOMMAND_H_
#define SRC_COMMANDS_GOODBYECOMMAND_H_

#include "ICommand.h"

class GoodbyeCommand : public ICommand{
public:
	GoodbyeCommand();
	virtual ~GoodbyeCommand();

	void execute();
};

#endif /* SRC_COMMANDS_GOODBYECOMMAND_H_ */

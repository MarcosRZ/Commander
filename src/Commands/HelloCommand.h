/*
 * HelloCommand.h
 *
 *  Created on: 22/5/2015
 *      Author: marcos
 */

#ifndef SRC_COMMANDS_HELLOCOMMAND_H_
#define SRC_COMMANDS_HELLOCOMMAND_H_

#include "ICommand.h"

class HelloCommand : public ICommand{
public:
	HelloCommand();
	virtual ~HelloCommand();

	void execute();
};

#endif /* SRC_COMMANDS_HELLOCOMMAND_H_ */

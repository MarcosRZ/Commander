/*
 * Menu.h
 *
 *  Created on: 21/5/2015
 *      Author: marcos
 */

#define EXIT_COMMAND		0
#define HELLO_COMMAND		1
#define GOODBYE_COMMAND		2

#ifndef SRC_MENU_H_
#define SRC_MENU_H_

#include "Commands/ICommand.h"
#include "Commands/HelloCommand.h"
#include "Commands/GoodbyeCommand.h"
#include "Commands/UnknownCommand.h"

class Menu {

	public:
		Menu();
		virtual ~Menu();
		ICommand * readCommand(void);

};

#endif /* SRC_MENU_H_ */

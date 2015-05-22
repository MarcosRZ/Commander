/*
 * Menu.cpp
 *
 *  Created on: 21/5/2015
 *      Author: marcos
 */

#include "Menu.h"
#include <string>
#include <iostream>

Menu::Menu() {

}

Menu::~Menu() {

	std::cout << "Destroy !!";
}

ICommand * Menu::readCommand(){

	int cmdNumber;

	std::cout << "Introduzca comando: ";
	std::cin >> cmdNumber;

	switch (cmdNumber){

		case EXIT_COMMAND:
			return NULL;

		case HELLO_COMMAND:
			return new HelloCommand();

		case GOODBYE_COMMAND:
			return new GoodbyeCommand();

		default:
			return new UnknownCommand();
	}

}



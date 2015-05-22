/*
 * App.cpp
 *
 *  Created on: 21/5/2015
 *      Author: marcos
 */

#include "App.h"
#include <iostream>


App::App() {

	std::cout << "App!" << std::endl;
	ICommand * command = NULL;

	this->menu = new Menu();
	this->executtor = new CommandExecuttor();

	command = this->menu->readCommand();

	while (command != NULL){

		this->executtor->execute(command);

		command = this->menu->readCommand();
	}

}

App::~App() {

	delete this->menu;

}




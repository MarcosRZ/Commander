/*
 * App.cpp
 *
 *  Created on: 21/5/2015
 *      Author: marcos
 */

#include "App.h"

#include <iostream>


App::App() {

	std::cout << "Pollas" << std::endl;

	this->pollas = Menu();

}

App::~App() {
	// TODO Auto-generated destructor stub
}


int main () {

	App app;
	return 0;
}

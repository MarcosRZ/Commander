/*
 * App.h
 *
 *  Created on: 21/5/2015
 *      Author: marcos
 */

#ifndef SRC_APP_H_
#define SRC_APP_H_

#include "Menu.h"
#include "Commands/CommandExecuttor.h"

	class App {

		public:
			App();
			virtual ~App();

		private:
			Menu * menu;
			CommandExecuttor * executtor;

	};


#endif

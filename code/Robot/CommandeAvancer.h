/*
 * CommandeAvancer.h
 *
 *  Created on: 4 janv. 2015
 *      Author: jonathan
 */

#ifndef ROBOT_COMMANDEAVANCER_H_
#define ROBOT_COMMANDEAVANCER_H_

class CommandeAvancer : public Commande {
private:
	int deplacement;
public:
	CommandeAvancer() : deplacement(0){};
	void execute();

};

#endif /* ROBOT_COMMANDEAVANCER_H_ */

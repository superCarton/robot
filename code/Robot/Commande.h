/*
 * Commande.h
 *
 *  Created on: 4 janv. 2015
 *      Author: jonathan
 */

#ifndef ROBOT_COMMANDE_H_
#define ROBOT_COMMANDE_H_

#include <map>
using namespace std;

class Commande {
private:
	Robot robot;
	static vector<Commande> derniereCommande;

public:
	static map<string, *Commande> listeCommande;

	Commande(Robot ro) : robot(ro){};
	static Commande* construire(string);
	virtual void execute()= 0;

};

#endif /* ROBOT_COMMANDE_H_ */

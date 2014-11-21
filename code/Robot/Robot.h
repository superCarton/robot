#ifndef _ROBOT_H_
#define _ROBOT_H_

using namespace std;
#include "Position.h"
#include "Plot.h"
#include "Objet.h"
#include "EtatRobot.h"
#include "Afficheur.h"
#include "EtatAVide.h"



class Robot {

private:
	Position position;
	Plot plot;
	Objet objet;
	char direction;
	EtatRobot* etat;
	Afficheur afficheur;

public:

	Robot(int x=0, int y=0, Plot p=Plot(0), Objet o=Objet(0), char d='N',
			EtatRobot* e=EtatRobot::getIni(), Afficheur a=Afficheur()) :
		position(Position(x,y)),
		plot(p),
		objet(o),
		direction(d),
		etat(e),
		afficheur(a)
	{};

	EtatRobot* getEtat(){return etat;};

	void avancer(int n);

	void tourner(char dir);

	void saisir(Objet o);

	void poser();

	void rencontrerPlot(Plot p);

	int peser();

	int evaluerPlot();

	void figer();

	void repartir();

	string afficher();

	void notify();

	Position getPosition();

	Objet getObjet();

	Plot getPlot();

	void setObserveur(Afficheur a);

};

#endif // _ROBOT_H_

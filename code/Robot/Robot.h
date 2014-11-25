#ifndef _ROBOT_H_
#define _ROBOT_H_

using namespace std;
#include "Position.h"
#include "Plot.h"
#include "Objet.h"
#include "EtatRobot.h"
#include "Afficheur.h"
#include "EtatAVide.h"
#include <vector>



class Robot {

private:
	static int MAX_OBSERVERS;
	Position position;
	Plot plot;
	Objet objet;
	char direction;
	EtatRobot* etat;
	vector<Afficheur*> afficheurs;

public:

	Robot(int x=0, int y=0, Plot p=Plot(0), Objet o=Objet(0), char d='N',
			EtatRobot* e=EtatRobot::getIni(), Afficheur* a=NULL) :
		position(Position(x,y)),
		plot(p),
		objet(o),
		direction(d),
		etat(e),
		afficheurs(2, a)
	{};

	EtatRobot* getEtat(){return etat;};

	Position* getPosition(){
		return &position;
	};

	Plot* getPlot(){
		return &plot;
	};

	Objet* getObjet(){
		return &objet;
	};

	char getDirection(){return direction;}

	void avancer(int n);

	void tourner(char dir);

	void saisir(Objet o);

	void poser();

	void rencontrerPlot(Plot p);

	int peser();

	int evaluerPlot();

	void figer();

	void repartir();

	void notify();

	void addObserveur(Afficheur* a);

};

#endif // _ROBOT_H_

#include "Plot.h"
#include "Objet.h"
#include "Afficheur.h"
#include "Robot.h"
#include <stdio>

using namespace std;

int main(int argc, char *argv[]) 
{ 
	projet_robot::vue::Afficheur afficheur;
	projet_robot::modele::robot::Robot robot;
	afficheur.setObservable(robot);
	robot.setObserveur(afficheur);
	projet_robot::modele::robot::Objet o1(2);
	projet_robot::modele::robot::Plot p1(20, o1);
	projet_robot::modele::robot::Plot p2(35, NULL);

	/* cas nominal */
	robot.tourner('E');
	robot.avancer(3);
	robot.tourner('N');
	robot.avancer(1);
	robot.rencontrerPlot(p1);
	cout << "Taille du plot : " << robot.evaluerPlot();
	robot.saisir();
	cout << " Poids de l'objet : " << robot.peser() << endl;
	robot.tourner('S');
	robot.avancer(1);
	robot.peser();
	robot.avancer(1);
	robot.figer();
	robot.repartir();
	robot.rencontrerPlot(p2);
	robot.poser();
	robot.tourner('O');
	robot.avancer(3);
	robot.tourner('S');
	robot.avancer(1);

	/* cas d'erreur */
		
	
}

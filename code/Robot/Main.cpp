#include "Plot.h"
#include "Objet.h"
#include "Afficheur.h"
#include "Robot.h"

using namespace std;

int main(int argc, char *argv[])
{
	Afficheur afficheur;
	Robot robot;
	afficheur.setObservable(&robot);
	robot.addObserveur(&afficheur);
	Objet o1(2);
	Plot p1(20);
	Plot p2(35);

	robot.tourner('E');
	robot.avancer(3);
	robot.poser();
	robot.tourner('N');
	robot.avancer(1);
	robot.rencontrerPlot(p1);
	cout << "Taille du plot : " << robot.evaluerPlot()<< endl;
	robot.saisir(o1);
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

	cout << "/**** FIN2 ****/" << endl;


}

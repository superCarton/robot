#include "Plot.h"
#include "Objet.h"
#include "Afficheur.h"
#include "Robot.h"

using namespace std;

int main(int argc, char *argv[]) 
{ 
	Afficheur afficheur;
	Robot robot;
	afficheur.set_observable(robot);
	robot.tourner('E');
	robot.avancer(3);
	robot.tourner('N');
	robot.avancer(1);
	
}

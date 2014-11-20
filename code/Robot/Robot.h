#ifndef _ROBOT_H_
#define _ROBOT_H_

#import <stdio.h>;
using namespace std;

namespace projet_robot {
	namespace modele {
		namespace robot {
			class Robot {

			private:
				static Robot& _instance_robot;
				Position position;
				Plot plot;
				Objet objet;
				char direction;
				etats::EtatRobot etat;
				vue::Afficheur afficheur;


			public:

				Robot() : position(0,0), plot(NULL), objet(NULL), direction('N') {};

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

				void setEtat(projet_robot::modele::etats::EtatRobot etat);

				static Robot& getSingleton();

				void notify();

				etats::EtatRobot getEtat();

				Position getPosition();

				Objet getObjet();

				Plot getPlot();

				/**** Exception ****/

				class Marche_Arriere_Interdite{};
				class Direction_Inconnue;
				class Avancer_Exception{};
				class Tourner_Exception{};
				class Saisir_Exception{};
				class Poser_Exception{};
				class RenconterPlot_Exception{};
				class Peser_Exception{};
				class EvaluerPlot_Exception{};
				class Figer_Exception{};
				class Repartir_Exception{};
			};
		}
	}
}

#endif // _ROBOT_H_

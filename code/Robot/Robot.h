#ifndef _ROBOT_H_
#define _ROBOT_H_

#include <stdio.h>
#include "Position.h"
#include "Plot.h"
#include "EtatRobot.h"
#include "Afficheur.h"
using namespace std;
using namespace projet_robot::modele::etats;

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
				EtatRobot etat;
				projet_robot::vue::Afficheur afficheur;


			public:

				Robot() : position(0,0), direction('N') {};

				void avancer(int n);

				void tourner(char dir);

				void saisir();

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

				void setObserveur(vue::Afficheur a);

				/**** Exception ****/

				class Marche_Arriere_Interdite{};
				class Direction_Inconnue;
				class Avancer_Exception{};
				class Tourner_Exception{};
				class Saisir_Exception{};
				class Poser_Exception{};
				class RencontrerPlot_Exception{};
				class Peser_Exception{};
				class EvaluerPlot_Exception{};
				class Figer_Exception{};
				class Repartir_Exception{};
			};
		}
	}
}

#endif // _ROBOT_H_

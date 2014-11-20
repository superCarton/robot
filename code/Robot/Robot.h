#ifndef _ROBOT_H_
#define _ROBOT_H_

using namespace std;

namespace projet_robot {
	namespace modele {
		namespace robot {
			class Robot {

			private:
				static Robot& _instance_robot;
				Plot plot;
				Objet objet;


			public:

				Robot() : plot = null, objet = null;

				void avancer(int x, int y);

				void tourner(string direction);

				void saisir(Objet o);

				void poser();

				void rencontrerPlot(Plot p);

				int peser();

				int evaluerPlot();

				void figer();

				void repartir();

				void afficher();

				void setEtat(projet_robot::modele::etats::EtatRobot etat);

				static Robot& getSingleton();

				void notify();
			};
		}
	}
}

#endif // _ROBOT_H_

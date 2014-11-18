using namespace std;

namespace robot {
	class Robot {


	public:
		void avancer(int x, int y);

		void tourner(string direction);

		void saisir(Objet o);

		void poser();

		int peser();

		void rencontrerPlot(Plot p);

		int evaluerPlot();

		void figer();

		void repartir();

		void afficher();

		void setEtat(robot::EtatRobot etat);
	};
}

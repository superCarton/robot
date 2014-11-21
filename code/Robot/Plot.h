#ifndef _PLOT_H_
#define _PLOT_H_

#include <string>
using namespace std;

class Plot {

private:
	int hauteur;

public:
	Plot(int h =0) :
			hauteur(h) {
	}
	int getHauteur();
	string afficher();
};

#endif

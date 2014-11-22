#ifndef _PLOT_H_
#define _PLOT_H_

#include <string>
#include <ostream>
using namespace std;

class Plot {

private:
	int hauteur;

public:
	Plot(int h =0) :
			hauteur(h) {
	}
	int getHauteur();

	friend ostream& operator<<(ostream&, const Plot&);
};

#endif

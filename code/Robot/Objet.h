#ifndef _OBJET_H_
#define _OBJET_H_

#include <string>
using namespace std;

class Objet {

private:
	int poids;

public:
	Objet(int p) :
			poids(p) {
	}
	int getPoids();
	string afficher();
};

#endif

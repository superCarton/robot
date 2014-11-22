#ifndef _OBJET_H_
#define _OBJET_H_

#include <string>
#include <ostream>
using namespace std;


class Objet {

private:
	int poids;

public:
	Objet(int p=0) : poids(p) {}
	int getPoids();
	friend ostream& operator<<(ostream&, const Objet&);
};

#endif

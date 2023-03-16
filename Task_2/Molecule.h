#pragma once
#include "Atom.h"
#include <map>
#include <list>
using namespace std;
class Molecule
{
public: 
	Molecule(const list<Atom> &atoms);
	~Molecule() {};
	int getAtomsCount(Atom &atom);
	double getEnergy();
	double getMass();
private: 
	list<Atom> atoms;
};


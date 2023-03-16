#include "Molecule.h"

Molecule::Molecule(const list<Atom> &atoms): atoms(atoms){}

int Molecule::getAtomsCount(Atom &atom)
{
	int count = 0;
	for (Atom a : atoms)
	{
		if (a.getProtons() == atom.getProtons()) count++;
	}
	return count;
}

double Molecule::getEnergy() {
	double energy = 0.0;
	for (Atom a : atoms)
	{
		energy += a.getCharge();
	}
	return energy;
}
double Molecule::getMass() {
	double mass = 0.0;
	for (Atom a : atoms)
	{
		mass += a.getMass();
	}
	return mass;
}

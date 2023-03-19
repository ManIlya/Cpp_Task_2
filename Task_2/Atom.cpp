#include "Atom.h"
Atom::Atom(int p, int n, int e) : protons(p), neutrons(n), electrons(e){}
int Atom::getProtons() {
	return protons;
}
int Atom::getNeutrons() {
	return neutrons;
}
int Atom::getElectrons() {
	return electrons;
}
double Atom::getMass() {
	return protons * 1 + neutrons * 1 + electrons * 0.001;
}
double Atom::getCharge() {
	return protons - electrons;
}
Atom::Atom() : protons(1), neutrons(1), electrons(1){}
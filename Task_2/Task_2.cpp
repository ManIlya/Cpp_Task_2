// Task_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <list>
#include "Atom.h"
#include "Hydrogen.h"
#include "Molecule.h"
using namespace std;

int main()
{
	list<Atom> atoms = list<Atom>();
	Atom at1 = Hydrogen();
	Atom at2 = Atom(2, 2, 3);
	atoms.push_back(at2);
	atoms.push_back(at1);
	atoms.push_back(at2);
	Molecule molecule = Molecule(atoms);
	cout << molecule.getAtomsCount(at1) << " " << molecule.getAtomsCount(at2) << " "
		<< molecule.getEnergy() << " " << molecule.getMass() << endl;
}



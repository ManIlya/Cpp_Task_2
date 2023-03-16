// Task_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <list>
#include "Atom.h"
#include "Hydrogen.h"
using namespace std;

int main()
{
	list<Atom> atoms = list<Atom>();
	Atom at1 = Hydrogen();
	Atom at2 = Atom(1, 2, 3);
	atoms.push_back(at1);
	atoms.push_back(at2);
	atoms.push_back(at2);
}



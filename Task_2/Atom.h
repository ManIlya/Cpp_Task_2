#pragma once
class Atom
{
public:
    Atom(int p, int n, int e);
    int getProtons();
    int getNeutrons();
    int getElectrons();
    double getMass();
    double getCharge();
protected:
    Atom();
    int protons;
    int neutrons;
    int electrons;
};


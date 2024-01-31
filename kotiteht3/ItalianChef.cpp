#include "ItalianChef.h"
#include "chef.h"
#include <iostream>

using namespace std;

ItalianChef::ItalianChef(string n, int jauhot, int vesi) : Chef(n), vesi(vesi), jauhot(jauhot)
{
    cout << "Chef " << name << " konstruktori\n";
}

ItalianChef::~ItalianChef()
{
    cout << "Chef " << name << " konstruktori\n";
}

void ItalianChef::makePasta()
{
    cout << "Chef " << name << " makes pasta with special recipe" << endl;
    cout << "Chef " << name << " uses vesi = " << vesi << endl;
    cout << "Chef " << name << " uses jauhot = " << jauhot << endl;
}

string ItalianChef::getName()
{
    return name;
}

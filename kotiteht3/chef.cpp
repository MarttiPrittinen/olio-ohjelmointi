#include "chef.h"
#include <iostream>

using namespace std;

Chef::Chef(string n) : name(n)
{
    cout << "Chef " << name << " \n";
}

Chef::~Chef()
{
    cout << "Chef " << name << " dekonstruktori\n";
}


void Chef::makePastawithspecialrecipe()
{
    cout << "Chef " << name << " makes pasta with special recipe\n";
}

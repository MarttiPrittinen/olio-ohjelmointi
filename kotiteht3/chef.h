#ifndef CHEF_H
#define CHEF_H

#include <iostream>

using namespace std;

class Chef {
public:
    Chef(string n);
    ~Chef();
    void makePastawithspecialrecipe();
    string getName();

protected:
    string name;
};

#endif // CHEF_H

#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include "chef.h"

using namespace std;


class ItalianChef : public Chef {
public:
    ItalianChef(string n, int jauhot, int vesi);

    ~ItalianChef();
    void makePasta();
    string getName();
private:
    int jauhot;
    int vesi;
};

#endif // ITALIANCHEF_H

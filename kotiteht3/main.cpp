#include <iostream>
#include "chef.h"
#include "ItalianChef.h"

using namespace std;

int main() {
    Chef jyrki("Mario");

    ItalianChef mario("Mario", 250, 100);


    mario.makePasta();
    return 0;
}

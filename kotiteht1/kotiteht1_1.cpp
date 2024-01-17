#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));

    int etsittavaLuku = rand() % 20 + 1;

    int arvaus;

    do{

        cout << "Arvaa luku valilta 1-20: ";
        cin >> arvaus;

        if (arvaus< etsittavaLuku){
            cout<< "Luku on suurempi."<< endl;
        } else if (arvaus > etsittavaLuku) {
            cout<< "Luku on pienempi." << endl;
        } else{
            cout<< "Arvasit oikean luvun!" << etsittavaLuku << "." << endl;

        }

    } while (arvaus != etsittavaLuku);
    return 0;

}

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int game () {

    srand(time(0));

    int etsittavaLuku = rand() % 40 + 1;

    int arvaus;
    int arvauskerrat = 0;

    do{

        cout << "Arvaa luku valilta 1-40: ";
        cin >> arvaus;
        arvauskerrat++;

        if (arvaus< etsittavaLuku){
            cout<< "Luku on suurempi."<< endl;
        } else if (arvaus > etsittavaLuku) {
            cout<< "Luku on pienempi." << endl;
        } else{
            cout<< "Arvasit oikean luvun!" << etsittavaLuku << "." << endl;
        }

    } while (arvaus != etsittavaLuku);
    return arvauskerrat;
}

int main() {

    cout << "Arvaa luku välilä 1-40." << endl;

        int arvauskerrat = game();

    cout << "Arvauskertojen määrä:" << arvauskerrat << endl;

    return 0;

}

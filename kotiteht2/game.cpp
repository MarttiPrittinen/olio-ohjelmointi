#include "Game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int maximum) : maxNumber(maximum), numOfGuesses(0) {
    srand(time(0));
    randomNumber = (rand() % maxNumber) + 1;
}

Game::~Game() {

}

void Game::play() {
    bool stayInLoop = true;

    while (stayInLoop) {
        cout << "Give your guess between 1-" << maxNumber << endl;
        cin >> playerGuess;
        numOfGuesses++;

        if (playerGuess == randomNumber) {
            cout << "You guessed correctly! Number = " << playerGuess << endl;
            stayInLoop = false;
            printGameResult();
        } else if (playerGuess < randomNumber) {
            cout << "Your guess is too low" << endl;
        } else {
            cout << "Your guess is too high" << endl;
        }
    }
}

void Game::printGameResult() const {
    cout << "Game over. Number of guesses: " << numOfGuesses << endl;
}

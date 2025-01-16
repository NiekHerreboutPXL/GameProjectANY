// File: main.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
#include <map>
#include "Rules.h"

int generateRandomNumber(int min, int max) {
    return min + (std::rand() % (max - min + 1));
}

// keuze lijst
std::map<int, std::string> getChoices() {
    std::map<int, std::string> keuzes;
    keuzes[1] = "steen";
    keuzes[2] = "papier";
    keuzes[3] = "schaar";
    return keuzes;
}


// logica voor computer keuze
std::string randomComputerChoice() {
    int randomNumber = generateRandomNumber(1, 3);
    std::map<int, std::string> choices = getChoices();
    return choices[randomNumber];
}
// logica voor player keuze
std::string playerChoice() {
    std::string player;
    std::cout << "Your choice (steen, papier, schaar): ";
    std::cin >> player;
    if (isValidChoice(player)) {
    }
    else {
        std::cout << "Invalid choice! Try again. \n";
    }
    return player;
}

void playGame() {
    char playAgain;
    do {
        std::string computer = randomComputerChoice();

        std::string player = playerChoice();

        determineWinner(player, computer);

        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "Thanks for playing! Goodbye.\n";
}

int main() {

    std::srand(static_cast<unsigned>(std::time(0)));
    playGame();
    return 0;
}
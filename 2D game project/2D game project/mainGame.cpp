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
    keuzes = [{1, "steen"},{2,"papier"}, {3,"schaar"}]
    keuzes[1] = "steen";
    keuzes[2] = "papier";
    keuzes[3] = "schaar";
    return keuzes;
}


// logica voor computer keuze
void randomComputerChoice() {

    std::srand(static_cast<unsigned>(std::time(0)));
    int randomNumber = generateRandomNumber(1, 3);

    std::map<int, std::string> choices = getChoices();

    std::cout << "computer choice: " << choices[randomNumber] << "\n";
}

void playerChoice() {
    std::string player;
    std::map<int, std::string> choices = getChoices();
    do {
        std::cout << " Your choice (steen, papier, schaar): ";
        std::cin >> player;

        // Valideer de invoer met isValidChoice uit rules.cpp
        if (isValidChoice(player)) {
            std::cout << "Valid choice: " << player << "\n";
            break; // Stop de loop bij een geldige keuze
        }
        else {
            std::cout << " Invalid choice! Please try again.\n";
        }
    } while (true);

}

int main() {
    randomComputerChoice();
    playerChoice();
    determineWinner(playerChoice,randomComputerChoice);
    return 0;

}
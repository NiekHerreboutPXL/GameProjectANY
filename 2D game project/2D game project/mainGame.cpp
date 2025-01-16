// File: main.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
#include <map>

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
void randomComputerChoice() {

    std::srand(static_cast<unsigned>(std::time(0)));
    int randomNumber = generateRandomNumber(1, 3);

    std::map<int, std::string> choices = getChoices();

    std::cout << "computer choice: " << choices[randomNumber] << "\n";
}

void playerChoice() {
    std::string player;
    std::map<int, std::string> choices = getChoices();
    std::cout<<"your choice: ", std::cin >> player;

}

int main() {
    randomComputerChoice();
    playerChoice();
    return 0;
}
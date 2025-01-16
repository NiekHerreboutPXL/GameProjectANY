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
    return player;
}

void determineWinner(const std::string& player, const std::string& computer) {

    if (player == computer) {
        std::cout << "It's a tie! You both chose " << player << ".\n";
    }
    else if ((player == "steen" && computer == "schaar") ||
        (player == "papier" && computer == "steen") ||
        (player == "schaar" && computer == "papier")) {
        std::cout << "Computer choice: " << computer << "\n";
        std::cout << "You win! " << player << " beats " << computer << ".\n";
    }
    else if ((computer == "steen" && player == "schaar") ||
        (computer == "papier" && player == "steen") ||
        (computer == "schaar" && player == "papier")) {
        std::cout << "Computer choice: " << computer << "\n";
        std::cout << "You lose! " << computer << " beats " << player << ".\n";
    }
    else {
        std::cout << "Invalid choice! Please choose 'steen', 'papier', or 'schaar'.\n";
    }

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


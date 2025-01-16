#include "rules.h"
#include <algorithm>
#include <iostream>
bool isValidChoice(const std::string& playerChoice) {
    // Maak de invoer case-insensitive
    std::string choice = playerChoice;
    std::transform(choice.begin(), choice.end(), choice.begin(), ::tolower);

    // Controleer op geldige keuzes
    return choice == "steen" || choice == "papier" || choice == "schaar";
}

void determineWinner(const std::string& player, const std::string& computer) {
    std::cout << "Computer choice: " << computer << "\n";

    if (player == computer) {
        std::cout << "It's a tie! You both chose " << player << ".\n";
    }
    else if ((player == "steen" && computer == "schaar") ||
        (player == "papier" && computer == "steen") ||
        (player == "schaar" && computer == "papier")) {
        std::cout << "You win! " << player << " beats " << computer << ".\n";
    }
    else if ((computer == "steen" && player == "schaar") ||
        (computer == "papier" && player == "steen") ||
        (computer == "schaar" && player == "papier")) {
        std::cout << "You lose! " << computer << " beats " << player << ".\n";
    }
    else {
        std::cout << "Invalid choice! Please choose 'steen', 'papier', or 'schaar'.\n";
    }

}
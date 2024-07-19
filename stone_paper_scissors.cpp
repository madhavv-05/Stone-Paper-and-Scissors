#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int playerChoice, computerChoice;

    std::cout << "Rock, Paper, Scissors Game!\n";
    std::cout << "Enter your choice: \n";
    std::cout << "1 for Rock\n";
    std::cout << "2 for Paper\n";
    std::cout << "3 for Scissors\n";
    std::cin >> playerChoice;

    computerChoice = rand() % 3 + 1;

    std::cout << "You chose: ";
    switch (playerChoice) {
        case 1: std::cout << "Rock\n"; break;
        case 2: std::cout << "Paper\n"; break;
        case 3: std::cout << "Scissors\n"; break;
        default: std::cout << "Invalid choice\n"; return 1;
    }

    std::cout << "Computer chose: ";
    switch (computerChoice) {
        case 1: std::cout << "Rock\n"; break;
        case 2: std::cout << "Paper\n"; break;
        case 3: std::cout << "Scissors\n"; break;
    }

    if (playerChoice == computerChoice) {
        std::cout << "It's a tie!\n";
    } else if ((playerChoice == 1 && computerChoice == 3) ||
               (playerChoice == 2 && computerChoice == 1) ||
               (playerChoice == 3 && computerChoice == 2)) {
        std::cout << "You win!\n";
    } else {
        std::cout << "You lose!\n";
    }

    return 0;
}

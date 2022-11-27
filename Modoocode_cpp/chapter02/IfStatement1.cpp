/* Guessing lucky number */
#include <iostream>

int main() {
    int luckyNumber = 7;
    std::cout << "Guess my lucky number." << std::endl;

    int userInput;      // user's input

    while (1) {
        std::cout << "Enter : ";
        std::cin >> userInput;

        if (luckyNumber == userInput) {
            std::cout << "You have correctly guessed my lucky number." << std::endl;
            break;
        } else {
            std::cout << "Guess again." << std::endl;
        }
    }

    return 0;
}
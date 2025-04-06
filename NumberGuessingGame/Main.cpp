// main.cpp
#include <iostream>
#include "GuessingGame.h"

int main() {
    GuessingGame game;

    std::cout << "Welcome to the Guessing Game!" << std::endl;
    std::cout << game.resetNumbers() << std::endl;

    int lowerBound, upperBound;
    std::cout << "Enter lower bound: ";
    std::cin >> lowerBound;
    std::cout << "Enter upper bound: ";
    std::cin >> upperBound;

    game.randomNumber(lowerBound, upperBound);
    std::cout << "I've picked a number between " << lowerBound << " and " << upperBound << std::endl;

    int guess;
    std::string result;

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        result = game.PlayerInputGuess(guess);
        std::cout << result << std::endl;

    } while (result != "Congratulations! You have correctly guessed the number!" &&
        result.find("ran out of guesses") == std::string::npos);

    return 0;
}
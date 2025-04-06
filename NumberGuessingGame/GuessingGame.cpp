#include "GuessingGame.h"
#include <random>
#include <string>

GuessingGame::GuessingGame() {
    remainingGuesses = 3;
    outputText = "Enter a lower and upper bound and click Start!";
}

void GuessingGame::randomNumber(int int1, int int2) {
    std::random_device rd;
    std::mt19937 gen(rd());

    int intLower = int1;
    int intHigher = int2;

    // Creating distribution that will transform the random unsigned int 
    // from mt19937 to an int in the specified range
    std::uniform_int_distribution<> distrib(intLower, intHigher);

    int randomGuess = distrib(gen);
    genRandomNumber = randomGuess;
}

std::string GuessingGame::resetNumbers() {
    remainingGuesses = 3;
    outputText = "Enter a lower and upper bound and click Start!";
    return outputText;
}

std::string GuessingGame::PlayerInputGuess(int intGuess) {
    int i = remainingGuesses;
    if (i > 0) {
        if (intGuess > genRandomNumber) {
            remainingGuesses = i - 1;
            if (remainingGuesses == 0) {
                outputText = "You have ran out of guesses! The correct number was " +
                    std::to_string(genRandomNumber) + ".";
            }
            else {
                outputText = "Your guess was too high! Please try again.";
            }
            return outputText;
        }
        else if (intGuess < genRandomNumber) {
            remainingGuesses = i - 1;
            if (remainingGuesses == 0) {
                outputText = "You have ran out of guesses! The correct number was " +
                    std::to_string(genRandomNumber) + ".";
            }
            else {
                outputText = "Your guess was too low! Please try again.";
            }
            return outputText;
        }
        else {
            outputText = "Congratulations! You have correctly guessed the number!";
            return outputText;
        }
    }
    return outputText;
}
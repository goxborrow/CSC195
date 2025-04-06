// GuessingGame.h
#ifndef GUESSING_GAME_H
#define GUESSING_GAME_H

#include <string>

class GuessingGame {
private:
    int genRandomNumber;
    int remainingGuesses;
    std::string outputText;

public:
    GuessingGame();

    void randomNumber(int int1, int int2);
    std::string resetNumbers();
    std::string PlayerInputGuess(int intGuess);
};

#endif
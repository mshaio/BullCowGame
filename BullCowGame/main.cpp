//
//  main.cpp
//  BullCowGame
//
//  Created by mshaio on 1/02/2017.
//  Copyright © 2017 mshaio. All rights reserved.
//

#include <iostream>
#include <string>
#include "FBullCowGame.hpp"

using Ftext = std::string;
using int32 = int;

void PrintIntro();
void PlayGame();
Ftext GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame;//instantiate a new game

//Entry point for out application
int main() {
    
    bool bPlayAgain = false;
    
    do {
        PrintIntro();
        PlayGame();
        bPlayAgain = AskToPlayAgain();
    }
    while (bPlayAgain);
    return 0;
}


// insert code here...
void PrintIntro(){
    constexpr int32 WORLD_LENGTH = 5;
    std::cout << "Welcome to Bulls and Cows, a fun word game\n";
    std::cout << "Can you guess the " << WORLD_LENGTH;
    std::cout << " letter isogram I'm thinking of?\n";
    std::cout << std::endl;
    return;
}

void PlayGame(){
    BCGame.Reset();
    int32 MaxTries = BCGame.GetMaxTries();
    
    //Loop for the number of turns asking fro guesses
    for (int32 count = 1; count <= MaxTries; count++){
        Ftext Guess = GetGuess();
        std::cout << "Your guess wass: " << Guess << std::endl;
        std::cout << std::endl;
    }
}

//get a guess from the player
std::string GetGuess(){
    int32 CurrentTry = BCGame.GetCurrentTry();
    
    std::cout << "Try " << CurrentTry << ". Enter your guess: ";
    Ftext Guess = "";
    getline(std::cin,Guess);
    return Guess;
}

bool AskToPlayAgain(){
    std::cout << "Do you want to play again? (y/n) ";
    Ftext Response = "";
    std::getline(std::cin,Response);
    return (Response[0] == 'y' || Response[0] == 'Y');
}
//
//  FBullCowGame.cpp
//  BullCowGame
//
//  Created by mshaio on 2/03/2017.
//  Copyright © 2017 mshaio. All rights reserved.
//

#include "FBullCowGame.hpp"

FBullCowGame::FBullCowGame(){
    Reset();
}

void FBullCowGame::Reset(){
    constexpr int32 MAX_TRIES = 8;
    
    MyCurrentTry = 1;
    MyMaxTries = MAX_TRIES;
    
    const FString HIDDEN_WORD = "plant";
    MyHiddenWord = HIDDEN_WORD;
    return;
}

int FBullCowGame::GetMaxTries() const{
    return MyMaxTries;
}

int FBullCowGame::GetCurrentTry() const{
    return MyCurrentTry;
}

bool FBullCowGame::IsGameWon() const{
    return false;
}

bool FBullCowGame::CheckGuessValidity(FString){
    return false;
}

BullCowCount FBullCowGame::SubmitGuess(FString){
    MyCurrentTry++;
    BullCowCount BullCowCount;
    return BullCowCount;
}
//
//  FBullCowGame.hpp
//  BullCowGame
//
//  Created by mshaio on 2/03/2017.
//  Copyright © 2017 mshaio. All rights reserved.
//

#ifndef FBullCowGame_hpp
#define FBullCowGame_hpp

#include <stdio.h>
#include <string>

#endif /* FBullCowGame_hpp */

using FString = std::string;
using int32 = int;

struct BullCowCount{
    int32 Bulls = 0;
    int32 Cows = 0;
};

class FBullCowGame{
public:
    FBullCowGame();//constructor
    int32 GetMaxTries() const;
    int32 GetCurrentTry() const;
    bool IsGameWon() const;
    
    void Reset();
    bool CheckGuessValidity(FString);
    
    BullCowCount SubmitGuess(FString);
    
private:
    int32 MyCurrentTry;
    int32 MyMaxTries;
    FString MyHiddenWord;

};

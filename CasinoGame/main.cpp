//
//  main.cpp
//  CasinoGame
//
//  Created by Wenyu Chen on 8/4/24.
//

#include <iostream>
#include "function.hpp"


//two players: dealer and you

int main(){
//    instantiate dealer
    Dealer dealer("Snoop", "Atlantic City", 1000000000);
    //    instantiate user
    std::cout << "Welcome to the game! May I have your name: \n";
    std::string user_name;
    std::cin >> user_name;
    User user(user_name, 0);
//    prize money for a correct guess
    int prizePerGuess = 1000000;
    int cumulativePrize = 0;
    bool moreGame = true;
    
    while(moreGame){
//        game start
        
        if(user.guess() == dealer.guess()) {
            std::cout << "You just won 1,000,000 dollars!";
            cumulativePrize += prizePerGuess;
            user.setprizeMoney(cumulativePrize);
            std::cout << "You won " + formatWithCommas(user.getprizeMoney()) + " dollars so far!\n";
        } else {
            std::cout << "That's not the dealer's number.";
        }
//        play more
        std::cout << "Would you like to play more? y/n\n";
        char moreGameAnswer = ' ';
        std::cin >> moreGameAnswer;
        if(moreGameAnswer == 'y'){moreGame = true;} else if (moreGameAnswer == 'n'){moreGame = false;}
    }
    
    
    return 0;
}

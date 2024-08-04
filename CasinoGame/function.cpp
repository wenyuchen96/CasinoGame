//
//  function.cpp
//  CasinoGame
//
//  Created by Wenyu Chen on 8/4/24.
//

#include "function.hpp"
#include <ctime>
#include <cstdlib>

std::string formatWithCommas(int number) {
    std::string numStr = std::to_string(number);
    std::string::size_type insertPosition = numStr.length() - 3;

    while (insertPosition > 0 && insertPosition < numStr.length()) {
        numStr.insert(insertPosition, ",");
        insertPosition -= 3;
    }

    return numStr;
}


Dealer::Dealer(std::string new_name, std::string new_city, int new_prizePool){
    name = new_name;
    city = new_city;
    prizePool = new_prizePool;
}

int Dealer::guess() {
    
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int dealerGuess = rand() % 9 + 1;
    return dealerGuess;
}

User::User(std::string new_name, int new_prizeMoney){
    name = new_name;
    prizeMoney = new_prizeMoney;
}

int User::guess(){
    std::cout << "Guess a number from 1 to 10: \n";
    int userGuess;
    std::cin >> userGuess;
    return userGuess;
}

int User::getprizeMoney(){
    return prizeMoney;
}

void User::setprizeMoney(int newprizeMoney){
    prizeMoney = newprizeMoney;
}



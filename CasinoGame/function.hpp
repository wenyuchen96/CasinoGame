//
//  function.hpp
//  CasinoGame
//
//  Created by Wenyu Chen on 8/4/24.
//

#ifndef function_hpp
#define function_hpp

#include <stdio.h>
#include <iostream>
#include <algorithm>

std::string formatWithCommas(int number);


class Dealer {
private:
    std::string name;
    std::string city;
    int prizePool;
    
public:
//    constructor declaration
    Dealer(std::string new_name, std::string new_city, int new_prizePool);
    
    int guess();
};


class User {
private:
    std::string name;
    int prizeMoney;
    
public:
    User(std::string new_name, int new_prizeMoney);
    int guess();
    int getprizeMoney();
    void setprizeMoney(int newprizeMoney);
};





#endif /* function_hpp */

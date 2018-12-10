#include "rules.h"

bool Rules::isValid(const Game& g) { 
    //TODO bool isValid(const Game&) returns true is previous and current card match; 
    //false otherwise. 
    return true;
}

bool Rules::gameOver(const Game& g) { 
    //TODO bool gameOver(const Game&) returns true if the number of rounds has reached 7. 
    return false;
}

bool Rules::roundOver(const Game& g) {
    //TODO bool roundOver(const Game&) returns true if there is only one active Player left. 
    return true;
}

const Player& Rules::getNextPlayer(const Game& g) {
    //TODO 
    auto i = g.players
    return (g.players);
}

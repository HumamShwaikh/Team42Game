#include <cstdlib>
#include <vector>
#include "rules.h"

Rules::Rules() {
    
}

bool Rules::isValid(const Game& g) { 
    //TODO bool isValid(const Game&) returns true is previous and current card match; 
    //false otherwise. 
    return true;
}

bool Rules::gameOver(const Game& g) { 
    return g->getRound() == 7;
}

bool Rules::roundOver(const Game& g) {
    int numActive == 0;
    for (auto &i : g.playersVect) {
        if i.isActive() numActive++;
    }
    return (numActive == 1);
}

const Player& Rules::getNextPlayer(const Game& g) {
    //TODO 
    g.currentPlayer++;
    if (g.currentPlayer == nullptr) {
        g.currentPlayer == g.playersVect.begin();
    }
    return g.currentPlayer;
}

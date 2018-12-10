#include <rules.h>

bool Rules::isValid(const Game& g) {
    return true;
}

bool Rules::gameOver(const Game& g) {
    return false;
}

bool Rules::roundOver(const Game& g) {
    return true;
}

const Player& Rules::getNextPlayer(const Game& g) {
    return g.players++;
}

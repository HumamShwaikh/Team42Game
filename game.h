/******************************

Title:   Final Project
Course:  CSI 2372 A - Fall 2018
Date:    December 3, 2018

Contributors:

Name:    Matthew Smith
SID:     7650838
Email:   msmit245@uottawa.ca

Name:    Humam Shwaikh
SID:     7867034
Email:   hshwa039@uottawa.ca

File Number 7 of X

******************************/

#ifndef GAME
#define GAME

#include "player.h"
#include "card.h"
#include "board.h"
#include <vector>
#include <iostream>

class Game {
    
    public:
    
    Game();
    
    int getRound();
    
    void nextRound();
    
    void addPlayer(const Player&);
    
    Player& getPlayer(Side);
    
    // Change return type to <code>Card*</code> when game has Card members
    void getPreviousCard() const;
    
    // Change return type to <code>Card*</code> when game has Card members
    void getCurrentCard() const;
    
    void setCurrentCard(const Card*);
    
    // Change return type to <code>Card*</code> when game has Card members
    void getCard(const Board::Letter&, const Board::Number&);
    
    void setCard(const Board::Letter&, const Board::Number&, Card*);
    
    private:
    
    int round;
    
    Board *board;
    
    static std::vector<Player> players;
    
    Player *current;
    
    friend class rules;
    
    friend std::ostream& operator<<(std::ostream& os, const Game& g) {
        string st = "";
        os << st;
        return os;
    }
    
};

#endif

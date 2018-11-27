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
#include "side.h"
#include "card.h"
#include "board.h"

class Game {
    
    public:
    
    int getRound();
    
    void nextRound();
    
    void addPlayer(const Player&);
    
    Player& getPlayer(Side);
    
    const Card* getPreviousCard();
    
    const Card* getCurrentCard();
    
    void setCurrentCard(const Card*);
    
    Card* getCard(const Letter&, const Number&);
    
    void setCard(const Letter&, const Number&, Card*);
    
};

#endif
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

File Number 6 of X

******************************/

#ifndef RULES
#define RULES

#include <game.h>

class Rules {
    
    public:
    
    bool isValid(const Game&);
    
    bool gameOver(const Game&);
    
    bool roundOver(const Game&);
    
    const Player& getNextPlayer(const Game&);
    
};

#endif

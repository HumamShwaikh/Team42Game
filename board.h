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

File Number 8 of X

******************************/

#ifndef BOARD
#define BOARD

#include <array>
#include "card.h"

class Board {
    
    public:
    
    enum Number {One=1, Two=2, Three=3, Four=4, Five=5};
    enum Letter {A, B, C, D, E};
    
    bool isFaceUp(const Letter&, const Number&);
    
    bool turnFaceUp(const Letter&, const Number&);
    
    bool turnFaceDown(const Letter&, const Number&);
    
    // Change return type to <code>Card*</code> when board has Card members
    void getCard(const Letter&, const Number&);
    
    void setCard(const Letter&, const Number&, Card*);
    
    void reset();
    
    // TODO: Implement
    friend std::ostream& operator<<(std::ostream& os, const Board& b) {
        //os << std::to_string(r.value);
        return os;
    }
};

#endif
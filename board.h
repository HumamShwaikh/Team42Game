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

class Board {
    
    enum Number {1, 2, 3, 4, 5};
    enum Letter {A, B, C, D, E};
    
    bool isFaceUp(const Letter&, const Number&);
}

#endif
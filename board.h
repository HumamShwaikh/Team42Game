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

#include <string>
#include <array>
#include "card.h"
#include "carddeck.h"

class Board {
    
    public:
    
    Board();
    ~Board();
    
    enum Number {One, Two, Three, Four, Five};
    enum Letter {A, B, C, D, E};
    
    CardDeck cDeck;
    
    int faceUp[25];
    Card roundCardIndex[24];
    
    bool isFaceUp(const Letter&, const Number&);
    
    bool turnFaceUp(const Letter&, const Number&);
    
    bool turnFaceDown(const Letter&, const Number&);
    
    // Change return type to <code>Card*</code> when board has Card members
    void getCard(const Letter&, const Number&);
    
    void setCard(const Letter&, const Number&, Card*);
    
    void reset();
    
    private:
    
    // Enumerator converters
    static char getRow(const Letter&);
    static char getCol(const Number&);
    int getRowIndex(const Letter&);
    int getColIndex(const Number&);
    int numIndex(const Letter& letter, const Number& number);
    
    string *board;
    
    friend std::ostream& operator<<(std::ostream& os, const Board& b) {
        Letter iterLet = A;         // For printing row indices
        Number iterNum = One;       // For printing column indices at bottom of board
        string st = "";
        for (int i=0; i<19; i++) {
            if (i%4 == 1) {     // Print the letter corresponding to the row
                st += getRow(iterLet);
                iterLet = static_cast<Letter>(iterLet + 1);   // Go to next value in Letter enum
                st += " ";          // Add the buffer space after the letter
            } else st += "  ";      // Add two buffer spaces for rows without letter
            st += b.board[i] + "\n";  // Print the row of the board
        }
        st += "\n";                 // Empty line separating bottom column index row
        st += "   ";                // First three empty spaces
        for (int j=0; j<19; j++) {  // Column indices
            if (j%4 == 0) {
                st += getCol(iterNum);
                iterNum = static_cast<Number>(iterNum + 1);
            } else st += " ";
        }
        st += "\n";
        os << st;
        return os;
    }
};

#endif
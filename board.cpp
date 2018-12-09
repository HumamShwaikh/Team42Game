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

File Number 9 of X

******************************/

#include <iostream>
#include "board.h"
#include "deck.h"
#include "carddeck.h"

Board::Board() : cDeck(25) {
    
    for (int i=0; i<25; i++) {
        faceUp[i] = 0;  // Set all cards face down
    }
    
    board = new string[19];
    
    update();
}

bool Board::isFaceUp(const Letter& letter, const Number& number) {
    return faceUp[numIndex(letter, number)] == 1;
}

bool Board::turnFaceUp(const Letter& letter, const Number& number) {
    if (isFaceUp(letter,number)) {
        return false;
    }
    faceUp[numIndex(letter, number)] = 1;
    update();
    return true;
}

bool Board::turnFaceDown(const Letter& letter, const Number& number) {
    if (!isFaceUp(letter,number)) {
        return false;
    } else {
        faceUp[numIndex(letter, number)] = 0;
        update();
        return true;
    }
}

int Board::getRowIndex(const Letter& letter) {
    int row;
    switch(letter) {
        case A:
            row = 0;
            break;
        case B:
            row = 1;
            break;
        case C:
            row = 2;
            break;
        case D:
            row = 3;
            break;
        case E:
            row = 4;
            break;
        default:
            row = 1;
            break;
    }
    return row;
}

int Board::getColIndex(const Number& number) {
    int col;
    switch(number) {
        case One:
            col = 0;
            break;
        case Two:
            col = 1;
            break;
        case Three:
            col = 2;
            break;
        case Four:
            col = 3;
            break;
        case Five:
            col = 4;
            break;
        default:
            col = 1;
            break;
    }
    return col;
}


int Board::numIndex(const Letter& letter, const Number& number) {
    return 5*getRowIndex(letter) + getColIndex(number);
}



// Change return type to <code>Card*</code> when board has Card members
void Board::getCard(const Letter& letter, const Number& number) {
    int index = numIndex(letter, number);
    
}

void Board::setCard(const Letter& letter, const Number& number, Card* c) {
    
}

void Board::reset() {
    for (int i=0; i<25; i++) {
        faceUp[i] = 0;
    }
    update();
}

// Returns a character representing the animal - for use in card printing
char Board::getRow(const Letter& letter) {
    char row;
    switch(letter) {
        case A:
            row = 'A';
            break;
        case B:
            row = 'B';
            break;
        case C:
            row = 'C';
            break;
        case D:
            row = 'D';
            break;
        case E:
            row = 'E';
            break;
        default:
            row = '#'; // If you see this printed, there was an error somewhere
    }
    return row;
}

// Returns a character representing the background - for use in card printing
char Board::getCol(const Number& number) {
    char col;
    switch(number) {
         case One:
            col = '1';
            break;
        case Two:
            col = '2';
            break;
        case Three:
            col = '3';
            break;
        case Four:
            col = '4';
            break;
        case Five:
            col = '5';
            break;
        default:
            col = '%'; // If you see this printed, there was an error somewhere
    }
    return col;
}

void Board::update() {
    for (int i=0; i<24; i++) {
        roundCardIndex[i] = cDeck.getNext();
    }
    
    int counter1=0; // Holds the current card row
    int counter2=1; // Holds the current 
    
    Letter iterLet = A; 
    Number iterNum = One; 
    
    for (int i=0; i<19; i++) {
        board[i] = "";
        if (i%4 == 3) {
            board[i] = "                   "; // Empty rows placed between cards and at end of board
            counter1 += 5;
        } else if (i==8 || i==9 || i==10) { // For the middle rows
            if (i%4 == 0) {
                
                if (!isFaceUp(iterLet,iterNum)) {
                    board[i] += "zzz ";
                } else {
                    board[i] += roundCardIndex[counter1](counter2) + " ";
                }
                
                if (!isFaceUp(iterLet,static_cast<Number>(iterNum + 1))) {
                    board[i] += "zzz ";
                } else {
                    board[i] += roundCardIndex[counter1+1](counter2) + " ";
                }
                
                board[i] += "    ";
                
                if (!isFaceUp(iterLet,static_cast<Number>(iterNum + 3))) {
                    board[i] += "zzz ";
                } else {
                    board[i] += roundCardIndex[counter1+2](counter2) + " ";
                }
                
                if (!isFaceUp(iterLet,static_cast<Number>(iterNum + 4))) {
                    board[i] += "zzz ";
                } else {
                    board[i] += roundCardIndex[counter1+3](counter2) + " ";
                }
            } else if (i%4 == 1) {
                
                if (!isFaceUp(iterLet,iterNum)) {
                    board[i] += "zzz ";
                } else {
                    board[i] += roundCardIndex[counter1](counter2+1) + " ";
                }
                
                if (!isFaceUp(iterLet,static_cast<Number>(iterNum + 1))) {
                    board[i] += "zzz ";
                } else {
                    board[i] += roundCardIndex[counter1+1](counter2+1) + " ";
                }
                
                board[i] += "    ";
                
                if (!isFaceUp(iterLet,static_cast<Number>(iterNum + 3))) {
                    board[i] += "zzz ";
                } else {
                    board[i] += roundCardIndex[counter1+2](counter2+1) + " ";
                }
                
                if (!isFaceUp(iterLet,static_cast<Number>(iterNum + 4))) {
                    board[i] += "zzz ";
                } else {
                    board[i] += roundCardIndex[counter1+3](counter2+1) + " ";
                }
            } else {
                
                if (!isFaceUp(iterLet,iterNum)) {
                    board[i] += "zzz ";
                } else {
                    board[i] += roundCardIndex[counter1](counter2+2) + " ";
                }
                
                if (!isFaceUp(iterLet,static_cast<Number>(iterNum + 1))) {
                    board[i] += "zzz ";
                } else {
                    board[i] += roundCardIndex[counter1+1](counter2+2) + " ";
                }
                
                board[i] += "    ";
                
                if (!isFaceUp(iterLet,static_cast<Number>(iterNum + 3))) {
                    board[i] += "zzz ";
                } else {
                    board[i] += roundCardIndex[counter1+2](counter2+2) + " ";
                }
                
                if (!isFaceUp(iterLet,static_cast<Number>(iterNum + 4))) {
                    board[i] += "zzz ";
                } else {
                    board[i] += roundCardIndex[counter1+3](counter2+2) + " ";
                }
            }
        } else {
            if (i%4 == 0) {
                
                if (!isFaceUp(iterLet,iterNum)) {
                    board[i] += "zzz ";
                } else {
                    board[i] += roundCardIndex[counter1](counter2) + " ";
                }
                
                if (!isFaceUp(iterLet,static_cast<Number>(iterNum + 1))) {
                    board[i] += "zzz ";
                } else {
                    board[i] += roundCardIndex[counter1+1](counter2) + " ";
                }
                
                if (!isFaceUp(iterLet,static_cast<Number>(iterNum + 2))) {
                    board[i] += "zzz ";
                } else {
                    board[i] += roundCardIndex[counter1+2](counter2) + " ";
                }
                
                if (!isFaceUp(iterLet,static_cast<Number>(iterNum + 3))) {
                    board[i] += "zzz ";
                } else {
                    board[i] += roundCardIndex[counter1+3](counter2) + " ";
                }
                
                if (!isFaceUp(iterLet,static_cast<Number>(iterNum + 4))) {
                    board[i] += "zzz ";
                } else {
                    board[i] += roundCardIndex[counter1+4](counter2) + " ";
                }
            } else if (i%4 == 1) {
                
                if (!isFaceUp(iterLet,iterNum)) {
                    board[i] += "zzz ";
                } else {
                    board[i] += roundCardIndex[counter1](counter2+1) + " ";
                }
                
                if (!isFaceUp(iterLet,static_cast<Number>(iterNum + 1))) {
                    board[i] += "zzz ";
                } else {
                    board[i] += roundCardIndex[counter1+1](counter2+1) + " ";
                }
                
                if (!isFaceUp(iterLet,static_cast<Number>(iterNum + 2))) {
                    board[i] += "zzz ";
                } else {
                    board[i] += roundCardIndex[counter1+2](counter2+1) + " ";
                }
                
                if (!isFaceUp(iterLet,static_cast<Number>(iterNum + 3))) {
                    board[i] += "zzz ";
                } else {
                    board[i] += roundCardIndex[counter1+3](counter2+1) + " ";
                }
                
                if (!isFaceUp(iterLet,static_cast<Number>(iterNum + 4))) {
                    board[i] += "zzz ";
                } else {
                    board[i] += roundCardIndex[counter1+4](counter2+1) + " ";
                }
            } else {
                if (!isFaceUp(iterLet,iterNum)) {
                    board[i] += "zzz ";
                } else {
                    board[i] += roundCardIndex[counter1](counter2+2) + " ";
                }
                
                if (!isFaceUp(iterLet,static_cast<Number>(iterNum + 1))) {
                    board[i] += "zzz ";
                } else {
                    board[i] += roundCardIndex[counter1+1](counter2+2) + " ";
                }
                
                if (!isFaceUp(iterLet,static_cast<Number>(iterNum + 2))) {
                    board[i] += "zzz ";
                } else {
                    board[i] += roundCardIndex[counter1+2](counter2+2) + " ";
                }
                
                if (!isFaceUp(iterLet,static_cast<Number>(iterNum + 3))) {
                    board[i] += "zzz ";
                } else {
                    board[i] += roundCardIndex[counter1+3](counter2+2) + " ";
                }
                
                if (!isFaceUp(iterLet,static_cast<Number>(iterNum + 4))) {
                    board[i] += "zzz ";
                } else {
                    board[i] += roundCardIndex[counter1+4](counter2+2) + " ";
                }
            }
        }
        if (i==11) --counter1;
    }
}

void Board::testPrinting() {
    for (int i=0; i<25; i++) {
            std::cout << faceUp[i] << " ";
        }
    std::cout << std::endl;
}

Board::~Board() {
    
}
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

#include "board.h"

Board::Board() {
    board = new string[19];
    for (int i=0; i<19; i++) {
        if (i%4 == 3) {
            board[i] = "                   ";
        } else board[i] = "%%% %%% %%% %%% %%%";
    }
}

bool Board::isFaceUp(const Letter& letter, const Number& number) {
    
    return false;
}

bool Board::turnFaceUp(const Letter& letter, const Number& number) {
    
    return false;
}

bool Board::turnFaceDown(const Letter& letter, const Number& number) {
    
    return false;
}

// Change return type to <code>Card*</code> when board has Card members
void Board::getCard(const Letter& letter, const Number& number) {
    
    // Add return
}

void Board::setCard(const Letter& letter, const Number& number, Card* c) {
     
}

void Board::reset() {
    
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

Board::~Board() {
    
}
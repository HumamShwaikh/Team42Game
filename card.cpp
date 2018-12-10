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
File Number C of X
******************************/


#include <string>
#include <iostream>
#include "card.h"

using std::string;


Card::Card(FaceAnimal a, FaceBackground b) : animal(a), background(b) {
}

Card::Card() {}

// Returns a character representing the animal - for use in card printing
char Card::getAnimalChar() const {
    return char(animal);
}

// Returns a character representing the background - for use in card printing
char Card::getBackgroundChar() const {
    return char(background);
}

// Returns the number of rows in the card (update later)
int Card::getNRows() const {
    return 3;
}

// Overloading the function call operator. Prints the row corresponding to the argument
string Card::operator()(int row) {
     // First element is always same, also must be cast to string to be able to use "+"
    string currentRow = string(1,getBackgroundChar());
    switch(row) {
        case 1: // If first row, print background colour in middle
            currentRow += getBackgroundChar();
            break;
        case 2: // If second row, print animal in middle
            currentRow += getAnimalChar();
            break;
        case 3: // If third row, print background colour in middle
            currentRow += getBackgroundChar();
            break;
        default:
            currentRow = "";
            break;
    }
    // Last element is always same
    currentRow += getBackgroundChar();
    return currentRow;
}




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
#include "card.h"

using std::string;


Card::Card(FaceAnimal a, FaceBackground b) {
	animal = a;
	background = b;
}

// Returns a character representing the animal - for use in card printing
char Card::getAnimalChar() const {
    char an;
    switch(animal) {
        case Crab:
            an = 'C';
            break;
        case Penguin:
            an = 'P';
            break;
        case Octopus:
            an = 'O';
            break;
        case Turtle:
            an = 'T';
            break;
        case Walrus:
            an = 'W';
            break;
        default:
            an = '#'; // If you see this printed, there was an error somewhere
    }
    return an;
}

// Returns a character representing the background - for use in card printing
char Card::getBackgroundChar() const {
    char bg;
    switch(background) {
         case Red:
            bg = 'r';
            break;
        case Green:
            bg = 'g';
            break;
        case Purple:
            bg = 'p';
            break;
        case Blue:
            bg = 'b';
            break;
        case Yellow:
            bg = 'y';
            break;
        default:
            bg = '%'; // If you see this printed, there was an error somewhere
    }
    return bg;
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
            currentRow = "zzz";
            break;
    }
    // Last element is always same
    currentRow += getBackgroundChar();
    return currentRow;
}




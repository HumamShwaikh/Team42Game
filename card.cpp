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
            an = '#';
    }
    return an;
}

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
            bg = '%';
    }
    return bg;
}

string Card::operator()(int row) {
    string currentRow;
    switch(row) {
        case 1:
            currentRow = string(1,getBackgroundChar()) + getBackgroundChar() + getBackgroundChar();
            break;
        case 2:
            currentRow = string(1,getBackgroundChar()) + getAnimalChar() + getBackgroundChar();
            break;
        case 3:
            currentRow = string(1,getBackgroundChar()) + getBackgroundChar() + getBackgroundChar();
            break;
        default:
            currentRow = "zzz";
            break;
    }
    return currentRow;
}




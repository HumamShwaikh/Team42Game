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

File Number 4 of X

******************************/

#include "player.h"


// Default constructor
Player::Player() {
    
}
    

// Constructor
Player::Player(string name, Side sideOfBoard) {
    this->name = name;
    this->sideOfBoard = sideOfBoard;
    rubies = 0;
    endOfGame = false;
}
   

// Get the player's name as a string
 string Player::getName() const {
    return name;
}

// Get the player's side of the board as a string
string Player::getSideAsString() const {
    string side;
    switch(sideOfBoard) {
        case top:
        side = "top";
        break;
        case bottom:
        side = "bottom";
        break;
        case left:
        side = "left";
        break;
        case right:
        side = "right";
        break;
        default:
        side = "Side uninitialized";
        break;
    }
    return side;
}

// Get the player's side of the board
Side Player::getSide() {
    return side;
}

// Set the player's side of the board
void Player::setSide(Side sideOfBoard) {
    this->sideOfBoard = sideOfBoard;
}  

// Function to set the active status of the player
void Player::setActive(bool active) {
    status = active;
}


// Get the current status of the player
bool Player::isActive() {
    return status;
}
    

// Get the current score of the player
int Player::getNRubies() {
    return rubies;
}
    

// Increase the score of the player
void Player::addReward(const Reward& reward) {
    
}
    

// Set Player's display mode
void Player::setDisplayMode(bool endOfGame) {
    this->endOfGame = endOfGame;
}

// Return the player's status as a string
string Player::getStatus() const {
    return status ? "active" : "inactive";
}
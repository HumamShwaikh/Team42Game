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
Player::Player(string name, char sideOfBoard) {
    this->name = name;
    this->sideOfBoard = sideOfBoard;
    rubies = 0;
    endOfGame = false;
}
   

// Get the player's name as a string
 string Player::getName() {
    return name;
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
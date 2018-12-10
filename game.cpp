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

File Number 10 of X

******************************/

#include "game.h"
#include "board.h"
#include "player.h"
#include "card.h"
#include "deck.h"

Game::Game() {
    round = 0;
    board = new Board();
}

int Game::getRound() {
    return round;
}

void Game::nextRound() {
    ++round;
    board->reset();
    // TODO: finish
}

void Game::addPlayer(const Player& p) {
    // ************************ TODO: Check if player is already contained **********************
    // *************************** If yes, then update instead of adding  ***********************
    players.push_back(p);
}

// No checks for this one. Will return garbage if player does not exist (fix?)
Player& Game::getPlayer(Side side) {
    auto p = players.begin();
    while (p != players.end()) {
        if (p->getSide() == side) break;
        ++p;
    }
    return *p;
}

// Change return type to <code>Card*</code> when game has Card members
void Game::getPreviousCard() const {
    
}

// Change return type to <code>Card*</code> when game has Card members
void Game::getCurrentCard() const {
    
}

void Game::setCurrentCard(const Card* c) {
    
}

// Change return type to <code>Card*</code> when game has Card members
void Game::getCard(const Board::Letter& letter, const Board::Number& number) {
    
}

void Game::setCard(const Board::Letter& letter, const Board::Number& number, Card* c) {
    
}
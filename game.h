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

File Number 7 of X

******************************/

#ifndef GAME
#define GAME

#include "player.h"
#include "card.h"
#include "board.h"
#include <vector>
#include <iostream>

class Game {
    
    public:
    
    Game();
    
    int getRound();
    
    void nextRound();
    
    void addPlayer(const Player&);
    
    Player& getPlayer(Side);
    
    // Change return type to <code>Card*</code> when game has Card members
    void getPreviousCard() const;
    
    // Change return type to <code>Card*</code> when game has Card members
    void getCurrentCard() const;
    
    void setCurrentCard(const Card*);
    
    // Change return type to <code>Card*</code> when game has Card members
    void getCard(const Board::Letter&, const Board::Number&);
    
    void setCard(const Board::Letter&, const Board::Number&, Card*);
    
    int numPlayers();
    
    Board *board;
    
    std::vector<Player> playersVect;
    
    private:
    
    int round;
    bool endOfGame;
    
    std::vector<Player>::iterator currentPlayer;
    
    friend class rules;
    
    friend std::ostream& operator<<(std::ostream& os, const Game& g) {
        
        // Print players
        string st = "";
        for (auto &i : g.playersVect) {
            if (g.endOfGame) {  // If game is over, shows score
            st += i.getName() + ": " + std::to_string(i.getNRubies()) + " rubies\n";
        } else {            // If game not over, shows Side and active status
            st += i.getName() + ": " + i.getSideAsString() + " (" + i.getStatus() + ")\n";
            }
        }
        st += "\n";
        
        // Print board in current state
        Board::Letter iterLet = Board::A;         // For printing row indices
        Board::Number iterNum = Board::One;       // For printing column indices at bottom of board
        for (int i=0; i<19; i++) {
            if (i%4 == 1) {     // Print the letter corresponding to the row
                st += g.board->getRow(iterLet);
                iterLet = static_cast<Board::Letter>(iterLet + 1);   // Go to next value in Letter enum
                st += " ";          // Add the buffer space after the letter
            } else st += "  ";      // Add two buffer spaces for rows without letter
            st += g.board->board[i] + "\n";  // Print the row of the board
        }
        
        st += "\n";                 // Empty line separating bottom column index row
        st += "   ";                // First three empty spaces
        for (int j=0; j<19; j++) {  // Column indices
            if (j%4 == 0) {
                st += g.board->getCol(iterNum);
                iterNum = static_cast<Board::Number>(iterNum + 1);
            } else st += " ";
        }
        
        st += "\n";
        os << st;
        return os;
    }
    
};

#endif

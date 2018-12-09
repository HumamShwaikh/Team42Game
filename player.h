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

File Number 2 of X

******************************/

#ifndef PLAYER
#define PLAYER

#include <string>
#include "reward.h"

using std::string;

enum Side {top, bottom, left, right, end};

class Player {
    
    public:
    
    // Default constructor
    Player();
    
    // Constructor
    Player(string, Side);
    
    // Get the player's name as a string
    string getName() const;
    
    // Get the player's Side
    Side getSide() const;
    
    // Set the player's Side
    void setSide(Side);
    
    // Function to set the active status of the player
    void setActive(bool);
    
    // Get the current status of the player
    bool isActive();
    
    // Get the current score of the player
    int getNRubies() const;
    
    // Increase the score of the player
    void addReward(const Reward&);
    
    // Set Player's display mode
    void setDisplayMode(bool);
    
    private:
    
    // Return the player's status (no public use)
    string getStatus() const;
    
    // Convert Side enum to its string value
    string getSideAsString() const;
    
    string name;            // Stores player's name
    
    Side side;              // Stores player's side
    
    bool status;            // Stores player's status
    
    bool endOfGame;         // Changes display mode of player based on game status
    
    int rubies;             // Stores player's score
    
    // Overloading the output stream operator based on game status
    friend std::ostream& operator<<(std::ostream& os, const Player& p) {
        if (p.endOfGame) {  // If game is over, shows score
            os << p.name + ": " + std::to_string(p.getNRubies()) + " rubies\n";
        } else {            // If game not over, shows Side and active status
            os << p.name + ": " + p.getSideAsString() + " (" + p.getStatus() + ")\n";
        }
        return os;
    }
};

#endif
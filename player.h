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

using std::string;

class Reward;

enum Side {
    top,
    bottom,
    left,
    right
};

class Player {
    
    public:
    
    // Default constructor
    Player();
    
    // Constructor
    Player(string, Side);
    
    // Get the player's name as a string
    string getName() const;
    
    // Get the player's Side
    Side getSide();
    
    // Set the player's Side
    void setSide(Side);
    
    // Function to set the active status of the player
    void setActive(bool);
    
    // Get the current status of the player
    bool isActive();
    
    // Get the current score of the player
    int getNRubies();
    
    // Increase the score of the player
    void addReward(const Reward&);
    
    // Set Player's display mode
    void setDisplayMode(bool);
    
    private:
    
    string getStatus() const;
    
    string getSideAsString() const;
    
    string name;          // Stores player's name
    
    Side side;            // Stores player's side
    
    bool status;          // Stores player's status
    
    bool endOfGame;       // Changes display mode of player based on game status
    
    Side sideOfBoard;     // Stores player's location
    
    int rubies;           // Stores player's score
    
    // TODO: Implement this to print differently depending on game status
    friend std::ostream& operator<<(std::ostream& os, const Player& p) {
        os << p.name + ": " + p.getSideAsString() + " (" + p.getStatus() + ")\n";
        return os;
    }
};

#endif
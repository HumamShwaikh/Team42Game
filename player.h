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

class Player {
    
    public:
    
    // Default constructor
    Player();
    
    // Constructor
    Player(string name, char sideOfBoard);
    
    // Get the player's name as a string
    string getName();
    
    // Function to set the active status of the player
    void setActive(bool active);
    
    // Get the current status of the player
    bool isActive();
    
    // Get the current score of the player
    int getNRubies();
    
    // Increase the score of the player
    void addReward(const Reward& reward);
    
    // Set Player's display mode
    void setDisplayMode(bool endOfGame);
    
    private:
    
    string name;          // Stores player's name
    
    bool status;          // Stores player's status
    
    bool endOfGame;       // Changes display mode of player based on game status
    
    char sideOfBoard;     // Stores player's location
    
    int rubies;           // Stores player's score
    
    friend std::ostream& operator<<( std::ostream&, const Player& );
};




#endif
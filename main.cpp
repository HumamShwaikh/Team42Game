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

File Number 1 of X 

******************************/

#include <iostream>
#include <vector>
#include <string>
#include "player.h"
#include "card.h"
#include "reward.h"


int main() {
    
    std::vector<Player> players;
    
    // ============================ Get Game Mode ============================
    
    std::cout << std::endl;
    std::cout << "Welcome to Memoarrr! Please select a game version:\n"
                    "[1] Basic    [2] Expert Display    [3] Expert Rules    [4] Combined Expert" << std::endl;
    
    int gameMode;
    while(gameMode < 1 || gameMode > 4) {   // Verify input
        std::cin >> gameMode;
    }
    
    // ************************ [TODO: Handle game mode selection] ************************
    
    
    // ============================ Get Number of Players ============================
    
    std::cout << "[INSERT NAME] mode selected. Please enter the number of players (2-4):" << std::endl;
    
    int numPlayers;
    while(numPlayers < 2 || numPlayers > 4) {   // Verify input
        std::cin >> numPlayers;
    }
    
    // ============================ Get Player's Names ============================
    
    string name;
    
    while (players.size() != numPlayers) {
        std::cout << "Player " << players.size() + 1 << "'s name: ";
        std::cin >> name;
        players.push_back(Player(name));
    }
    
    // ************************ [TODO: Game implementation] ************************
    
    return 0;
}

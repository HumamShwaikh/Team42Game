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
#include "board.h"

void showPlayerCards(const Player&, const Board&);

int main() {
    
    std::vector<Player> players;
    
    // ============================ Get Game Mode ============================
    
    std::cout << std::endl;
    std::cout << "Welcome to Memoarrr! Please select a game version:\n"
                    "[1] Basic    [2] Expert Display    [3] Expert Rules    [4] Combined Expert" << std::endl;
    
    int gameMode;
    gameMode = 0;
    
    while(gameMode < 1 || gameMode > 4) {   // Wait for correct input
        std::cin >> gameMode;
    }
    
    switch(gameMode) {
        case 1:
        // ***************** [TODO: Set up basic rules] ******************
        std::cout << "Basic";
        break;
        case 2:
        // ***************** [TODO: Set up expert display rules] ******************
        std::cout << "Expert Display";
        break;
        case 3:
        // ***************** [TODO: Set up expert rules rules] ******************
        std::cout << "Expert Rules";
        break;
        case 4:
        // ***************** [TODO: Set up combined expert rules] ******************
        std::cout << "Combined Expert";
        break;
        default:
        // ***************** [TODO: Set up basic rules] ******************
        std::cout << "Basic";
        break;
    }
    
    
    // ============================ Get Number of Players ============================
    
    std::cout << " mode selected. Please enter the number of players (2-4):" << std::endl;
    
    int numPlayers = 0;
    while(numPlayers < 2 || numPlayers > 4) {   // Wait for correct input
        std::cin >> numPlayers;
    }
    
    // ============================ Get Player's Names ============================
    
    string name;
    
    while (players.size() != numPlayers) {
        std::cout << "Player " << players.size() + 1 << "'s name: ";
        std::cin >> name;
        players.push_back(Player(name));
    }
    
    for (auto &i : players) {
        i.setActive(true);
    }
    
    std::cout << std::endl;
    
    // ************************ [TODO: Game implementation] ************************
    
    std::cout << std::endl;
    
    Board *bd = new Board();
    std::cout << *bd;
    
    for (auto &i : players) {
        showPlayerCards(i,*bd);
    }
    
    /*
    std::cout << "Printing test board: \n" << std::endl; ;
    
    Board *bd = new Board();
    std::cout << *bd;
    
    bd->reset();
    
    std::cout << *bd;
    */
    
    std::cout << "\nProgram terminated. No further implementation has been provided (end of main() reached)." << std::endl;
    return 0;
}

void showPlayerCards(const Player& p, const Board& b) {
    std::cout << "Player " << p.getName() << ", press any key when you are ready to have 3 cards revealed to you." << std::endl;
    std::getchar();
    
}

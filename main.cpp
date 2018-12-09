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

void showPlayerCards(Player&, Board&);

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
    
    Side nextAvailSide = Side::top;
    
    while (players.size() != numPlayers) {
        std::cout << "Player " << players.size() + 1 << "'s name: ";
        std::cin >> name;
        players.push_back(Player(name, nextAvailSide));
        nextAvailSide = static_cast<Side>(nextAvailSide + 1);
    }
    
    std::cout << "\nTotal registerd platers:\n" << std::endl;
    
    for (auto &i : players) {
        i.setActive(true);
        std::cout << i;
    }
    
    std::cout << std::endl;
    
    // ************************ [TODO: Game implementation] ************************
    
    Board *bd = new Board();
    std::cout << *bd;
    
    std::cout << std::endl;
    std::getchar();
    
    for (auto &i : players) {
        showPlayerCards(i,*bd);
    }
    
    
    
    std::cout << "\nProgram terminated. No further implementation has been provided (end of main() reached).\n" << std::endl;
    return 0;
}

void showPlayerCards(Player& p, Board& b) {
    std::cout << "\nPlayer " << p.getName() << ", press ENTER when you are ready to have 3 cards revealed to you." << std::endl;
    std::getchar();
    switch(p.getSide()) {
        case top:
            b.turnFaceUp(Board::A, Board::Two);
            b.turnFaceUp(Board::A, Board::Three);
            b.turnFaceUp(Board::A, Board::Four);
            break;
        case bottom:
            b.turnFaceUp(Board::E, Board::Two);
            b.turnFaceUp(Board::E, Board::Three);
            b.turnFaceUp(Board::E, Board::Four);
            break;
        case left:
            b.turnFaceUp(Board::B, Board::One);
            b.turnFaceUp(Board::C, Board::One);
            b.turnFaceUp(Board::D, Board::One);
            break;
        case right:
            b.turnFaceUp(Board::B, Board::Five);
            b.turnFaceUp(Board::C, Board::Five);
            b.turnFaceUp(Board::D, Board::Five);
            break;
        default:
            break;
    }
    b.testPrinting();
    
    std::cout << b;
    
    std::cout << "\nPress ENTER when you are done." << std::endl;
    std::getchar();
    
    b.reset(); // Turn cards back over
    std::cout << b;
}

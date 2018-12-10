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

File Number 5 of X

******************************/

#ifndef REWARDDECK
#define REWARDDECK

#include "deck.h"
#include "reward.h"

class RewardDeck : Deck<Reward> {
    public:
    
    RewardDeck(int size);
    virtual ~RewardDeck();
    
	RewardDeck& make_RewardDeck();
    
    private:
    
    int size;
    
    void shuffle();
	Reward getNext();
    bool isEmpty();
    RewardDeck& operator=(const RewardDeck&); // Private copy constructor
    
    friend class Board;
};

#endif

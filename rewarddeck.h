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
	//This function can be called anytime but has to always return the same deck
	RewardDeck& make_RewardDeck();
    
private:
	const int MAX_SIZE = 7; //4 Reward(1) 2 Reward(2) 1 Reward(3) 1 Reward(4)
	    
    void shuffle();
    
	Reward getNext();
	
    bool isEmpty();
    
    RewardDeck& operator=(const RewardDeck&); // Private copy constructor

    
    ~RewardDeck();
    
};

#endif

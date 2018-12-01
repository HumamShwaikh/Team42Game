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

template<typename T>

class RewardDeck : Deck<T> {
public:
	//This function can be called anytime but has to always return the same deck
	static RewardDeck& make_RewardDeck();
    
private:
	const int MAX_SIZE = 25; //Not sure what this should be
	std::vector<T> elements;
	    
    void shuffle();
    
	T getNext();
	
    bool isEmpty();
    
    ~CardDeck();
    
};

#endif

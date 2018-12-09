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
#include <vector>
#include <algorithm> 
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "rewarddeck.h"
#include "reward.h"

RewardDeck& RewardDeck::make_RewardDeck(){
    // If a deck doesn't exist, it will make 1 of every Reward, and then shuffle, otherwise return the current deck
	if (elements.empty()){
        elements.push_back(Reward(1));
        elements.push_back(Reward(1));
        elements.push_back(Reward(1));
        elements.push_back(Reward(1));
        elements.push_back(Reward(2));
        elements.push_back(Reward(2));
        elements.push_back(Reward(3));
        elements.push_back(Reward(4));

	}
	return *this;
}

void RewardDeck::shuffle() {
    if (!isEmpty()) {
        std::srand(std::time(0));
        std::random_shuffle(elements.begin(), elements.end());
    }

}

Reward RewardDeck::getNext() {
    ++current;
    return *current;
}

bool RewardDeck::isEmpty() {
    
	return elements.empty();
}

RewardDeck::~RewardDeck() {
	auto temp = elements.begin();
	for (auto i = elements.begin(); i < elements.end()-1; ++i) {
		delete temp;
		temp = i;
	}
	delete temp;
	delete elements;
}

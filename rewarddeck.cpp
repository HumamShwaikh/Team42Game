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
#include <cstdlib>
#include "rewarddeck.h"
#include "reward.h"

static RewardDeck& make_RewardDeck(){
    // If a deck doesn't exist, it will make 1 of every Reward, and then shuffle, otherwise return the current deck
	if (elements == nullptr){
		for (int i = 0; i < MAX_SIZE; i++) {
		this->elements.push_back({std::rand() % 100 + 1});
		}
	}
	return this;
}

void shuffle() {
	std::random_shuffle(elements.begin(), elements.end());
}

Reward getNext() {
	if (elements.size() > 0) {
		return elements.pop_back();
	}
	return nullptr;
}

bool isEmpty() {
	return elements.empty();
}

~RewardDeck() {
	auto temp = elements.begin();
	for (auto i = elements.begin(); i < elements.end()-1; ++i) {
		delete temp;
		temp = i;
	}
	delete temp;
	delete elements;
}

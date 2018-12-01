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

#include "carddeck.h"
#include "card.h"

static CardDeck& make_CardDeck(){
    if (inPlay == null){
		
		inPlay == new Deck<Card>;
	}
	return inPlay;
}

    
void shuffle() {
	std::random_shuffle(elements.begin(), elements.end());
}

Card getNext() {
	for (auto i = elements.begin(); i < elements.end()-1; ++i) {
		if (i == current) {
			++i;
			return i;
		}
	}
	return nullptr;
}

bool isEmpty() {
	return elements.empty();
}

~CardDeck() {
	auto temp = elements.begin();
	for (auto i = elements.begin(); i < elements.end()-1; ++i) {
		delete temp;
		temp = i;
	}
	delete temp;
	delete elements;
}

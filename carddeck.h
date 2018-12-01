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
#ifndef CARDDECK
#define CARDDECK

#include "deck.h"
#include "card.h"

class CardDeck : Deck<Card> {
public:
	//This function can be called anytime but has to always return the same deck
	static CardDeck& make_CardDeck();
    
private:
	int size;      //Might be handy to keep track of the deck size
	Card* top;
	CardDeck& inPlay;
	std::vector<Card> elements;
    Card* current;
	
	Deck<T>();
    
    void shuffle() {};
    
	Card getNext() {};
	
    bool isEmpty() {};
    
    ~CardDeck() {};
	
	
}

#endif

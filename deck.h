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
File Number C of X
******************************/

#ifndef DECK
#define DECK

#include <string>


class Deck<C> {    
    void Shuffle() = 0;
	C* getNext() = 0;
	bool isEmpty () = 0;
};


#endif

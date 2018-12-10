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

File Number 11 of X

******************************/

#ifndef DECK
#define DECK

#include <vector>
#include <iterator>

template<typename C>

class Deck {
    
    // All functions in Factory Abstract should be pure virtual
    
    protected:
    
    std::vector<C> elements;
    typename std::vector<C>::iterator current;
    
public:
    
    virtual void shuffle() =0 ;
	virtual C getNext() = 0;
    virtual bool isEmpty() const = 0;
    
};

#endif



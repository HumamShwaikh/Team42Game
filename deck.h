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

template<typename T>

class Deck {  
    
    std::vector<T> elements;
    T current;

	//
	// All functions in Factory Abstract should be pure virtual
public:
    
    Deck<T>();
    
    virtual void shuffle() {} =0;
    
	virtual T getNext() {} =0;
	
    virtual bool isEmpty() {} =0;
    
    ~Deck<T>() {} =0;
};

#endif

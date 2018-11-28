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

//template<class T>

class Deck {  

    class Node {
        public:
            Node *next;
            int content;
    };
    
	Node *first;
    Node *current;

public:
    
    Deck();
/*
    ~Deck();
    virtual void shuffle();
	virtual int getNext();
	virtual bool isEmpty();
*/
};

#endif

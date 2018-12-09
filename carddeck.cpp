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
#include "carddeck.h"
#include "card.h"

CardDeck::CardDeck(int size) : size(size) {
    this->make_CardDeck();
    current = elements.begin();
}

CardDeck::~CardDeck() {
    
}


CardDeck& CardDeck::make_CardDeck() {
    if (elements.empty()) {
        // Could not make this work
        /*
        for (FaceAnimal i = FaceAnimal::Crab; i <= FaceAnimal::Walrus; i = FaceAnimal(i+1)) {
			for (FaceBackground j: FaceBackground.values()){
				this->elements.push_back({i, j});
			}
		}
        */
        
        // The following would work - but we are forced to use scoped enum??
        /*
        FaceAnimal iterAn = FaceAnimal::Crab;
        iterAn = static_cast<FaceAnimal>(iterAn + 1);
        FaceBackground iterBack = FaceBackground::Red;
        iterBack = static_cast<FaceBackground>(iterBack + 1);
        */
        
        this->elements.push_back(Card(FaceAnimal::Crab,FaceBackground::Red));
        this->elements.push_back(Card(FaceAnimal::Crab,FaceBackground::Green));
        this->elements.push_back(Card(FaceAnimal::Crab,FaceBackground::Purple));
        this->elements.push_back(Card(FaceAnimal::Crab,FaceBackground::Blue));
        this->elements.push_back(Card(FaceAnimal::Crab,FaceBackground::Yellow));
        
        this->elements.push_back(Card(FaceAnimal::Penguin,FaceBackground::Red));
        this->elements.push_back(Card(FaceAnimal::Penguin,FaceBackground::Green));
        this->elements.push_back(Card(FaceAnimal::Penguin,FaceBackground::Purple));
        this->elements.push_back(Card(FaceAnimal::Penguin,FaceBackground::Blue));
        this->elements.push_back(Card(FaceAnimal::Penguin,FaceBackground::Yellow));
        
        this->elements.push_back(Card(FaceAnimal::Octopus,FaceBackground::Red));
        this->elements.push_back(Card(FaceAnimal::Octopus,FaceBackground::Green));
        this->elements.push_back(Card(FaceAnimal::Octopus,FaceBackground::Purple));
        this->elements.push_back(Card(FaceAnimal::Octopus,FaceBackground::Blue));
        this->elements.push_back(Card(FaceAnimal::Octopus,FaceBackground::Yellow));
        
        this->elements.push_back(Card(FaceAnimal::Turtle,FaceBackground::Red));
        this->elements.push_back(Card(FaceAnimal::Turtle,FaceBackground::Green));
        this->elements.push_back(Card(FaceAnimal::Turtle,FaceBackground::Purple));
        this->elements.push_back(Card(FaceAnimal::Turtle,FaceBackground::Blue));
        this->elements.push_back(Card(FaceAnimal::Turtle,FaceBackground::Yellow));
        
        this->elements.push_back(Card(FaceAnimal::Walrus,FaceBackground::Red));
        this->elements.push_back(Card(FaceAnimal::Walrus,FaceBackground::Green));
        this->elements.push_back(Card(FaceAnimal::Walrus,FaceBackground::Purple));
        this->elements.push_back(Card(FaceAnimal::Walrus,FaceBackground::Blue));
        this->elements.push_back(Card(FaceAnimal::Walrus,FaceBackground::Yellow));
        
		this->shuffle();
    }
    
    return *this;
}

void CardDeck::shuffle() {
    if (isEmpty()) {return;}
    std::srand(time(0));
	std::random_shuffle(elements.begin(), elements.end());
    current = elements.begin();
}

Card CardDeck::getNext() {
    ++current;
    return *current;
}

bool CardDeck::isEmpty() const {
    return elements.empty();
}

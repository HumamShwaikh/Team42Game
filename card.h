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

#ifndef CARD
#define CARD

#include <string>
using std::string;

    // Enumerations for Animals and Bacground Colours
	enum class FaceAnimal {Crab = 'C', Penguin = 'P', Octopus = 'O', Turtle = 'T', Walrus = 'W'};
	enum class FaceBackground {Red = 'r', Green = 'g', Purple = 'p', Blue = 'b', Yellow = 'y'};
    
class Card {
    
    
    public:
    
    // ONLY FOR TESTING. MAKE PRIVATE
	
    // Global variable holding one of the enum values for each
	FaceAnimal animal;
	FaceBackground background;
    
    // Constructor
	Card(FaceAnimal a, FaceBackground b);
    Card();
    
    // Operator overloading for printing and to block copy and assignment (private)
    //Card& operator=(const Card&); // Private copy constructor
    string operator()(int);
    
    // Two private getters to convert enums to chars
    char getAnimalChar() const;
    char getBackgroundChar() const;
    
    int getNRows() const;
    
    private:
    
    friend class CardDeck;
};


#endif

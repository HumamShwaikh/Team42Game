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

File Number 3 of X

******************************/

#ifndef REWARD
#define REWARD

#include <string>

class RewardDeck;

class Reward {
    
    public:
    
    // Returns the value of the reward
    int getRewardValue() const;
    
    private:
    
    Reward();
    
    Reward(int value);
    
    Reward& operator=(const Reward&);
    
    int value;
    
    friend RewardDeck;
    
    friend std::ostream& operator<<(std::ostream& os, const Reward& r) {
        os << std::to_string(r.value);
        return os;
    }
    
};

#endif
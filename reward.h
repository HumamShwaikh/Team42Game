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

 
class Reward {
    
    public:
    
    // Returns the value of the reward
    int getRewardValue() const;
    
    private:
    
    // Privatr constructor
    Reward(int value);
    
    // Private copy constructor to block copy and assignment
    Reward& operator=(const Reward&);
    
    // Holds the value of the reward
    int value;
    
    // Friend declarations and output stream operator overloading
    friend class RewardDeck;
    friend std::ostream& operator<<(std::ostream& os, const Reward& r) {
        os << std::to_string(r.value);
        return os;
    }
    
};

#endif

#ifndef HUMAN_H
#define HUMAN_H

// Defines class HumanPlayer for Human
class HumanPlayer
{
// Data member to store player choice
char playerChoice;
// Data member to store player win count
int playerWinCount;
public:
// Default constructor
HumanPlayer();

// Function to get human player choice and returns it
char makeMove();

// Function to increase the win counter for player
void setWinCount();

// Function to return win counter for player
int getWinCount();
};// End of class
#endif

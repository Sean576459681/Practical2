#include <iostream>
#include "Human.h"
using namespace std;

// Default constructor
HumanPlayer::HumanPlayer()
{
playerChoice = ' ';
playerWinCount = 0;
}// End of default constructor

char HumanPlayer::makeMove()
{
// To store user choice
int myChoice;
// Display menu
cout<< "\n\n User Move for Rock, Paper, or Scissors? \n"
<< "1) Rock\n"
<< "2) Paper\n"
<< "3) Scissors\n"
<< "Please enter your choice: ";
// Accepts user choice
cin >> myChoice;

// Checks if player choice is 1
if (myChoice == 1)
{
playerChoice = 'R';
cout << "\n\t Human Player: Rock\n";
}// End of if condition

else if (myChoice == 2)
{
// Assigns 'P' for Paper
playerChoice = 'P';
cout << "\n\t Human Player: Paper\n";
}// End of else if

// Otherwise checks if player choice is 3
else if (myChoice == 3)
{
// Assigns 'S' for Scissor
playerChoice = 'S';
cout << "\n\t Human Player: Scissors\n";
}// End of else if

return playerChoice;

while (myChoice < 1 || myChoice > 3)
{
cout << "Please pick a number between 1 & 3.\n";
cin >> myChoice;
}// End of while loop
}// End of function

void HumanPlayer::setWinCount()
{
playerWinCount++;
}// End of function

// Function to return win counter for player
int HumanPlayer::getWinCount()
{
return playerWinCount;
}// End of function

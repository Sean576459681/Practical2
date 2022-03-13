#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Computer.h"
using namespace std;

// Default constructor
ComputerPlayer::ComputerPlayer()
{
computerChoice = ' ';
computerWinCount = 0;
}// End of default constructor

char ComputerPlayer::makeMove()
{
srand(time(NULL));
int randomCompNum = rand() % 3 + 1;

if (randomCompNum == 1)
{
computerChoice = 'R';
cout << "\n\t Computer Player: Rock\n";
}// End of if condition

else if (randomCompNum == 2)
{
// Assigns 'P' for Paper
computerChoice = 'P';
cout << "\n\t Computer Player: Paper\n";
}// End of if condition

// Otherwise checks if computer choice is 3
else if (randomCompNum == 3)
{
// Assigns 'S' for Scissor
computerChoice = 'S';
cout << "\n\t Computer Player: Scissors\n";
}// End of else if

// Returns the computer choice
return computerChoice;
}// End of function

void ComputerPlayer::setWinCount()
{
computerWinCount++;
}// End of function

// Function to return win counter for computer
int ComputerPlayer::getWinCount()
{
return computerWinCount;
}// End of function

#include <iostream>
#include "Human.cpp"
#include "Computer.cpp"
#include "Referee.h"
using namespace std;

// Default constructor
Referee::Referee()
{
numberOfRound = 0;
}// End of default constructor

char Referee::refGame(HumanPlayer player1, ComputerPlayer player2)
{
// Calls the function to get human player choice
char playerChoice = player1.makeMove();
// Calls the function to get human computer choice
char computerChoice = player2.makeMove();

// Calls the function to check tie
if (isTie(playerChoice, computerChoice))
// Then return 'D' for tie
return 'D';

// Calls the function to check player not win
else if (!isPlayerWinner(playerChoice, computerChoice))
// Then return 'L' for Looser
return 'L';

// Calls the function to check player win
else if (isPlayerWinner(playerChoice, computerChoice))
// Then return 'W' for Winner
return 'W';
}// End of function

// Function to return true if human player is winner
// Returns false for human player looser
bool Referee::isPlayerWinner(char humanChoice, char computerChoice)
{
if (((humanChoice == 'R') && (computerChoice == 'S')) ||
((humanChoice == 'S') && (computerChoice == 'P')) ||
((humanChoice == 'P') && (computerChoice == 'R')))
return true;

// Otherwise checks if computer player choice is 'S' and human player choice is 'R'
// or computer player choice is 'S' and human player choice is 'P'
// or computer player choice is 'P' and human player choice is 'R'
// then return false for human player is looser
else if (((computerChoice == 'S') && (humanChoice == 'R')) ||
((computerChoice == 'S') && (humanChoice == 'P')) ||
((computerChoice == 'P') && (humanChoice == 'R')))
return false;
}// End of function

// Function to return true for tie
// Returns false for not tie
bool Referee::isTie(char humanChoice, char computerChoice)
{
// Checks if human player choice and computer choice is same then return true for tie
if (humanChoice == computerChoice)
return true;
// Otherwise returns false for not time
else
return false;
}// End of function

// Function to increase the number of rounds by one
void Referee::setNumberOfRound()
{
numberOfRound++;
}// End of function

// Function to return number of rounds
int Referee::getNumberOfRound()
{
return numberOfRound;
}// End of function

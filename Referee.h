#ifndef REFEREE_H
#define REFEREE_H

// Defines class Referee
class Referee
{
// Data member to store number of rounds
int numberOfRound;

public:
// Default constructor
Referee();

char refGame(HumanPlayer player1, ComputerPlayer player2);

bool isPlayerWinner(char humanChoice, char computerChoice);

bool isTie(char humanChoice, char computerChoice);

void setNumberOfRound();

int getNumberOfRound();
};// End of class
#endif

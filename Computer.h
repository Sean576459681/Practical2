#ifndef COMPUTER_H
#define COMPUTER_H

// Defines class ComputerPlayer for Computer
class ComputerPlayer
{
// Data member to store computer choice
char computerChoice;
// Data member to store computer win count
int computerWinCount;
public:
// Default constructor
ComputerPlayer();

char makeMove();

void setWinCount();r
int getWinCount();
};// End of class
#endif

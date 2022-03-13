#include "Referee.cpp"
#include <iostream>
using namespace std;

// main function definition
int main()
{
// Creates an object of class Referee
Referee r;
// Creates an object of class HumanPlayer
HumanPlayer hp;
// Creates an object of class ComputerPlayer
ComputerPlayer cp;

// To store user choice
char choice;
cout<<"\n *************************** Welcome to Rock, Paper, Scissors game *************************** ";

// Loops till user choice is not 'n' or 'N'
do
{
// Calls the function to increase the number of rounds
r.setNumberOfRound();
// Calls the function to get the game result
char result = r.refGame(hp, cp);

// Checks if result is 'D' then game is draw
if (result == 'D')
cout<<"\n\n\t The game is Draw this time.";

// Otherwise checks if result is 'W' then human player is the winner
else if (result == 'W')
{
cout<<"\n\n\t Congratulation Human Player is winner.";
// Calls the function to increase the win count for human player
hp.setWinCount();
}// End of else if condition

// Otherwise checks if result is 'L' then human player is looser
else if (result == 'L')
{
cout<<"\n\n\t Bad Luck Human Player is looser.";
// Calls the function to increase the win count for computer
cp.setWinCount();
}// End of else if condition

// Accepts user choice
cout<<"\n Would you like to play another game (Y / N)? ";
cin>>choice;

// Checks if user choice is 'N' or 'n' then come out of the loop
if(choice == 'N' || choice == 'n')
break;
}while(1);// End of do - while loop

// Displays the game summary
cout<<"\n\n ****************** Game Summary ****************** ";
cout<<"\n\t Number of rounds played: "<<r.getNumberOfRound();
cout<<"\n\t Number of win for Human Player: "<<hp.getWinCount();
cout<<"\n\t Number of win for Computer Player: "<<cp.getWinCount();
cout<<"\n\t\t Human Win: "<<(hp.getWinCount() / (double)r.getNumberOfRound());
cout<<"\n\t\t Computer Win: "<<(cp.getWinCount() / (double)r.getNumberOfRound());
return 0;
}// End of main function

/************************************************************************
* Source Name: guess.cc
* Program Description: This program plays the guess the number game.
* Input: Number from the user.
* Output: Tells the users whether to guess higer or lower.
* Programmer: Justin Ryburn (justin@ryburn.org)
* Date: 12/13/01
************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

void instruct( ); // tells the user what this program does.
void get_response(int& p1); //Gets the answers from the player.
void results(int& p1); //Figures out the results of the game.
void new_line( ); // discards all the input left on the keyboard input line.

int main( )
{
	instruct( );
	
	char ans; // variable for the users answer.
	int p1; // variable to hold the response from the player.
	
	cout << "\nWould you like to begin? (Y/N): ";
	cin >> ans;
	new_line( );
	
	if (ans == 'Y' || ans == 'y') // only continue if the user enters yes.
	{
		do
		{
			get_response(p1);
			results(p1);
			cout << "\n\nWould you like to play again? (Y/N): ";
			cin >> ans;
			new_line( );
		} while (ans == 'Y' || ans == 'y'); //continue until user enters no.
	}
	cout << "\n\nProgram is exiting...\n";
}

void instruct( )
{
	system("clear"); // Starts the output on a clear screen.
	cout << "This program is old-fashion guess the number game.\n"
         << "You will be required to guess a number.  The computer\n"
         << "will pick a random number and then tell you whether\n"
         << "you guessed too high, too low, or guessed the number.\n";
}

void get_response(int& p1)
{
	system("clear"); // Starts the output on a clear screen.
	cout << "Please enter a number between 1 and 100: ";
	cin >> p1;
	if (p1 < 1 || p1 > 100) //invalid input.
	{
		do //Continues to ask for a valid input.
		{
			cout << "\nPlease enter a number between 1 and 100 :";
			cin >> p1;
		} while (p1 < 1 || p1 > 100);
	}
}

void results(int& p1)
{
	int comp; // number the computer is thinking of.
	const int MAX_RANDOM = 100; // maximum size of the random #.
	comp = random(MAX_RANDOM);
	
	system("clear"); // starts the text output on a clean screen.	
	if (p1 != comp)
	{
		do
		{
			if (p1 < comp)
			{
				cout << "The number I am thinking of is higher.\n";
				get_response(p1);
			}
			else if (p1 > comp)
			{
				cout << "The number I am thinking of is lower.\n";
				get_response(p1);
			}
		} while (p1 != comp);
	}
	else 
		cout << "YOU GUESSED IT!\n";
}

void new_line( )
{
    char symbol;
    do
    {
        cin.get(symbol);
    } while (symbol != '\n');
} // end new_line function

/*
9. Number Guessing Game 
-> Write a C++ program that asks the user to guess a number between 1 and 100. The 
program should provide hints if the guess is too high or too low. Use loops to allow 
the user multiple attempts. 
-> Objective: Understand while loops and conditional logic.
*/

#include<iostream>
#include<cstdlib>  // rand() and srand()
#include<ctime>    // time()
using namespace std;
class game
{
	public:
		void number_guessing()
		{
			srand(time(0)); // Random number generator ko seed karte hain
		    int secretNumber = rand() % 100 + 1; // 1 to 100 random number
		    int guess = 0;
		    int attempts = 0;
		
		    cout << "Guess the number between 1 and 100!" << endl;
		
		    while(guess != secretNumber) 
			{
		        cout << "Enter your guess: ";
		        cin >> guess;
		        attempts++;	
		        if(guess > secretNumber) 
				{
		            cout << "Too high! Try again.\n";
		        }
		        else if(guess < secretNumber)
				{
		            cout << "Too low! Try again.\n";
		        }
		        else 
				{
		            cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
		        }
			}
		}
};
main()
{
	game g1;
	g1.number_guessing();
}


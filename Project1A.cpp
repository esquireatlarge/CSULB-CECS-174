/*Path Project: ~msguerri/C174-proj/MattProject1A.cpp
Written by:  Matt Sguerri
e-mail address:  mattsguerri@gmail.com
C174 TTh 1:00 
Date:  October 18th, 2007
Project #1A - computer #23 
Description:  Write a program to display the location of the queen card and to
tell the user if he guessed right or wrong.  Add or subtract the amount he bet from the 
money the user has based on the guess.
*/

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctime>
#include <ctype.h>
using namespace std;

//declare variables globally so that they encompass 
//both functions
int amount_to_bet;
int money_left = 300;
int queen_card;
int card_choice;
char retry;
char card1 = '1', card2 = '2', card3 = '3';
int d;

void drawCard()  //Draw card function
{
	cout << "\t ---\t ---\t ---\n";
	cout << "\t|" << card1 <<"  |\t|" 
		<< card2 <<"  |\t|"<< card3 <<"  |\n";
	cout << "\t|   |\t|   |\t|   |\n";
	cout << "\t|   |\t|   |\t|   |\n";
	cout << "\t ---\t ---\t ---\n";
	cout << "      Guess where the queen is!\n\n";
}

int main()  //main function
{
	//introduction
	cout << "Project #1A \n"
		<< "\tby:  Matt Sguerri \n"
		<< "\tdate: October 18th, 2007 \n"
		<< "*******************************************\n\n";

	//input and calculation
	cout << "Hello!  Let's play a game.\nThe goal is to guess "
		<< "which card the queen is.\n";

	do{
		//Reset card values
		card1 = '1';
		card2 = '2';
		card3 = '3';
		//Randomize queen
		srand((unsigned)time(NULL));
		queen_card = rand() % 4;
		if((money_left == 0))
		{//The player lost all his money.
			cout << "I took all your money.  Toodles!";
			break;
		}
		else
		{
			system("cls"); //Clear screen
			drawCard();
			cout << "You have $" << money_left << " to bet with."
				<< "\nHow much do you want to bet? ";
			cin >> amount_to_bet;
			if(amount_to_bet < 0) //Negative input
				cout << "Can't bet negative money.\n";
			else if(amount_to_bet == 0) //No input
				cout << "Gotta spend money sometimes.\n";
			else if(amount_to_bet > money_left) //Input too great
				cout << "You can't bet more than you have!\n";
			else 
			{
				cout << "Which card do you think is the "
					<< "queen? (1,2,3) ";
				cin >> card_choice;
				//If the card choice is bigger than 
				//3 or less than 1, punish.
				if((card_choice <= 0) || (card_choice >=4))
					cout << "The card choice must be "
					<< "between 1 and 3.\n";
				else 
				{
					if(card_choice == queen_card)
						//If user guessed right
					{
						system("cls");
						if(queen_card == 1)
						{
							card1 = 'Q';
							card2 = '2';
							card3 = '3';
						}
						else if(queen_card == 2)
						{
							card2 = 'Q';
							card1 = '1';
							card3 = '3';
						}
						else
						{
							card1 = '1';
							card2 = '2';
							card3 = 'Q';
						}
						drawCard(); 
						
						cout << "Good job!  You won $" 
							<< amount_to_bet << "!\n";
						money_left = money_left 
							+ amount_to_bet;
					}
					else if(card_choice != queen_card)
					{//If user guessed wrong
						system("cls");
						//Display queen card
						if(queen_card == 1)
						{
							card1 = 'Q';
							card2 = '2';
							card3 = '3';
						}
						else if(queen_card == 2)
						{
							card2 = 'Q';
							card1 = '1';
							card3 = '3';
						}
						else
						{
							card1 = '1';
							card2 = '2';
							card3 = 'Q';
						}
						drawCard(); 
	
						cout << "You lost your money.\n";
						cout << "The queen was card " 
							<< queen_card << ".\n";
						money_left = money_left 
							- amount_to_bet;
					}

				}//Close if valid card choice				
			} //Close if player put in normal amount of money
		}//Close if player has money

	cout << "Did you want to retry? (Y/N)";
	cin >> retry;
	//Close loop
	}while((retry == 'Y') || (retry == 'y'));

	//closing 
	cout << "\n\nGoodbye, thanks for playing!\n";

	return 0;
}
/*
         ---     ---     ---
        |1  |   |2  |   |3  |
        |   |   |   |   |   |
        |   |   |   |   |   |
         ---     ---     ---
      Guess where the queen is!

You have $300 to bet with.
How much do you want to bet? -1
Can't bet negative money.
Did you want to retry? (Y/N)
         ---     ---     ---
        |1  |   |2  |   |3  |
        |   |   |   |   |   |
        |   |   |   |   |   |
         ---     ---     ---
      Guess where the queen is!

You have $300 to bet with.
How much do you want to bet? 0
Gotta spend money sometimes.
Did you want to retry? (Y/N)
         ---     ---     ---
        |Q  |   |2  |   |3  |
        |   |   |   |   |   |
        |   |   |   |   |   |
         ---     ---     ---
      Guess where the queen is!

Good job!  You won $56!
Did you want to retry? (Y/N)
         ---     ---     ---
        |1  |   |Q  |   |3  |
        |   |   |   |   |   |
        |   |   |   |   |   |
         ---     ---     ---
      Guess where the queen is!

You lost your money.
Did you want to retry? (Y/N)
*/
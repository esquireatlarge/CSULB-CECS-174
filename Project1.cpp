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

void drawCard()  //Draw card function
{
	cout << "\t ---\t ---\t ---\n";
	cout << "\t|" << card1 <<"  |\t|" << card2 <<"  |\t|"<< card3 <<"  |\n";
	cout << "\t|   |\t|   |\t|   |\n";
	cout << "\t|   |\t|   |\t|   |\n";
	cout << "\t ---\t ---\t ---\n";
}

int main()  //main function
{
	//introduction
	cout << "Project #1A \n"
		<< "\tby:  Matt Sguerri \n"
		<< "\tdate: October 18th, 2007 \n"
		<< "*******************************************\n\n";

	//input and calculation
	cout << "Hello!  Let's play a game.\nThe goal is to guess which card "
		<< "the queen is.\n";
	do{ //Commence do-while loop.
		system("cls"); //Clear the screen
		//Seed the random function so random numbers are given everytime.
		//Reset all the card values to 1,2, 3
		card1 = '1';
		card2 = '2';
		card3 = '3';
		srand((unsigned)time(NULL));
		//Assign queen_card a random function with range between 1 and 3.
		queen_card = rand() % (4 - 1) + 1;
		if ((money_left == 0) || (money_left == 0.00) || (money_left == 0.0))
		{//If the player has no money left, tell him/her they can't bet anymore.
			system("cls");  //Clear screen
			cout << "I took all your money, so you can no longer bet.  Toodles!\n";
			break;
		}
		else
		{
			drawCard();
			cout << "You've got $" << money_left << " to bet with."
				<< "\n\nHow much do you want to bet? ";
			cin >> amount_to_bet;
			//Is the amount of money to bet logical?
			//If the user input either gibberish or a negative number, punish him.
			if(amount_to_bet < 0)
			{
				//system("cls");
				cout << "Try to put in an actual sum of money, it might help!\n";
			}
			//If the user doesn't want to bet, punish him!
			else if(amount_to_bet == 0)
			{
				//system("cls");
				cout << "Gotta spend money to make money, pal!\n";
			}
			//If the user is trying to bet more than he can, punish him!
			else if(amount_to_bet > money_left)
			{
				//system("cls");
				cout << "You don't have $" << amount_to_bet << " to spend!\n";
			}
			//If the user put in a fair sum of money, accept his input.
			else
			{
				system("cls");
				drawCard();

				cout << "You've chosen to bet $" << amount_to_bet << ", thanks.\n";
				cout << "Ok, which card do you think the queen is?  1, 2, or 3? ";
				//User inputs which card they think the queen is.
				cin >> card_choice;  
				system("cls");
				//If the user input an invalid card choice, warn him.
				if((card_choice <= 0) || (card_choice >= 4))
					cout << "Invalid card choice! Has to be between cards 1, 2, and 3.\n";
				//If the user guessed correctly, tell him and add his score.
				else if(card_choice == queen_card)
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
					cout << "You guessed correctly.  You won $" << amount_to_bet << " .\n";
					money_left = money_left + amount_to_bet;
				}
				//If the user didn't guess right, tell him and subtract his score.
				else 
				{
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
					cout << "Sorry, but you failed.  You lost $" << amount_to_bet << ".\n"
						<< "The queen was card " << queen_card << ".\n";

					money_left = money_left - amount_to_bet;
				}//Closing bracket for the conditional in which the user didn't guess right.
			}//Closing bracket for the conditional in which the user didn't bet more than he has.
		}//Closing bracket for conditional on whether player has money or not.
		cout << "\nDid you want to retry? (Y/N): ";
		cin >> retry;
		cout << endl;
		//End do-while loop.
	}while((retry == 'Y') || (retry == 'y'));
	//closing 
	cout << "\n\nGoodbye, thanks for playing!\n";

	return 0;
}
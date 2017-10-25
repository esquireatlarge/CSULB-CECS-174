/*Path Project: <redacted>
Written by:  Esquire At Large
e-mail address:  esquirecode@gmail.com
C174 TTh 1:00 
Date:  October 18th, 2007
Assignment #7 - computer #23
Description:  Write a program displaying whether a meeting room is in violation of fire 
laws regarding maximum capacity.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//introduction
	cout << "Assignment #7 \n"
		<< "\tby:  Esquire At Large \n"
		<< "\tdate: October 18th, 2007 \n"
		<< "*******************************************\n\n";

	//declare variables 
	int maxcapacity;
	int peopleattending;
	char opt;

	//do-while loop
	do {

		//user input
		cout << "How many people can the meeting room hold? ";
		cin >> maxcapacity;
		cout << "The room can hold " << maxcapacity << " people, how many will come? ";
		cin >> peopleattending;

		//calculation and output
		if (peopleattending < maxcapacity) 
		{
			//If people attending are less than maximum.
			cout << "It is legal to hold the meeting.  The meeting can ";
				if(maxcapacity - peopleattending == 1) 
					//If only one more person can be added, change the sentence.
					cout << "hold one more person.\n";
				else
					 //If more than one person can be added
					cout << "hold " << maxcapacity - peopleattending << " more people.\n";
		}
		else if(peopleattending > maxcapacity)
			{
			cout << "The meeting cannot be held due to fire regulations. ";
			if(peopleattending - maxcapacity == 1)
				//If only one person must be excluded
				//the sentence must be changed.			
				cout << "One person must be excluded.\n";
			else
				//If more than one person has to be excluded, the sentence changes.
				cout << peopleattending - maxcapacity << " people must be excluded.\n";
		}
		else if(peopleattending == maxcapacity) 
			//If people attending equals the 
			//max capacity, say that the room is full.
			cout << "The room has the maximum amount of people it can hold.\n"; 
			
		//Ask if the user would like to repeat the calculation.
		cout << "\nWould you like to re-calculate (Y/N)? ";
		cin >> opt;
		cout << endl;

	}while((opt == 'Y') || (opt == 'y'));

	//closing
	cout << "\n\nThe program has ended.\n";

	return 0;
}
/*
Assignment #7
        by:  Esquire At Large
        date: October 18th, 2007
*******************************************

How many people can the meeting room hold? 25
The room can hold 25 people, how many will come? 20
It is legal to hold the meeting.  The meeting can hold 5 more people.

Would you like to re-calculate (Y/N)? y

How many people can the meeting room hold? 25
The room can hold 25 people, how many will come? 30
The meeting cannot be held due to fire regulations. 5 people must be excluded.

Would you like to re-calculate (Y/N)? y

How many people can the meeting room hold? 25
The room can hold 25 people, how many will come? 25
The room has the maximum amount of people it can hold.  Good job!

Would you like to re-calculate (Y/N)? n



The program has ended.
Press any key to continue . . .
*/

/*Path Project: ~msguerri/C174-proj/MattLAssign2A.cpp
Written by:  Matt Sguerri
e-mail address:  mattsguerri@gmail.com
C174 TTh 1:00 
Date:  September 25th, 2007
Assignment #2A
Description:  To correct a syntax error.
*/

#include <iostream>
using namespace std;

int main()
{
	//introduction
	cout << "Assignment #2A \n"
		<< "\tby:  Matt Sguerri \n"
		<< "\tdate: September 25th, 2007 \n"
		<< "*******************************************\n\n";

	//declare variables
	int number;
	double total;

	//user input
	cout << "Today is a great day for lab.\n";
	cout << "Let's start off by typing a number of your choice: ";
	cin >> number;

	//calculation
	total = number * 2;

	//display output
	cout << total << " is twice the number you typed.\n";

	//closing
	cout << "\n\nThe program has completed its cycle. :)\n";

	return 0;
}

/*
Assignment #2A
        by:  Matt Sguerri
        date: September 18th, 2007
*******************************************

Today is a great day for lab.
Let's start off by typing a number of your choice: 9
18 is twice the number you typed.


The program has completed its cycle. :)
*/


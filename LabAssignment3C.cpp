/*Path Project: <redacted>
Written by:  Esquire At Large
e-mail address:  esquirecode@gmail.com
C174 TTh 1:00 
Date:  September 26th, 2007
Assignment #3C
Description:  To output a time interval in hours, minutes, and seconds.
*/

#include <iostream>
using namespace std;

int main()
{
	//introduction
	cout << "Assignment #3C \n"
		<< "\tby:  Esquire At Large \n"
		<< "\tdate: September 26th, 2007 \n"
		<< "*******************************************\n\n";

	//declare variables
	int hours;
	int min;
	int sec;
	int seconds;

	//user input
	cout << "Please input only the amount of whole hours of the time: ";
	cin >> hours;
	cout << "\nPlease input only the amount of whole minutes of the time: ";
	cin >> min;
	cout << "\nPlease input only the amount of remaining seconds of the time: ";
	cin >> sec;
	cout << "Thank you.\n\n";

	//calculation
	seconds = (hours*3600) + (min*60) + (sec);

	//display output 
	cout << "The time you inputted evaluates to " << seconds << " seconds.";

	//closing 
	cout << "\n\nThe program has ended.\n";

	return 0;
}

/*
Assignment #3C
        by:  Esquire At Large
        date: September 26th, 2007
*******************************************

Please input only the amount of whole hours of the time: 2

Please input only the amount of whole minutes of the time: 40

Please input only the amount of remaining seconds of the time: 30
Thank you.

The time you inputted evaluates to 9630 seconds.

The program has ended.
*/
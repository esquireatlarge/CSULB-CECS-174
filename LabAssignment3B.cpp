/*Path Project: <redacted>
Written by:  Esquire At Large
e-mail address:  esquirecode@gmail.com
C174 TTh 1:00 
Date:  September 26th, 2007
Assignment #3B
Description:  To output a time interval in hours, minutes, and seconds.
*/

#include <iostream>
using namespace std;

int main()
{
	//introduction
	cout << "Assignment #3B \n"
		<< "\tby:  Esquire At Large \n"
		<< "\tdate: September 26th, 2007 \n"
		<< "*******************************************\n\n";
	
	//declare variables
	int elapsedtime;
	int hours;
	int min;
	int sec;

	//user input
	cout << "Please input a specific time interval in seconds: ";
	cin >> elapsedtime;
	cout << "Thank you.\n\n";

	//calculation
	hours = elapsedtime/3600;
	min = (elapsedtime%3600)/60;
	sec = (elapsedtime%3600)%60;
	
	//display output
	cout << "Your inputted time equates to " << hours << ":";
		if (min < 10)
			cout << "0" << min;
		else
			cout << min;
	cout << ":" << sec << ".";

	//closing 
	cout << "\n\nThe program has ended.\n";

	return 0;
}

/*
Assignment #3B
        by:  Esquire At Large
        date: September 26th, 2007
*******************************************

Please input a specific time interval in seconds: 9630
Thank you.

Your inputted time equates to 2:40:30.

The program has ended.
*/

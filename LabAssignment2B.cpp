/*Path Project: <redacted>
Written by:  Esquire At Large
e-mail address:  esquirecode@gmail.com
C174 TTh 1:00 
Date:  September 25th, 2007
Assignment #2B
Description:  Correct the run-time error (division by zero).
*/

#include <iostream>
using namespace std;

int main()
{
	//introduction
	cout << "Assignment #2B \n"
		<< "\tby:  Esquire At Large\n"
		<< "\tdate: September 25th, 2007 \n"
		<< "*******************************************\n\n";

	//declare variables
	double number;
	int divider(2);

	//user input
	cout << "Hi there!\n";
	cout << "Please input a number and then hit return: ";
	cin >> number;

	//calculation
	number = number / divider;

	//display output
	cout << "Half of your number is " << number << " . ";

	//closing
	cout << "\n\nEnd of Program!:)\n";

	return 0;
}

/*
Assignment #2B
        by:  Esquire At Large
        date: September 18th, 2007
*******************************************

Hi there!
Please input a number and then hit return: 9
Half of your number is 4.5 . Press any key to continue . . .
*/


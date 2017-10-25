/*Path Project: <redacted>
Written by:  Esquire At Large
e-mail address:  @gmail.com
C174 TTh 1:00 
Date:  September 25th, 2007
Assignment #3A
Description:  Output the sum, difference, and product of two integers.
*/

#include <iostream>
using namespace std;

int main()
{
	//introduction
	cout << "Assignment #3A \n"
		<< "\tby:  Esquire At Large \n"
		<< "\tdate: September 25th, 2007 \n"
		<< "*******************************************\n\n";

	//declare variables
	int num1;
	int num2;
	int sum;
	int diff1;
	int diff2;
	int product;

	//user input
	cout << "Please input the first integer: ";
	cin >> num1;
	cout << "Please input the second integer: ";
	cin >> num2;


	//calculation
	sum = num1 + num2;
	diff1 = num1 - num2;
	diff2 = num2 - num1;
	product = num1 * num2;

	//display output
	cout << "\n\nThe sum of the numbers " << num1 << " and " << num2 << " is: " << sum << "\n";
	cout << "The difference when subtracting " << num2 << " from " << num1 << " is: " << diff1 << "\n";
	cout << "The difference when subtracting " << num1 << " from " << num2 << " is: " << diff2 << "\n";
	cout << "The product of " << num1 << " and " << num2 << " is: " << product << "\n";

	//closing 
	cout << "\n\nThe program has ended.  Go get Halo 3, it just came out, go!\n";

	return 0;
}

/*
Assignment #3A
        by:  Esquire At Large
        date: September 25th, 2007
*******************************************

Please input the first integer: 8
Please input the second integer: 96

The sum of the numbers 8 and 96 is: 104
The difference when subtracting 96 from 8 is: -88
The difference when subtracting 8 from 96 is: 88
The product of 8 and 96 is: 768


The program has ended.  Go get Halo 3, it just came out, go!
*/
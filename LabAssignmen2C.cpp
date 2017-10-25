/*Path Project: <redacted>
Written by:  Esquire At Large
e-mail address:  esquirecode@gmail.com
C174 TTh 1:00 
Date:  September 25th, 2007
Assignment #2C
Description:  To correct the logic error within the program.
*/

//This program takes two values from the user and then swaps them
//before printing the values.  The user will be prompted to enter
//both numbers.

#include <iostream>
using namespace std;

int main()
{
	//introduction
	cout << "Assignment #2C \n"
		<< "\tby:  Esquire At Large \n"
		<< "\tdate: September 25th, 2007 \n"
		<< "*******************************************\n\n";
	
	//declare variables
	double firstNumber;
	double secondNumber;
	double storevar;

	//Prompt user to enter the first number.
	cout << "Enter the first number: ";
	cin >> firstNumber;

	//Prompt user to enter the second number.
	cout << "Enter the second number: ";
	cin >> secondNumber;

	//Echo print the input
	cout << "You input the number as "
		<< firstNumber << " and " << secondNumber << ".\n";

	//Now we will swap the two values
	storevar = secondNumber;
	secondNumber = firstNumber;
	firstNumber = storevar;
	
	//Output the values
	cout << "After swapping, the values of the two numbers are "
		<< firstNumber << " and " << secondNumber << ".";

	//closing
	cout << "\n\nEnd of Program!:)\n";

	return 0;

}

/*
Assignment #2C
        by:  Esquire At Large
        date: September 18th, 2007
*******************************************

Enter the first number: 9
Enter the second number: 57
You input the number as 9 and 57.
After swapping, the values of the two numbers are 57 and 9.

End of Program!:)
Press any key to continue . . .
*/


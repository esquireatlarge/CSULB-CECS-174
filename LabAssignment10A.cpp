/*Path Project: <redacted>
Written by:  Esquire At Large
e-mail address:  esquirecode@gmail.com
C174 TTh 1:00 
Date:  October 24th, 2007
Assignment #10A - computer #23
Description:  Correct errors in a program displaying a hot beverage menu.  
*/

#include <iostream>
#include <iomanip>  //to use a different way of formatting decimal places
using namespace std;

int main()
{
	//introduction
	cout << "Assignment #10A \n"
		<< "\tby:  Esquire At Large \n"
		<< "\tdate: October 24th, 2007 \n"
		<< "*******************************************\n\n";

	//declare variables
	int number;
	double cost;
	char beverage;
	bool validBeverage;

	//format a decimal
	cout << fixed << showpoint << setprecision(2);

	do
	{
		cout << endl << endl;
		cout << "***Hot Beverage Menu***\n\n";
		cout << "A: Coffee         $1.00\n";  
		cout << "B: Tea            $ .75\n";
		cout << "C: Hot Chocolate  $1.25\n"; 
		cout << "D: Cappuccino     $2.50\n"; 
		cout << "E: Exit the program    \n\n";

		cout << "Enter the beverage A,B,C, or D you desire\n" 
			<< "(or E to exit the program): ";

		cin >> beverage;

		validBeverage = false;

		switch(beverage)
		{
		case 'a':  //coffee at a dollar
		case 'A': cost = 1.00;
			validBeverage = true;
			break;
		case 'b':  //tea at 75 cents.
		case 'B': cost = 0.75;
			validBeverage = true;
			break;
		case 'c':  //hot chocolate at 1.25 dollars.
		case 'C': cost = 1.25;
			validBeverage = true;
			break;
		case 'd':  //Cappuccino atr 2.50 dollars.
		case 'D': cost = 2.50;
			validBeverage = true;  //Make the boolean true if user selects valid beverage.
			break;
		case 'e': //If the user wishes to exit the program
		case 'E': cout << "\nPlease come again." << endl;
			break;
		default : cout << "Invalid beverage selection!";
		}

		if (validBeverage == true)
		{ 
			//If the user selected a valid beverage, prompt him for the number of cups.
			cout << "How many cups would you like ? ";
			cin >> number;
			//Display output
			cout << "The total cost equates to $" << (cost * number) << ".\n";
		}

	} while((beverage != 'E') && (beverage != 'e'));  //End loop if user selects e

	//closing
	cout << "\n\nThe program has ended.";

	return 0;
}
/*
Assignment #10A
        by:  Esquire At Large
        date: October 24th, 2007
*******************************************



***Hot Beverage Menu***

A: Coffee         $1.00
B: Tea            $ .75
C: Hot Chocolate  $1.25
D: Cappuccino     $2.50
E: Exit the program

Enter the beverage A,B,C, or D you desire
(or E to exit the program): b
How many cups would you like ? 2
The total cost equates to $1.50.


***Hot Beverage Menu***

A: Coffee         $1.00
B: Tea            $ .75
C: Hot Chocolate  $1.25
D: Cappuccino     $2.50
E: Exit the program

Enter the beverage A,B,C, or D you desire
(or E to exit the program): z
Invalid beverage selection!

***Hot Beverage Menu***

A: Coffee         $1.00
B: Tea            $ .75
C: Hot Chocolate  $1.25
D: Cappuccino     $2.50
E: Exit the program

Enter the beverage A,B,C, or D you desire
(or E to exit the program): e

Please come again.


The program has ended.Press any key to continue . . .
*/

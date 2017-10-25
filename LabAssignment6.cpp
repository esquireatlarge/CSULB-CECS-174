/*Path Project: <redacted>
Written by:  Esquire At Large
e-mail address:  esquirecode@gmail.com
C174 TTh 1:00 
Date:  October 9st, 2007
Assignment #6 - computer #23
Description:  Write a program that displays three user inputted floating point
numbers from largest to smallest.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//introduction
	cout << "Assignment #6 \n"
		<< "\tby:  Esquire At Large \n"
		<< "\tdate: October 9st, 2007 \n"
		<< "*******************************************\n\n";

	//declare variables
	double num1;
	double num2;
	double num3;
	int turns = 1;
	
	while(turns <=3)
	{
		//user input
		cout << "Please input the first decimal number: ";
		cin >> num1;
		cout << "Please input the second decimal number: ";
		cin >> num2;
		cout << "Please input the third decimal number: ";
		cin >> num3;
		cout << "Thank you for your input.\n\n";

		//output and calculation
		if(num1 == num2)
		{
			if(num3 == num2)
				cout << "The numbers are all the same.\n\n";
			else if(num3 < num2)
				cout << "The numbers from largest to smallest are: " << num1 << ", " 
					<< num2 << ", " << num3 << endl;
			else if(num3 > num2)
				cout << "The numbers from largest to smallest are: " << num3 << ", "
					<< num2	<< ", " << num1 << endl;
		}
		if(num1 == num3)
		{
			if(num2 > num3)
				cout << "The numbers from largest to smallest are: " << num2 << ", "
					<< num1 << ", " << num3 << endl;
			else if(num2 < num3)
				cout << "The numers from largest to smallest are: " << num1 << ", " 
					<< num3 << ", " << num2 << endl;
		}
		if(num2 == num3)
		{
			if(num1 > num3)
				cout << "The numbers from largest to smallest are: " << num1 << ", "
					<< num2 << ", " << num3 << endl;
			else if(num1 < num3)
				cout << "The numbers from largest to smallest are: " << num2 << ", "
					<< num3 << ", " << num1 << endl;
		}
		if(num1 < num2)
		{
			if(num1 > num3)
				cout << "The numbers from largest to smallest are: " << num2 << ", "
					<< num1 << ", " << num3 << endl;
			else if (num1 < num3)
			{
				if(num3 < num2)
					cout << "The numbers from largest to smallest are: " << num2 << ", " 
						<< num3 << ", " << num1 << endl;
				else if(num3 > num2)
					cout << "The numbers from largest to smallest are: " << num3 << ", "
						<< num2 << ", " << num1 << endl;
			}	
		}
		if(num1 > num2)
		{
			if(num1 < num3)
				cout << "The numbers from largest to smallest are: " << num3 << ", "
					<< num1 << ", " << num2 << endl;
			else if(num1 > num3)
			{
				if(num2 > num3)
					cout << "The numbers from largest to smallest are: " << num1 << ", "
						<< num2 << ", " << num3 << endl;
				if(num2 < num3)
					cout << "The numbers from largest to smallest are: " << num1 << ", "
						<< num3 << ", " << num2 << endl;
			}
		}
					
		turns++;
	}

	//closing
	cout << "\n\nThe program has ended.\n";

	return 0;
}

/*
Assignment #6
        by:  Esquire At Large
        date: October 9st, 2007
*******************************************

Please input the first decimal number: 1.2
Please input the second decimal number: 1.2
Please input the third decimal number: 1.2
Thank you for your input.

The numbers are all the same.

Please input the first decimal number: 1.5
Please input the second decimal number: 4.6
Please input the third decimal number: 3.2
Thank you for your input.

The numbers from largest to smallest are: 4.6, 3.2, 1.5
Please input the first decimal number: 1.2
Please input the second decimal number: 2.3
Please input the third decimal number: 1.2
Thank you for your input.

The numbers from largest to smallest are: 2.3, 1.2, 1.2


The program has ended.
Press any key to continue . . .
*/

	
		
	


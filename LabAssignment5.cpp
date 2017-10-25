/*Path Project: <redacted>
Written by:  Esquire At Large
e-mail address:  esquirecode@gmail.com
C174 TTh 1:00 
Date:  October 7th, 2007
Assignment #5 - computer #23
Description:  Write a program to display the net income of a summer job, the amount of money 
spent on clothes, supplies, and savings bonds.  Also add in money from the parents.
*/

//UPDATE OCT 24TH 2017:  Not sure why I had a static_cast in this program.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//introduction
	cout << "Assignment #5 \n"
		<< "\tby:  Esquire At Large \n"
		<< "\tdate: October 7th, 2007 \n"
		<< "*******************************************\n\n";

	//declare variables
	double income;
	double hours;
	double payrate;
	double netincome;
	double clothesacc;
	double supplies;
	double savings;
	double schoolsupplies;
	
	//user input
	cout << "Please input the amount of hours worked per week: ";
	cin >> hours;
	cout << "Please input the pay rate for the " << hours << " you worked: ";
	cin >> payrate;
	cout << "Thank you.  You worked " << hours << " hours for the week at ";
	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << payrate << " an hour.\n\n";

	//calculation
	hours = hours * 5;
	income = hours*payrate;
	netincome = income - (income*0.14);
	clothesacc = netincome - (netincome * .10);
	supplies = clothesacc - (clothesacc * .01);
	savings = supplies * .25;
	schoolsupplies = (clothesacc * .01);
	
	//display output
	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << "The net income of your summer job is $" << netincome << ".\n";
	cout << "You spent $" << netincome * .10 << " on clothes and accessories.\n";
	cout << "You spent $" << schoolsupplies << " on school supplies.\n";
	cout << "You spent $" << savings << " on savings bonds.\n";
	cout << "Your parents spent $" << static_cast<int>(savings) * .50;
	cout << " on your bonds.\n";

	//closing 
	cout << "\nThe program has ended.\n";

	return 0;
}

/*
Assignment #5
        by:  Esquire At Large
        date: October 7th, 2007
*******************************************

Please input the amount of hours worked per week: 35
Please input the pay rate for the 35 you worked: 16
Thank you.  You worked 35 hours for the week at 16.00 an hour.

The net income of your summer job is $2408.00.
You spent $240.80 on clothes and accessories.
You spent $21.67 on school supplies.
You spent $536.38 on savings bonds.
Your parents spent $268.00 on your bonds.

The program has ended.
Press any key to continue . . .
*/
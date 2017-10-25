/*Path Project: <redacted>
Written by:  Esquire At Large
e-mail address:  esquirecode@gmail.com
C174 TTh 1:00 
Date:  October 23th, 2007
Assignment #9-1 - computer #23
Description:  Determine test averages using while loops.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare variables
	int score = 0;        
	double total = 0.0;    
	double average = 0.0; 
	int test = 1;
	int numScores;

	//introduction
	cout << "Assignment #9-1 \n"
		<< "\tby:  Esquire At Large \n"
		<< "\tdate: October 23th, 2007 \n"
		<< "*******************************************\n\n";

	//format the decimal place to precision 2
	cout << fixed << showpoint << setprecision(2);

	//user input
	cout << "How many test scores are there? ";
	cin >> numScores;

	while (test <= numScores)     // Note that test will be 1 the first time 
	{                     // the expression is tested.
		cout << "Enter your score on test " << test << ": ";
		cin  >> score;

		total = total + score;
		test++;
	}
	average = total / numScores;

	cout << "Your average based on " << numScores 
		<< " test scores is " << average << endl;

	return 0;
}
/*
Assignment #9-1
        by:  Esquire At Large
        date: October 23th, 2007
*******************************************

How many test scores are there? 7
Enter your score on test 1: 56
Enter your score on test 2: 99
Enter your score on test 3: 99
Enter your score on test 4: 99
Enter your score on test 5: 90
Enter your score on test 6: 63
Enter your score on test 7: 45
Your average based on 7 test scores is 78.71
Press any key to continue . . .
*/
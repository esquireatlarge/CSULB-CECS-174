/*Path Project: <redacted>
Written by:  Esquire At Large
e-mail address:  esquirecode@gmail.com
C174 TTh 1:00 
Date:  October 23th, 2007
Assignment #9-2 - computer #23
Description:  This program illustrates the use of a sentinel in a while loop. 
The user is asked for monthly rainfall totals until a sentinel value of -1 is entered. 
Then the total rainfall is displayed.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	//introduction
	cout << "Assignment #9-1 \n"
		<< "\tby:  Esquire At Large \n"
		<< "\tdate: October 23th, 2007 \n"
		<< "*******************************************\n\n";
	
	//declare variables
	int month = 1;
	double total = 0, rain;

	cout << fixed << showpoint << setprecision(2);

	cout << "Enter the total rainfall for month " << month 
		<< " (or -1 to quit): ";

	cin >> rain;

	while(rain != -1)
	{
		total = total + rain;
		month++;

		cout << "Enter the total rainfall for month " << month 
			<< " (or -1 to quit): ";
		cin >> rain;
	}
	if (month == 1)
		cout << "No data has been entered." << endl;
	else
		cout << "The total rainfall for the " << month-1
		<< " months is " << total << " inches." << endl;

	return 0;
}
/*
Assignment #9-1
        by:  Esquire At Large
        date: October 23th, 2007
*******************************************

Enter the total rainfall for month 1 (or -1 to quit): 12.3
Enter the total rainfall for month 2 (or -1 to quit): 4.56
Enter the total rainfall for month 3 (or -1 to quit): 8
Enter the total rainfall for month 4 (or -1 to quit): 79
Enter the total rainfall for month 5 (or -1 to quit): 1.22
Enter the total rainfall for month 6 (or -1 to quit): 4.5
Enter the total rainfall for month 7 (or -1 to quit): 7.98
Enter the total rainfall for month 8 (or -1 to quit): -1
The total rainfall for the 7 months is 117.56 inches.
Press any key to continue . . .

1.	What happens if you enter -1 first? Try it and see
The message 'No Data Has Been Enter" appears because the while loop has not been initiated.
2.	What happens if you enter 0 for each month? Try it and see. 
The resulting average is 0.00 inches of rain.
3.	What is the purpose of the code below which is embedded in source program 7.2

       if (month = = 1)
	cout << "No data has been entered" << endl;
That code displays when the user enters -1 for the first month and exists the while loop.
Since month has not been incremented, it still equals 1, meaning that if one does not
enter any data into the loop, the month will equal one and display the no data entered
message.
4.	Why does the last cout statement output month -1 instead of month?
Because month was initialized as one and not zero, therefore the count started
one number ahead of what it was supposed to actually be.
*/
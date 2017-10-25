/*Path Project: <redacted>
Written by:  Esquire At Large
e-mail address:  esquirecode@gmail.com
C174 TTh 1:00 
Date:  October 24th, 2007
Assignment #10B - computer #23
Description:  Using loops to find mean of n positive integers.
*/

#include <iostream>
using namespace std;

int main()
{
   int n;                      
   int total = 0;
   int number;                 // the loop control variable
   double mean;

   	//introduction
	cout << "Assignment #10B \n"
		<< "\tby:  Matt Sguerri \n"
		<< "\tdate: October 24th, 2007 \n"
		<< "*******************************************\n\n";

	//user input
   cout << "This program finds the average of the first n integers.\n";
   cout << "Please enter a positive integer: ";
   cin  >> n;

   while (n <= 0) //while n is less than or equal to zero.
	   //tell the user that they must input a positive number.
   {  cout << "Only positive integers are valid. Please re-enter: ";
      cin  >> n;
   }
 
   //for n amount of integers, increment number by one to control loop 
   for (number = 1; number <= n; number++)
   {
	  //add number to total until number reaches the n amount of integers.
      total = total + number;
   }                           // Curly braces are optional 
                               // since there is only one statement.

   // Note the use of the typecast operator.                         
   mean = static_cast<double>(total) / n; 


   cout << "The mean average of the first " << n 
        <<" positive integers is " << mean << endl;
 
   cout << "\n\nThe program has ended.\n";
  return 0;
}
/*
Assignment #10B
        by:  Esquire At Large
        date: October 24th, 2007
*******************************************

This program finds the average of the first n integers.
Please enter a positive integer: 0
Only positive integers are valid. Please re-enter: 12
The mean average of the first 12 positive integers is 6.5
This program finds the average of the first n integers.
Please enter a positive integer: 3
The mean average of the first 3 positive integers is 2


The program has ended.
Press any key to continue . . .

1.	Why is the typecast operator needed to compute the mean in the statement
mean = static_cast<double>(total)/n? What do you think would happen if it were removed?
The mean average might be a decimal, in which case one number must be made a double 
so that the mean can be able to hold decimals.

2.	What happens if you enter zero or a negative number instead of a positive number 
as instructed? 
Try both of these and record the results.
The program informs you that only positive integers can be inserted and asks you 
to re-input the number.

3.	What happens if you enter a double such as 2.99 instead of an integer for n? 
Try it and record the result?
The fractional part of the number is truncated, so the number is treated like an 
integer and calculated as such.  The result
is 1.5, which is the mean for 2.

*/
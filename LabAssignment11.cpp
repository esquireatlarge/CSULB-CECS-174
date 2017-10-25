/*Path Project: <redacted>
Written by:  Esquire At Large
e-mail address:  esquirecode@gmail.com
C174 TTh 1:00 
Date:  November 5th, 2007
Assignment #11 - computer #23
Description:  Using loops to find mean of n positive integers.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	int numb;
	int i;
	int q, k, u;
	char choice;

	//introduction
	cout << "Assignment #11 \n"
		<< "\tby:  Esquire At Large \n"
		<< "\tdate: November 5th, 2007 \n"
		<< "\tHappy Guy Fawkes day!\n"
		<< "*******************************************\n\n";

	//user input and validation
	do{

		cout << "Please input a positive integer less than 20: ";
		cin >> numb; //Reinput

		do{//validator
			if((numb <= 0) || (numb >= 20))//if number is negative or bigger than 20
				//ask the user to reinput it.
			{
				cout << "Invalid number.  Please input a positive integer "
					<< "less than twenty: ";
				cin >> numb;
			}

		}while((numb <= 0) || (numb >= 20));
	
			/*a
		*
		**
		***
		*/
		for(i = 1; i <= numb; i++)    
		{
			for(q = 1; q <= i; q++)
				cout << "*";
			cout << endl;
		}

		cout << endl;

		/*b
		***
		**
		*
		*/
		for(i = numb; i >= 1; i--)
		{
			for(q = 1; q <= i; q++)
				cout << "*";
			cout << endl;
		}
		cout << endl;

		/*c
		***
		 **
		  *
		  */
		for(i = 1; i <= numb; i++)
		{
			for (u = 1; u <= ((i - 1)); u++) 
				cout << " ";
			//Print stars in opposing order thanks to the above space statement 
			for (u = 1; u <= (numb - (i - 1)); u++)//Triangle c 
				cout << "*";
			cout << endl;
		}
	cout << endl;
		/*d
		  *
		 **
		***
		 */
		for(i = 1; i <= numb; i++)
		{
			for(u = 1; u <= (numb - i); u++)
				cout << " ";
			for(u = 1; u <= i; u++)
				cout << "*";
			
		cout << endl;
		}
		
cout << endl;
		//begin triangles together
		for (i = 1; i <= numb; i++) 

		{
			for (u = 1; u <= i; u++)  //Triangle a
				cout << "*";
			//num - i because the space must be the current amount of stars in a
			//minus the amount of spaces needed until you get to b
			for (u = 1; u <= (numb - i); u++) 
				cout << " ";
			//j less than or equal to initially all triangles for b
			//then take away on star successively until you get to one
			//given by 5 - (5 - 1) = 1, j is initialized as 1, which already equals one
			//then it prints ONE star, increments, and leaves to next loop
			for (u = 1; u <= (numb - (i - 1)); u++) //Triangle b
				cout << "*";
			//Space must be double the amount the iteration of the loop minus one
			for (u = 1; u <= (2 * (i - 1)); u++) 
				cout << " ";
			//Print stars in opposing order thanks to the above space statement 
			for (u = 1; u <= (numb - (i - 1)); u++)//Triangle c 
				cout << "*";
			//Spaces separating c and d calculated by taking the same formula 
			//for the spaces separating a and b
			for (u = 1; u <= (numb - i); u++)
				cout << " " ;
			//triangle d same as a, but offset due to spaces 
			//from previous spacing statement
			for (u = 1; u <= i; u++)
				cout << "*";

			cout << endl;
		} 

		cout << "Would you like to try another input (Y/N)?";
		cin >> choice;
		
	}while((choice== 'y') || (choice == 'Y'));

	//closing
	cout << "\n\nThe program has finished.  Have a good day!\n";
	return 0;
}
/*
Assignment #11
        by:  Esquire At Large
        date: November 5th, 2007
        Happy Guy Fawkes day!
*******************************************

Please input a positive integer less than 20: 4
*
**
***
****

****
***
**
*

****
 ***
  **
   *

   *
  **
 ***
****

*   ********   *
**  ***  ***  **
*** **    ** ***
*****      *****
Would you like to try another input (Y/N)?
*/
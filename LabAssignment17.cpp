/*Path Project: <redacted>
Written by:  Esquire At Large
e-mail address:  esquirecode@gmail.com
C174 TTh 1:00 
Date:  December 4th, 2007
Assignment #17 - computer #23
Description:  Using arrays to calculate the average of a set of scores, 
where the lowest is dropped.
*/

#include <iostream>
#include <iomanip>
using namespace std;

void getValues(double scores[], int MAX);//arrays are call by reference
//PRECONDITION:  The scores array.
//POSTCONDITION:  Sets values for the array and returns to main.
//PURPOSE:  To receive array values.

double findLowest(double scores[], int MAX);
//PRECONDITION:  Takes in the scores array, which now has values assigned to it.
//POSTCONDITION:  Returns the lowest value in the array.
//PURPOSE:  To find the lowest test score.

double calcAverage(double scores[], double lowestValue, int MAX);
//PRECONDITION:  Takes in the scores array, and the lowest value.
//POSTCONDITION:  Returns the average.
//PURPOSE:  To find the average of the ten scores.

int main() 
{
	//declare variables
	const int ARRAY_SIZE = 10;
	double scores[ARRAY_SIZE]; 
	double	lowestvalue, average;
	char choice;

	//introduction
	cout << "Assignment #17 \n"
		<< "\tby:  Esquire At Large \n"
		<< "\tdate: December 4th, 2007 \n"
		<< "*******************************************\n\n";
	//declaration of variables
	int i = 0;

	do{
		//Call the function to store test scores in the array.
		getValues(scores, ARRAY_SIZE);


		lowestvalue = findLowest(scores, ARRAY_SIZE);
		cout << "The lowest Value is: " << lowestvalue;

		//Call function to calculate average
		average = calcAverage(scores, lowestvalue, ARRAY_SIZE);

		//Display output
		cout << "\nThe average, with the lowest score taken out, equates to: "
			<< average << endl;

		cout << "\nDid you want to retry? (Y/N)";
		cin >> choice;
	}while(toupper(choice) == 'Y');

		return 0;
}

void getValues(double scores[], int MAX){
	//declare variables
	double total = 0.0;
	int i, k;

	//user input

	for(i = 0; i < MAX; i++){
		cout << "Please input the score for test " << i+1 << ": ";
		cin >> scores[i];

		//validate
		while((scores[i] < 0) || (scores[i] > 100)){

			if(scores[i] < 0){
				//Validate if scores are less than 0, ask for re-input.
				cout << "No negative scores.  Please re-enter: ";
				cin >> scores[i];
			}
			else if(scores[i] > 100){
				//Validate if scores are greater than 100, ask for re-input.
				cout << "No scores greater than 100.  Please re-enter: ";
				cin >> scores[i];
			}
		}
	}
}


double findLowest(double scores[], int MAX){
	//Declare variables
	double lowestValue = scores[0];
	int i, lowestArrPos = 1;

	//Precision for fractional scores
	cout << fixed << showpoint << setprecision(2);
	//Calculation
	for(i = 0; i < MAX; i++){
		if(scores[i] < lowestValue){
			lowestValue = scores[i];
			lowestArrPos = i;
		}
	}

	return lowestValue;
}

double calcAverage(double scores[], double lowestValue, int MAX){
	double sum = 0.0, average = 0.0;
	int i = 0;

	//Loop to find the sum.
	for(i = 0; i < MAX; i++)
		sum = sum + scores[i];

	//Subtract the lowest value from the sum.
	sum = sum - lowestValue;

	//Divide the sum by the amount of scores, in this case 10.
	//The result will be a double because sum is a double.
	cout << fixed << showpoint << setprecision(2);
	//Divide test scores by 9 tests, because one was taken out.
	average = sum/9;

	return average;
}
/*
Assignment #17
        by:  Esquire At Large
        date: December 4th, 2007
*******************************************

Please input the score for test 1: 12
Please input the score for test 2: -12
No negative scores.  Please re-enter: 101
No scores greater than 100.  Please re-enter: 45
Please input the score for test 3: 98
Please input the score for test 4: 78
Please input the score for test 5: 63
Please input the score for test 6: 90
Please input the score for test 7: 85
Please input the score for test 8: 88
Please input the score for test 9: 74
Please input the score for test 10: 45
The lowest Value is: 12.00
The average, with the lowest score taken out, equates to: 74.00

Did you want to retry? (Y/N)n
Press any key to continue . . .
*/


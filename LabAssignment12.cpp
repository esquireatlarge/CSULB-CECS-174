/*Path Project: <redacted>
Written by:  Esquire At Large
e-mail address:  esquirecode@gmail.com
C174 TTh 1:00 
Date:  November 12th, 2007
Assignment #12 - computer #23
Description:  Compute clothing sizes according to user's height,
weight, and age.
*/

#include <iostream>
#include <iomanip>
using namespace std;

double hatSize(double w, double h);
//PURPOSE: To determine the user's hat size based on 
//         their height and weight.
//PRECONDITION: Function takes in user's weight and height
//              and processes them as 'w' and 'h'.
//POSTCONDITION: Returns the hat size of the user.
double jacketSize(double w, double h);
//PURPOSE: To determine the user's jacket size based on 
//         their height and weight and age.
//PRECONDITION: Function takes in user's weight and height
//              and processes them as 'w' and 'h'.
//POSTCONDITION: Returns the jacket size of the user.
double waist(double w);
//PURPOSE: To determine the user's waist in inches based on 
//         their weight and age.
//PRECONDITION: Function takes in user's weight and
//              and processes it as 'w'.
//POSTCONDITION: Returns the size of the user's waist in inches.

int age; //Declared globally so can be passed through functions

int main() 
{
	double weight, height;
	char choice;

	//introduction
	cout << "Assignment #12 \n"
		<< "\tby:  Esquire At Large \n"
		<< "\tdate: November 12th, 2007 \n"
		<< "*******************************************\n\n";

	do{
		//User input
		cout << "Please input your weight in pounds: ";
		cin >> weight;
		cout << "\nPlease input your height in inches: ";
		cin >> height;
		cout << "\nPlease input your age: ";
		cin >> age;
		//Display output
		cout << "Your hat size equates to " << hatSize(weight, height)
			<< ".\n";
		cout << "Your jacket size equates to " << jacketSize(weight, height) 
			<< ".\n";
		cout << "Your waist size eqates to " << waist(weight) << ".\n";
		cout << "Would you like to remeasure? (Y/N)?";
		cin >> choice;
	}while(tolower(choice) == 'y');
	
	//closing
	cout << "\n\nThe program has ended.  Good bye!\n";

	return 0;
}

//Calculate hat size
double hatSize(double w, double h){
	double size_of_hat;
	//Set precision of the hat size to two decimal places
	cout << fixed << showpoint << setprecision(2);
	//Hat size calculation
	size_of_hat = ((w/h)*2.9);
	//Pass the size of the hat to the main function
	return size_of_hat;
	
}
//Calculate jacket size
double jacketSize(double w, double h){
	int years, i;
	double size_of_jacket;
	cout << fixed << showpoint << setprecision(2);
	years = age - 30; //Subtract 30 from the age
	size_of_jacket = ((h*w)/288);
	if(years >= 10) //If the years remaining are greater than 10
		//proceed with the for loop
	{
		for(i = 0; i < (years/10); i++)
			//i is incremented until it equals the amount of ten year periods
			//after age 30, then 1/8 is added to the size of the jacket.
			//1/8 must be a double.
			size_of_jacket = size_of_jacket + (1.0/8);
	}
	else
		size_of_jacket = size_of_jacket;

	return size_of_jacket; //Pass the size of the jacket to the main function
}
//Calculate waist in inches
double waist(double w){
	int years, i;
	double waist_in_inches;
	cout << fixed  << showpoint << setprecision(2);
	years = age - 28; //Subtract 28 from the inputted age
	waist_in_inches = (w/5.7);
	if(years > 2)
	{//if the user is at least 2 years older than 28, i is incremented for every
		//two year period after age 28 to at 1/10 to the waist in inches.
		for(i = 0; i < (years/2); i++)
			waist_in_inches = waist_in_inches + (1.0/10);
	}
	else 
		waist_in_inches = waist_in_inches;

	return waist_in_inches; //Pass to the main function
}
/*
Assignment #12
        by:  Esquire At Large
        date: November 12th, 2007
*******************************************

Please input your weight in pounds: 240

Please input your height in inches: 67

Please input your age: 45
Your hat size equates to 10.39.
Your jacket size equates to 55.96.
Your waist size eqates to 42.91.
Would you like to remeasure? (Y/N)?n


The program has ended.  Good bye!
Press any key to continue . . .
*/

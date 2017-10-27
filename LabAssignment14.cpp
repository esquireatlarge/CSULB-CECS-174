/*Path Project: <redacted>
Written by:  Esquire At Large
e-mail address:  esquirecode@gmail.com
C174 TTh 1:00 
Date:  November 20th, 2007
Assignment #14 - computer #23
Description:  Use call-by-reference and call-by-value functions to create
a program asking for the side of a square, and then shows the square.
*/

#include <iostream>
using namespace std;

void input_side(int& length);
//Purpose:  The request the length of a square's side.
//Precondition:  Length of side.
//Postcondition:  None.
void display_square(int length);
//Purpose:  To display the square based on the inputted side.
//Precondition:  Length of side.
//Postcondition:  Returns nothing, just displays a square.
int area(int length);
//Purpose:  Calculate area of the square.
//Precondition:  Length of side.
//Postcondition:  Returns integer value of area.
int perimeter(int length);
//Purpose:  Calculate perimiter of square.
//Precondition:  Length of side.
//Postcondition:  Returns integer value of perimeter.

int main() 
{
	//declarations
	int side;

	//introduction
	cout << "Assignment #14 \n"
		<< "\tby:  Esquire At Large \n"
		<< "\tdate: November 20th, 2007 \n"
		<< "*******************************************\n\n";

	input_side(side);
	//Use the value 'side' as the variable in which to store the length 
	//of the square
	display_square(side);
	//Call the display function using call-by-value since you only need
	//to make a copy of the variable side, since it is not being altered.

	cout << "Its area is " << area(side) 
		<< " and its perimeter is " << perimeter(side)
		<< endl;

	//Closing
	cout << "\nThe program has finished.  Have a good day!\n";

	return 0;


}

void input_side(int& length){
	
	cout << "Please input the length of a side of the square: ";
	cin >> length;
	while(length <= 0){
		cout << "\nThe length must be positive!  Please re-input it: ";
		cin >> length;
	}
}

void display_square(int length){
	int i, z;

	for(i = 1; i <= length; i++){
		for(z = 1; z <= length; z++)
			cout << "*";
		cout << endl;
	}
}

int area(int length){
	//Return area of a square, being length squared.

	return (length*length);
}

int perimeter(int length){
	//Return perimeter of a square, which is the length * 4.
	return (length * 4);
}
/*
Assignment #14
        by:  Esquire At Large
        date: November 20th, 2007
*******************************************

Please input the length of a side of the square: 3
***
***
***
Its area is 9 and its perimeter is 12

The program has finished.  Have a good day!
Press any key to continue . . .
*/
/*Path Project: <redacted>
Written by:  Esquire At Large
e-mail address:  esquirecode@gmail.com
C174 TTh 1:00 
Date:  November 29th, 2007
Assignment #15 - computer #23
Description:  To display an itemized bill for the customer of a coffee shop.
*/

#include <iostream>
#include <iomanip>
using namespace std;

void store_amounts(int& amount_coffee, int& amount_bagel, int& amount_danish);
//PRECONDITION:  Takes in amounts.
//POSTCONDITION:  Alters the values of the amounts based on the user's request.
//PURPOSE:  To store the amounts of each respective item.

double subtotal(int amount_coffee, int amount_bagel, int amount_danish, 
			  double& coffee_price, double& bagel_price, double& danish_price);
//PRECONDITION:  Takes in the amounts, and alters the prices.
//POSTCONDITION:  Returns the subtotal.
//PURPOSE:  To calculate the subtotal.

double tax(double& sub_total);
//PRECONDITION:  Takes in the subtotal.
//POSTCONDITION:  Returns sales tax to main function.
//PURPOSE:  Calculate sales tax.

void print(int& amount_coffe, int& amount_bagel, int& amount_danish, 
		   double& price_coffee, double& price_bagel, double& price_danish, 
		   double& sub_total, double& sales_tax, double& grand_total);
//PRECONDITION:  Takes in the amounts, prices, and totals.
//POSTCONDITION:  Displays the bill.
//PURPOSE:  To display the bill.

int main(){
	//Declare variables
	char choice;
	int camt, bamt, damt;
	double cprice, bprice, dprice, sub_total, sales_tax, grand_total;
	
	//introduction
	cout << "Assignment #15 \n"
		<< "\tby:  Esquire At Large \n"
		<< "\tdate: November 27th, 2007 \n"
		<< "*******************************************\n\n";

	cout << "Welcome to Esquire's Coffee House of Munch!\n"
		<< "Here we serve coffee at $1.25 per cup, bagels at $1.50,"
		<< "\n and danishes at $2.25.";
	
	do{
		store_amounts(camt, bamt, damt);
		sub_total = subtotal(camt, bamt, damt, cprice, bprice, dprice);
		sales_tax = tax(sub_total);
		//Calculate the grand total.
		grand_total = sub_total + sales_tax;
		//Pass the amounts, prices, sub total, sales tax, and grant total 
		//to the print function.
		print(camt, bamt, damt, cprice, bprice, dprice, sub_total, sales_tax, 
			grand_total);

	cout << "\nDid you want to re-order? (Y/N)";
	cin >> choice;
	}while((tolower(choice) == 'y'));


	//Closing
	cout << "Thank you for your order at Esquire's Coffee House of Munch!\n"
		<< "Have a good day!\n";

	return 0;
}

void store_amounts(int& amount_coffee, int& amount_bagel, int& amount_danish){
	//Reset variables in case the user re-orders.
	amount_coffee = 0;
	amount_bagel = 0;
	amount_danish = 0;

	//User input
	cout <<"\n\nHow many cups of coffee would you like?";
	cin >> amount_coffee;
	cout << "\nHow many bagels would you like?";
	cin >> amount_bagel;
	cout << "\nHow many Danish pastries would you like?";
	cin >> amount_danish;
	
	//Validate that the user didn't input negative quantities.
	if((amount_coffee <= 0) || (amount_bagel <= 0) || (amount_danish <= 0)){
		while((amount_coffee <= 0) || (amount_bagel <= 0) || (amount_danish <= 0)){
			cout << "You can't order zero or negative quantities!  ";
			cout << "Please re-enter.\n";
			cout << "How many cups of coffee? ";
			cin >> amount_coffee;
			cout << "How many bagels?";
			cin >> amount_bagel;
			cout << "How many danish pastries?";
			cin >> amount_danish;
		}
	}
	else if((amount_coffee == 0) && (amount_bagel == 0) && (amount_danish == 0)){
		cout << "\nIt would be nice if you ordered something.";
	}	
}

double subtotal(int amount_coffee, int amount_bagel, int amount_danish, 
			  double& coffee_price, double& bagel_price, double& danish_price){
	double cprice = 0.0, bprice = 0.0, dprice = 0.0;
	
	//Calculate individual prices.
	coffee_price = amount_coffee*1.25;
	bagel_price = amount_bagel*1.50;
	danish_price = amount_danish*2.25;
	//Calculate subtotal.
	return coffee_price + bagel_price + danish_price;
}

double tax(double& sub_total){
	double tax_charge;
	//Multiply by the sales tax and add to subtotal
	tax_charge = sub_total*0.07;

	return tax_charge;
}

void print(int& amount_coffee, int& amount_bagel, int& amount_danish, 
		   double& price_coffee, double& price_bagel, double& price_danish, 
		   double& sub_total, double& sales_tax, double& grand_total){
	//Set precision for cents
	cout << fixed << showpoint << setprecision(2);
	cout << "Your bill includes a 7% sales tax.\n\n";
	cout << "Item\tAmount\tPrice\n";
	cout << "Coffee\t" << amount_coffee << "\t" << price_coffee << "\n";
	cout << "Bagel\t" << amount_bagel << "\t" << price_bagel << "\n";
	cout << "Danish\t" << amount_danish << "\t" << price_danish << "\n";
	cout << "-------------------------------------";
	cout << "\n\t\tSubtotal: \t$" << sub_total;
	cout << "\n\t\tSales Tax: \t$" << sales_tax;
	cout << "\n\t\tTotal: \t\t$" << grand_total << "\n";

}
/*
Assignment #15
        by:  Esquire At Large
        date: November 27th, 2007
*******************************************

Welcome to Esquire's Coffee House of Munch!
Here we serve coffee at $1.25 per cup, bagels at $1.50,
 and danishes at $2.25.

How many cups of coffee would you like?0

How many bagels would you like?0

How many Danish pastries would you like?0
You can't order zero or negative quantities!  Please re-enter.
How many cups of coffee? -1
How many bagels?5
How many danish pastries?1
You can't order zero or negative quantities!  Please re-enter.
How many cups of coffee? 1
How many bagels?2
How many danish pastries?3
Your bill includes a 7% sales tax.

Item    Amount  Price
Coffee  1       1.25
Bagel   2       3.00
Danish  3       6.75
-------------------------------------
                Subtotal:       $11.00
                Sales Tax:      $0.77
                Total:          $11.77

Did you want to re-order? (Y/N)n
Thank you for your order at Esquire's Coffee House of Munch!
Have a good day!
Press any key to continue . . .
*/
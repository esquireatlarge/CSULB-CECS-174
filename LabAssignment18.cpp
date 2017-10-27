/*Path Project: <redacted>
Written by:  Esquire At Large
e-mail address:  esquirecode@gmail.com
C174 TTh 1:00 
Date:  December 6th, 2007
Assignment #18 - computer #23
Description:  Use arrays to determine the total payroll and gross pay for a
number of employees.
*/

#include <iostream>
#include <iomanip>
using namespace std;

void get_ID(int employee_ID[], int num_of_employee);
//PRECONDITION:  Intakes the employee_id array, and the maximum amount of
//employees.
//POSTCONDITION:  Returns nothing, but does fill the employee_id array.
//PURPOSE:  To obtain the ID numbers of the employees.
void hours_worked(int hours[], int num_of_employee);
//PRECONDITION:  Intakes the hours worked, and the maximum number of employees.
//POSTCONDITION:  Returns nothing, but does fill the hours array.
//PURPOSE:  To store the hours worked by each employee.
void hour_wage(double earnings[], int num_of_employee);
//PRECONDITION:  Intakes the earnings array, and the maximum number of employees.
//POSTCONDITION:  Returns nothing, but does fill the earning array.
//PURPOSE:  To obtain the hourly rate of each employee.
void display_totals(double earnings[], int employee_id[], int num_of_employee,
					int hours[]);
//PRECONDITION:  Intakes the hourly rate, employee id, the hours worked by each employee
//and the maximum amount of employees.
//POSTCONDITION:  Returns nothing.
//PURPOSE:  To display the gross total, and the individual total of each employee, as well as
//their hours worked and ID numbers.


int main(){
	//Declare variables
	int number_employees;
	//A made up number.
	const int ARRAY_SIZE = 12;
	int employee_id[ARRAY_SIZE], hours[ARRAY_SIZE];
	double earnings[ARRAY_SIZE];


	//introduction
	cout << "Assignment #18 \n"
		<< "\tby:  Matt Sguerri \n"
		<< "\tdate: December 6th, 2007 \n"
		<< "*******************************************\n\n";

	//User input
	cout << "Please input the amount of employees: ";
	cin >> number_employees;
	//Validate if the user input a valid, non-negative or non-zero number of employees.
	do{
		if((number_employees <= 0) || (number_employees > 20)){
			cout << "Invalid entry.  Remember, the maximum amount is 20.\n";
			cout << "Please re-enter: ";
			cin >> number_employees;
		}
	}while((number_employees <= 0) || (number_employees > 20));

	//Get employee IDs
	get_ID(employee_id, number_employees);
	//Get the hours worked by each employee.
	hours_worked(hours, number_employees);
	//Get the hourly rate of each employee.
	hour_wage(earnings, number_employees);
	//Show the totals.
	display_totals(earnings, employee_id, number_employees, hours);


	//Closing
	cout << "\n\nThe program has ended. Have a good day!\n";

	return 0;

}

void get_ID(int employee_ID[], int num_of_employee){
	int i;
	
	cout << "Please input the IDs of your employees.  They must be integers.\n";
	for(i = 0; i < num_of_employee; i++){
		cout << "Please input the ID for employee " << i + 1 << ": ";
		cin >> employee_ID[i];
		//Validate for negative IDs
		while(employee_ID[i] < 0){
			cout << "The employee IDs cannot be negative.";
			cout << "Please re-enter: ";
			cin >> employee_ID[i];
		}//close while loop
	}//close for loop
	
}

void hours_worked(int hours[], int num_of_employee){
	int i;
	
	cout << "Please input the amount of hours per week each employee worked.\n";
	for(i = 0; i < num_of_employee; i++){
		cout << "How many hours did employee " << i + 1 << " work? ";
		cin >> hours[i];
		//Validate if hours are zero or negative
		while(hours[i] <= 0){
			if(hours[i] == 0){
				cout << "Your employee must have worked at least one hour."
					<< "Please re-enter: ";
				cin >> hours[i];
			}
			else if(hours[i] < 0){
				cout << "Negative hours are invalid.  Please re-enter: ";
				cin >> hours[i];
			}
		}//close while 
	}//close for loop
}//close function

void hour_wage(double earnings[], int num_of_employee){
	int i;

	cout << "Insert the hourly wage of each employee.\n";
	for(i = 0; i < num_of_employee; i++){
		cout << "Insert hourly wage for employee " << i+1 << ":";
		cin >> earnings[i];
		while(earnings[i] <= 0.0){
			if(earnings[i] == 0.0){
				cout << "Your employees cannot work for free.  Please enter an actual pay: ";
				cin >> earnings[i];
			}
			else{
				cout << "Employee earnings cannot be negative.  Please re-enter: ";
				cin >> earnings[i];
			}
		}//close while
	}//close for loop
}

void display_totals(double earnings[], int employee_id[], int num_of_employee,int hours[]){
	int i = 0;
	double total_payroll = 0.0;

	//Set precision for cents
	cout << fixed << showpoint << setprecision(2);

	for(i =0; i < num_of_employee; i++){
		total_payroll = total_payroll + (earnings[i]*hours[i]);
	}
	cout << "\nDivision:  Area 51\nNumber of employees: " << num_of_employee << "\n"
		<< "Total payroll for division: $" << total_payroll << "\n";

	cout << "\nEmployee ID\tGross Pay\n";
	for(i = 0; i < num_of_employee; i++){
		cout << employee_id[i] << "\t\t$" << (earnings[i] * hours[i]) << "\n";
	}

}
/*
Assignment #18
        by:  Esquire At Large
        date: December 6th, 2007
*******************************************

Please input the amount of employees: 0
Invalid entry.  Remember, the maximum amount is 20.
Please re-enter: -1
Invalid entry.  Remember, the maximum amount is 20.
Please re-enter: 4
Please input the IDs of your employees.  They must be integers.
Please input the ID for employee 1: 1
Please input the ID for employee 2: 2
Please input the ID for employee 3: 3
Please input the ID for employee 4: 4
Please input the amount of hours per week each employee worked.
How many hours did employee 1 work? -1
Negative hours are invalid.  Please re-enter: 0
Your employee must have worked at least one hour.Please re-enter: 10
How many hours did employee 2 work? 12
How many hours did employee 3 work? 40
How many hours did employee 4 work? 40
Insert the hourly wage of each employee.
Insert hourly wage for employee 1:0
Your employees cannot work for free.  Please enter an actual pay: -1
Employee earnings cannot be negative.  Please re-enter: 12
Insert hourly wage for employee 2:12
Insert hourly wage for employee 3:12
Insert hourly wage for employee 4:12

Division:  Area 51
Number of employees: 4
Total payroll for division: $1224.00

Employee ID     Gross Pay
1               $120.00
2               $144.00
3               $480.00
4               $480.00


The program has ended. Have a good day!
Press any key to continue
*/
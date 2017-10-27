/*Path Project: ~msguerri/C174-proj/MattLExample1.cpp
Written by:  Matt Sguerri
e-mail address:  mattsguerri@gmail.com
C174 TTh 1:00 
Date:  September 18th, 2007
Example #1
Description:  To correct the format of the peas and pods program.
*/

#include <iostream>
using namespace std;

int main()
{
	//introduction
	cout << "Example # \n"
		<< "\tby:  Matt Sguerri \n"
		<< "\tdate:  September 13th, 2007 \n"
		<< "*************************************\n\n";
	
	//declaration of variables
	int number_of_pods, peas_per_pod, total_peas;

	//input by user
	cout << "Press return after entering a number.\n";
	cout << "Enter the number of pods: ";
	cin >> number_of_pods;
	cout << "Enter the number of peas in a pod: ";
	cin >> peas_per_pod;
	
	//calculation
	total_peas = number_of_pods * peas_per_pod;

	//display output
	cout << "If you have ";
	cout << number_of_pods;
	cout << " pea pods\n";
	cout << "and ";
	cout << peas_per_pod;
	cout << " peas in each pod, then\n";
	cout << "you have ";
	cout << total_peas;
	cout << " peas in all the pods.\n";

	//closing 
	cout << "\n\nEnd of Program.\n";

	return 0;
}


/*Example #
        by:  Matt Sguerri
        date:  September 13th, 2007
*************************************

Press return after entering a number.
Enter the number of pods: 12
Enter the number of peas in a pod: 450
If you have 12 pea pods
and 450 peas in each pod, then
you have 5400 peas in all the pods.


End of Program.
Press any key to continue . . .
*/

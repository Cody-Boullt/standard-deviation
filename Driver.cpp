//Cody Boullt cboullt@cnm.edu BoulltE9

//include necessary code libraries for later use
#include <iostream>
#include <string>
#include <iomanip>
#include "Header.h"
using namespace std;

//call Header function
void Header();

int main()
{
	//declare variables
	int total = 1000, numbers[1000];
	float average, deviation;
	string answer1;

	Header();

	//start do-while loop
	do
	{
		//call functions
		FillArray(numbers, total);
		average = AveArray(numbers, total);
		deviation = StdDeviation(numbers, total, average);

		//set decimal as fixed at 4 places
		cout.setf(ios::fixed);
		setprecision(4);

		//display the average and the standard deviation
		cout << endl << "The average is " << average << endl << endl;
		cout << "The standard deviation is " << deviation << endl << endl;

		//allow user to repeat program
		cout << "\nWould you like to run this program again? (Y/N) ";
		cin >> answer1;
		cin.ignore();

	//end do-while loop
	}while(answer1 == "Yes" || answer1 == "Y" || answer1 == "yes" || answer1 == "y");
	
	//display goodbye message
	cout << "\nThank you for using my program! Have a great day!\n\n";

	//end program
	return 0;
}

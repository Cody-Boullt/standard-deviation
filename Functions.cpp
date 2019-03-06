//Cody Boullt cboullt@cnm.edu BoulltE9

//include necessary code libraries for later use
#include <iostream>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;

//code for Header function
void Header()
{
	//display header
	cout << "********** Cody Boullt - BoulltE9 - Arrays and Statistics **********\n\n";

	//return nothing
	return;
}

//code for FillArray function
void FillArray(int numbers[], int total)
{
	//declare variables
	int i=0;

	//using no set time, fill the array with random numbers
	srand(time (NULL) );
	for(i=0;i<total;++i)
	{
		numbers[i] = rand()%2001;
	}

	//return nothing
	return;
}

//code for AveArray function
float AveArray(int numbers[], int total)
{
	//declare variables
	int i;
	float average, sum=0;

	//for-loop to calculate the sum
	for(i=0;i<1000;++i)
	{
		sum = sum+numbers[i];
	}

	//calculate the average
	average = sum/total;

	//return the data as average
	return average;
}

//code for StdDeviation function
float StdDeviation(int numbers[], int total, float average)
{
	//declare variables
	int i;
	float sum1=0;
	float deviation=0;

	//for-loop to calcualte the sum
	for(i=0;i<total;++i)
	{
		sum1 = sum1+(average-numbers[i])*(average-numbers[i]);
	}

	//calculate the standard deviation
	deviation = sqrt(sum1/total-1);

	//return the data as deviation
	return deviation;
}

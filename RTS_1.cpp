/*Programmed by: Luis Barquero
  Purpose: User a number, and program will tell which numbers in the given array are above/below the user's number
*/

#include<iostream>
#include<stdio.h>

using namespace std;


int main()
{
	int array[5] = {1, 5, 2, 1, 10};
	int num;
	int above = 0;
	int below = 0;
	
	for(int i = 0; i < 5; i = i + 1)
	{
		cout << array[i] << " ";
	}
	
	cout << "\nEnter any number to see how many numbers are above/below the array" << endl;
	cin >> num;
	cout << "\n";
	
	for(int i = 0; i < 5; i = i + 1)
	{
		if(num > array[i])
		{
			above++;
			//cout << "\n" << array[i] << " is below. \nAbove total: " << above << endl;
		}
		
		else if(num < array[i])
		{
			below++;
			//cout << "\n" << array[i] << " is above. \nBelow total: " << below << endl;	
		}
	}
	
	cout << "\nAbove: " << above << ", Below: " << below << endl;
}
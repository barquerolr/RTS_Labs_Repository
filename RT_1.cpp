/*Programmed by: Luis Barquero
  Purpose: User a number, and program will tell which numbers in the given array are above/below the user's number
*/

#include<iostream>
#include<stdio.h>

using namespace std;


int main()
{
	int array[5] = {};
	int num;
	int size;
	int above = 0;
	int below = 0;
	int ab = 0;
	int be = 0;
	int number = 0;
	
	int *a = NULL;
	int n;
	cout << "Enter size: " << endl;
	cin >> n;
	a = new int[n];
	for(int i = 0; i < n; i++)
	{
		a[i] = 0;
	}
	
	for(int j = 0; j < n; j++)
	{
		cout << "\nEnter numbers: " << endl;
		cin >> a[j];
	}
	cout << "\n";
	
	for(int k = 0; k < n; k++)
	{
		cout << a[k] << " ";
	}
	
	cout << "\nEnter any number to see how many numbers are above/below the array" << endl;
	cin >> number;
	cout << "\n";
	
	for(int i = 0; i < n; i = i + 1)
	{
		if(number > a[i])
		{
			ab++;
			//cout << "\n" << array[i] << " is below. \nAbove total: " << above << endl;
		}
		
		else if(number < a[i])
		{
			be++;
			//cout << "\n" << array[i] << " is above. \nBelow total: " << below << endl;	
		}
	}
	
	cout << "\nAbove: " << ab << ", Below: " << be << endl;
	
	
	delete[] a;
	
	cout << "How many numbers?" << endl;
	cin >> size;
	for(int i = 0; i < size; i = i + 1)
	{
		cout << "\nEnter the numbers in the array: " << endl;
		cin >> array[i];
	}
	
	
	for(int i = 0; i < size; i = i + 1)
	{
		cout << array[i] << " ";
	}
	
	cout << "\nEnter any number to see how many numbers are above/below the array" << endl;
	cin >> num;
	cout << "\n";
	
	for(int i = 0; i < size; i = i + 1)
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
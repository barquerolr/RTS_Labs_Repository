/*Programmed by: Luis Barquero
  Purpose: Program will take a string and a shift value, and will rotate the characters accorrding to the shift.
           In other words, if the user enters MyString with a shift of 2, the program will take the last 2 letters
		   and place them at the beginning of the string.
*/
 
#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;


int main(void)
{
	char *input = NULL; // Character pointer for the input file.
	char *output = NULL; // Character pointer for the ouput file.
	char *binary_zero = NULL; // Character pointer that will be used to find the binary zero in the string.
	input = new char; // Process that will dynamically allocate the required memory space for the input file.
	output = input; // By setting the input file = outputfile, we can modify the output file, but keep the input file.
	int zero_position = 0; // Integer that fill find the position of the binary zero in the string.
	int difference = 0; // Integer that will be used in the shifting of the output file. 
	int shift;

	
	cout << "Enter string " << endl; // Asks the user to enter a file name.
	cin >> output; // Allows the user to enter a file name.
	cout << "\nEnter shift: " << endl;
	cin >> shift;
	
	binary_zero = strrchr(output, '\0'); // Process that will find the last member of the array, of binary zero, "\0".
	zero_position = binary_zero-output+1; // This will find the position of the binary zero.
	cout << "\n";
	cout << binary_zero-shift; //Process to add the overflow at the beginning of the string
	difference = zero_position-shift-1; //This will find the position of the last character after the rotation has occurred.
	printf("%.*s\n", difference, output);
	
}
	

 
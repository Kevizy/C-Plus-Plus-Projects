// This program will calculate the circumference of a circle 

#include <iostream>

using namespace std; 

int main()
{
	// Declare variables 
	float pi = 3.14159F; 
	float diameter{ }; 
	float circumference{ }; 

	// Asks the user to enter the diameter 
	cout << "Please enter the diameter: " << endl; 
	cin >> diameter; // Gets input from the user 

	// Calculate the circumference 
	circumference = pi * diameter; 

	// Displays the circumference 
	cout << "The circumference is: " << circumference << endl; 

	return 0; 
}


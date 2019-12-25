// This program will ask the user to enter a value in seconds and convert to minutes 

#include <iostream>

using namespace std;

int main()
{
	int totalSeconds{ }; 
	int minutes{ }; 
	int seconds{ }; 

	// Asks the user to enter seconds 
	cout << "Please enter seconds: " << endl;
	cin >> totalSeconds; 

	// Get the number of minutes 
	minutes = totalSeconds / 60; 

	// Gets the remaining seconds 
	seconds = totalSeconds / 60; 

	// Displays the value to console 
	cout << totalSeconds << " seconds is equal to:\n"; 
	cout << "Minutes: " << minutes << endl; 
	cout << "Seconds: " << seconds << endl; 

}



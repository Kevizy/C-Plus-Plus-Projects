// Calculates the area of a rectangle 

#include <iostream>

using namespace std; 

int main()
{
	// Declare empty values 
	int length, width, area; 

	// Greets the user and asks to enter the length and width of a rectangle 
	cout << "This program calculates the area of a rectangle." << endl; 
	cout << "Enter the length and width separated by a space." << endl; 

	// Stores input for length and width 
	cin >> length >> width; 

	// Calculates the area of rectangle by multiplying by length and width 
	area = length * width; 

	// Displays the value of the area 
	cout << "The area of the rectangle is: " << area << endl; 
}



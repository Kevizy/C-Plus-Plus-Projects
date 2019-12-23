// MadLibs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	string adjective; 
	string place; 
	string shadeOfGrey; 
	string solidWater; 

	cout << "Please enter an adjective: "; 
	cin >> adjective; 

	cout << "Please enter a name of a place: "; 
	cin >> place; 

	cout << "Please enter a shade of grey: "; 
	cin >> shadeOfGrey; 

	cout << "Please enter a solid of water: "; 
	cin >> solidWater; 
	
	cout << "\nIt's been a " + adjective + " winter here in " + place + "." << endl;
	cout << "For as long as we can remember, the sky has been " + shadeOfGrey + " and the ground has been covered with " + solidWater + "."<< endl;



}


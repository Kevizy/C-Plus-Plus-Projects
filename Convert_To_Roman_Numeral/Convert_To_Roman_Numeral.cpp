// This program takes input from a number and converts to a Roman Numeral 

#include <iostream>

using namespace std; 
int main()
{
    
	// Store values 
	int num; 

	// Ask for input
	cout << "Enter a number from 1 to 10 to convert to Roman Numeral." << endl; 

	// Stores number
	cin >> num; 

	// Switch statement to convert to Roman Numeral 
	switch (num) {
		case 1: 
			cout << "I"; 
			break; 
		case 2:
			cout << "II";
			break;
		case 3:
			cout << "III";
			break;
		case 4:
			cout << "IV";
			break;
		case 5:
			cout << "V";
			break;
		case 6:
			cout << "VI";
			break;
		case 7:
			cout << "VII";
			break;
		case 8:
			cout << "VIII";
			break;
		case 9:
			cout << "IX";
			break;
		case 10:
			cout << "X";
		default:
			cout << "Invalid Input"; 
			break; 
	}

	cout << endl; 

	string romanNumerals[] = { "0", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X" };

	if (num >= 1 && num < +10) {
		cout << romanNumerals[num] << endl;
	}
	else {
		cout << "You entered an incorrect number" << endl;
	}

}


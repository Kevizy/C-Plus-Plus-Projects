#include <iostream>
#include <string>

using namespace std; 

int main()
{
	string movieTitle; 
	string director; 
	int year; 
	double rating; 

	cout << "Enter the movie title: " << endl; 
	getline(cin, movieTitle);
	cout << "Enter the director name: " << endl; 
	getline(cin, director); 
	cout << "Enter the year: " << endl; 
	cin >> year; 
	cout << "Enter your rating (out of 10): " << endl; 
	cin >> rating; 

	if (rating > 10) {
		cout << "Please ener a rating between 1 to 10." << endl; 
	}

	cout << "\nTitle: " << movieTitle << endl; 
	cout << "Director: " << director << endl; 
	cout << "Year released: " << year << endl;
	cout << "Rating: " << rating << endl; 
	

}



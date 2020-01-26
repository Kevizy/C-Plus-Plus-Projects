#include <iostream>
#include <math.h>

using namespace std; 

int main()
{
	float a, b, c, d, root1, root2; 

	cout << "Enter the value of a, b, c: "; 

	cin >> a >> b >> c; 

	d = b * b - 4 * a * c; 

	if (d == 0) {
		root1 = (-b) / (2 * a); 
		root2 = root1;
			cout << "The roots are equal."; 
	} else if (d > 0) {
		root1 = -(b + sqrt(d)) / (2 * a); 
		root2 = -(b - sqrt(d)) / (2 * a);
		cout << "Roots are real and distinct."; 
	} else {
		root1 = (-b) / (2 * a); 
		root2 = sqrt(-d) / (2 * a); 
		cout << "Roots are imaginary."; 
	}

	cout << "\nRoot 1: " << root1 << "\nRoot2: " << root2; 
}

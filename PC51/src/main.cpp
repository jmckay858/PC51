//============================================================================
// PC 5.1 - Sum of Numbers
// -------------------------
// Programmer: Jeremy F McKay
// Date: October 10, 2012
// -------------------------
// This program will ask the user for a positive integer
// and then add all the number up to the number entered and
// display it
//
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#include <iostream>
using namespace std;


int main() {
	int num, sum = 0;
	cout << "\n   "
		 << "Enter a positive number: ";

	cin >> num;
	// Validate the input
	while (num <= 0)
	{
		cout << "   "
			 << "Please enter a positive number\n"
			 << "\n   "
			 << "Enter a positive number: ";
		cin >> num;
	}
	// Run the for loop to add up the sum
	for (int addto = 0; addto <= num; addto++)
	{
		sum = sum + addto;
		// cout << sum << endl;
	}


	// Display the results
	cout << "\n   "
		 << "The total of the integers up to " << num
		 << "\n   "
		 << "is " << sum << endl;



	return 0;
}

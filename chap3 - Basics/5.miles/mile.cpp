// By Niraj Mahajan, IIT B CSE

#include <simplecpp>

main_program
{
	// define variable for miles
	int inch;

	// take user input
	cout << "What distance in inches:  ";
	cin >> inch;

	double mile;
	double furlong;
	double yard;
	double feet;

	feet = inch / 12;
	yard = feet/ 3;
	furlong = yard / 220;
	mile = furlong/ 8;

	cout << "Inches:  " << inch <<  "\n Miles:  " << mile << "\nFurlongs:  " << furlong << "\n Yards:  " << yard << "\n Feet:  " << feet << endl;
}
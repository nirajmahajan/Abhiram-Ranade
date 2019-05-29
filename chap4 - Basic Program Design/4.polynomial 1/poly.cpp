// By Niraj Mahajan IITB CSE

#include <simplecpp>

main_program
{
	int degree;
	int x;
	int answer = 0;


	cout << "What is degree of polynomial:  ";
	cin >> degree;

	// define an array
	int coeff[degree];

	// arbitrary variable
	int temp1 = 0;
	int temp2 = 0;

	// read the coefficients
	repeat(degree + 1)
	{
		cout << "What is  the " << temp1 + 1 << "th coefficient:  ";
		cin >> coeff[temp1];

		temp1++;
	}

	// take x from user
	cout << "what is the value of x:  ";
	cin >> x;

	repeat(degree + 1)
	{
		answer = answer + (coeff[temp2] * pow(x, degree - temp2));
		temp2++;
	}

	cout << "The value of the polynomial is " << answer << endl;
}
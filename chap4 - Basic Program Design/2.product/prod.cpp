// By Niraj Mahajan IITB CSE

#include <simplecpp>

double prod(int num);
double sum(int n);

main_program
{
	int number;

	cout << "What is the value of n:  ";
	cin >> number;

	double answer = (prod(number) / pow(2, number));

	cout << "The value of 2/pi is " << 2/PI << endl;
	cout << "The value of given expression upto n terms is  " << answer << endl;

}

// function to find answer !!
double prod(int num)
{
	if (num == 1)
	{
		return sqrt(2);
	}

	return (prod(num - 1) * sum(num));
}

// function to find out numerator for n terms
double sum(int n)
{
	if (n == 1)
	{
		return sqrt(2);
	}

	return sqrt(2 + sum(n - 1));
}
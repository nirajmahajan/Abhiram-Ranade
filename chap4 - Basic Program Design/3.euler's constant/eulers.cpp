// By Niraj Mahajan IITB CSE

#include <simplecpp>

int factorial(int num);

main_program
{
	double x;
	cout << "What should be the value of x:  ";
	cin >> x;

	double answer = 0;

	// arbitrary int i
	int i = 0;

	repeat(15)
	{
		answer = answer + (pow(x, i) / factorial(i));
		i++;
	}

	cout << "e raised to x is  " << answer << endl;
}

int factorial(int num)
{
	if (num == 0 || num == 1)
	{
		return 1;
	}

	return (num * factorial(num - 1));
}
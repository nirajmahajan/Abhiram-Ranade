// finds the nth dearrangement
// By Niraj Mahajan IITB CSE

#include <simplecpp>

int dearr(int num);

main_program
{
	int number;

	cout << "Which dearrangement is desired :   ";
	cin >> number;

	int answer = dearr(number);

	if (answer == -1)
	{
		return 1;
		cout << "ERROR\n";
	}

	cout << "The " << number << "th dearrangement is " << answer << endl;
}

int dearr(int num)
{
	if (num == 1)
	{
		return 0;
	}

	if (num < 1)
	{
		return -1;
	}

	return ((dearr(num - 1) * num) + pow(-1,num));
}
#include <cstdio>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <cmath>

int main(void)
{
	// take input array
	char input[3];
	for(int i = 0; i < 3; i++)
	{
		std::cin >> input[i];
	}

	// define variables for first and last digit
	int first, last;

	// check for correctness
	if (isdigit(input[0])  &&  isdigit(input[2])  &&  input[1] == '.')
	{
		// convert strings to integers
		first = atoi(&input[0]);
		last = atoi(&input[2]);

		// form a decimal
		float decimal = first + (0.1 * last);

		printf("The square of %f is %f\n", decimal, pow(decimal, 2));
	}
	else
	{		// improper usage!!
		std::cout << "Please provide proper input!!\n";
		return 1;
	}
}
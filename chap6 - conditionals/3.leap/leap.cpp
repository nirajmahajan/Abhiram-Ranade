// outputs whether a number is a leap year or not
// By Niraj Mahajan IITB CSE
#include <iostream>

int main(void)
{
	int year;

	std::cout << "Which year:  ";
	std::cin >> year;

	if (year <= 0 )
	{
		printf("Give a proper year!!\n");
		return 1;
	}

	if(year % 100 == 0)
	{
		if(year % 400 == 0)
		{
			std::cout << "Leap year!!\n";
		}
		else
		{
			std::cout << "Not a leap year!!\n";
		}
	}
	else if (year % 4 == 0)
	{
		std::cout << "Leap year!!\n";
	}
	else
	{
		std::cout << "Not a leap year!!\n";
	}
}
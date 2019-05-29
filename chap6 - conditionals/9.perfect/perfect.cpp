#include <cstdio>
#include <iostream>

int main(void)
{
	int number;
	std::cout << "Number:  ";
	std::cin >> number;

	int sum = 0;

	for(int i = 1; i < number; i++)
	{
		if(number % i == 0)
		{
			sum += i;
		}
		else{}
	}

	if(number == sum)
	{
		std::cout << "Perfect\n";
	}
	else
	{
		std::cout << "Not perfect\n";
	}
}
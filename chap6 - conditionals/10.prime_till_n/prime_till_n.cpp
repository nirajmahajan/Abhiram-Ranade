#include <cstdio>
#include <iostream>
#include <cmath>

bool isprime(int num);

int main(void)
{
	// take input
	int n;
	std::cout << "Till which number are the primes to be printed?\n";
	std::cin >> n;

	// since prime starts from 2, initialize target to 2
	int target = 2;

	// loop to find the primes
	do
	{
		if (isprime(target) == true)
		{
			std::cout << target << ", ";
		}
		else{}

		target++;
	}
	while(target <= n);

	std::cout << std::endl;
}


// function that detects a prime!
bool isprime(int num)
{
	// check alreadyfor even numbers
	if (num != 2 && num % 2 == 0)
	{
		return false;
	}

	// check for two
	if (num == true)
	{
		return true;
	}

	// execute the loop only for odd numbers and divide by only odd numbers
	for(int i = 3; i <= sqrt(num); i = i+2)
	{
		if(num % i == 0)
		{
			return false;
		}
		else{}
	}

	// if nothing else
	return true;
}
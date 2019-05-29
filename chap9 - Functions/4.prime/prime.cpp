#include <cstdio>
#include <iostream>
#include <cmath>

int main(void)
{
	long long num;
	std::cout << "Number:  ";
	std::cin >> num;

	if (num < 2)
	{
		// break
		printf("Neither pime, nor composite!!\n");
		return 1;
	}
	else{/* continue*/}

	if (num != 2 && num % 2 == 0)
	{
		std::cout << "Composite Number!!\n";
		return 0;
	}

	// boolean to ckeep track whther prime or not
	bool prime_checker = true;

	// execute the loop only for odd numbers and divide by only odd numbers
	for(int i = 3; i <= sqrt(num); i = i+2)
	{
		if(num % i == 0)
		{
			prime_checker = false;
			break;
		}
		else{}
	}

	if(prime_checker == true)
	{
		std::cout << "Prime number\n";
	}
	else
	{
		std::cout << "Composite Number!!\n";
	}

}
//calculates the factorial
#include <cstdio>
#include <iostream>

double fac(double n);

int main(void)
{
	double n;

	do
	{
		std::cout << "Factorial of which number is to be calculated:  ";
		std::cin >> n;
	}
	while(n != (int)n);
	
	printf("The factorial of %lf is %lf\n",n, fac(n));
}

double fac(double n)
{
	if(n <= 1)
	{
		return 1;
	}
	else
	{
		return n*fac(n-1);
	}
}
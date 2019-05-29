// calculates nCr
// By Niraj Mahajan, IITB, CSE
#include <cstdio>
#include <iostream>

double nCr(int n, int r);

int main(void)
{
	int n, r;
	std::cout << "To claculate nCr:\nn = ";
	std::cin >> n;
	std::cout << "r = ";
	std::cin >> r;

	std::cout << n << "C" << r << " is " << nCr(n, r) << std::endl;
}

double nCr(int n, int r)
{
	if (n <= 0 || r < 0)
	{
		return 0;
	}
	else if(n < r)
	{
		return 0;
	}
	else if(n == r)
	{
		return 1;
	}
	else if(r == 1 || r == (n-1))
	{
		return n;
	}
	else
	{
		return (nCr(n-1, r) + nCr(n-1, r-1));
	}
}
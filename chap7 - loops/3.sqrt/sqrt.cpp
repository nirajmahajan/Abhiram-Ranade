#include <cstdio>
#include <cmath>
#include <iostream>

int main(void)
{
	int n;

	do
	{
		std::cout << "Positive Integer:  ";
		std::cin >> n;
	}
	while(n < 0);

	int i = 0;
	int ans;

	while(true)
	{
		if((i*i) > n)
		{
			ans = i-1;
			break;
		}
		else
		{
			i++;
		}
	}

	std::cout << "Greatest integer smaller than the square root of " << n << " is " << ans << std::endl;
}
// proves the efficiency of binary search
// iterates over 1 to 1000 and searches every number in 1 - 1000
// prints out the max number of attempts taken
// By Niraj Mahajan IITB CSE

#include <simplecpp>
	
int bin_search(int a);

main_program
{
	int max_attempts = 0;
	int attempts = 0;

	for(int i = 1; i < 1001; i++)
	{
		attempts = bin_search(i);

		max_attempts = max(max_attempts, attempts);
	}

	cout << "Max attempts taken are  " << max_attempts << endl;
}

int bin_search(int a)
{
	if(a > 1000 || a < 0)
	{
		return 9999;
	}

	int hi = 1000, lo = 1;
	int mid;
	int count = 0;

	while(true)
	{
		count++;
		mid = (hi + lo)/2;

		if(a == mid)
		{
			return count;
		}
		else if(a > mid)
		{
			lo = mid + 1;
		}
		else
		{
			hi = mid - 1;
		}
	}
}
#include <iostream>

int Feb(int year);

int main(void)
{
	int days, year;

	std::cout << "year:  ";
	std::cin >> year;
	std::cout << "Days:  ";
	std::cin >> days;

	int feb = Feb(year);

	if(feb == 28)
	{
		if (days <= 0 || days > 365)
		{
			printf("Better start making sense!!\n");
			return 1;
		}
	}
	else 
	{
		if (days <= 0 || days > 366)
		{
			printf("Better start making sense!!\n");
			return 1;
		}
	}


	int date;

	if(days <= 31)
	{
		date = days;
		printf("%i/1/%i\n", date, year);
	}
	else if (days <= (31+feb))
	{
		date = days - (feb);
		printf("%i/2/%i\n", date, year);
	}
	else if (days <= (62+feb))
	{
		date = days - (31+feb);
		printf("%i/3/%i\n", date, year);
	}
	else if (days <= (92+feb))
	{
		date = days - (62+feb);
		printf("%i/4/%i\n", date, year);
	}
	else if (days <= (123+feb))
	{
		date = days - (92+feb);
		printf("%i/5/%i\n", date, year);
	}
	else if (days <= (153+feb))
	{
		date = days - (123+feb);
		printf("%i/6/%i\n", date, year);
	}
	else if (days <= (184+feb))
	{
		date = days - (153+feb);
		printf("%i/7/%i\n", date, year);
	}
	else if (days <= (215+feb))
	{
		date = days - (184+feb);
		printf("%i/8/%i\n", date, year);
	}
	else if (days <= (245+feb))
	{
		date = days - (215+feb);
		printf("%i/9/%i\n", date, year);
	}
	else if (days <= (276+feb))
	{
		date = days - (245+feb);
		printf("%i/10/%i\n", date, year);
	}
	else if (days <= (306+feb))
	{
		date = days - (276+feb);
		printf("%i/11/%i\n", date, year);
	}
	else
	{
		date = days - (306+feb);
		printf("%i/12/%i\n", date, year);
	}

}

int Feb(int year)
{
	if(year % 100 == 0)
	{
		if(year % 400 == 0)
		{
			return 29;
		}
		else
		{
			return 28;
		}
	}
	else if (year % 4 == 0)
	{
		return 29;
	}
	else
	{
		return 28;
	}
}
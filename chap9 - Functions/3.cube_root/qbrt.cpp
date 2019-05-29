// finds cube root of a number by newton raphson method
// By Niraj Mahajan, IITB CSE

#include <cstdio>
#include <iostream>
#include <cmath>

double qbrt(double num, double error);
double f(double x, double num);
double der_f(double x);

int main(void)
{
	double num;
	std::cout << "Cube Root of which number is to be determined:  ";
	std::cin >> num;

	double error;
	std::cout << "Max permissible error:  ";
	std::cin >> error;

	if (num == 0)
	{
		std::cout << "Cube Root of 0 is 0\n";
		return 0;
	}

	double ans = qbrt(num, error);

	printf("Cube root of %f is %f\n", num, ans);
}

double qbrt(double num, double error)
{
	double ans = num/2;

	do
	{
		ans = ans - ((f(ans, num))/(der_f(ans)));
	}
	while(abs(f(ans, num)) > error);

	return ans;
}

double f(double x, double num)
{
	return (x*x*x - num);
}

double der_f(double x)
{
	return 3*x*x;
}
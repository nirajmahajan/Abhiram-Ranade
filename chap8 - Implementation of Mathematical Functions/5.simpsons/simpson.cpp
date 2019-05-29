// calculates log of a function by integration by simsons method 
// By Niraj Mahajan, IITB CSE

#include <simplecpp>

double f(double x);

main_program{

	double x;

	// the length of the intervals of trapeziums
	double len;

	do
	{
		cout << "ln of which number is to be determined:  ";
		cin >> x;
	}
	while(x <= 0);

	cout << "What should be the length of every partion:  ";
	cin >> len;

	double area, ans = 0;

	// LI: ans = sum of area from 1 to i 		area is the area from i to (i + len)

	for(double i = 1; i < x; i += len)
	{
		area = (f(i) + f(i + len) + 4*f(i +len/2))*(len/6);		

		ans += area;
	}

	printf("ln(%f) is %f\n", x, ans);



}

double f(double x)
{
	return 1/x;
}
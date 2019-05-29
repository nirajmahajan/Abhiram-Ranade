// prints gcd of two numbers
#include <simplecpp>

int GCD(int a, int b);

main_program{

	int a, b;
	cout << "a:  ";
	cin >> a;
	cout << "b:  ";
	cin >> b;

	cout << "GCD of a, b is " << GCD(a, b) << endl;
}

int GCD(int a, int b)
{
	// ensure that a is maximum
	int c = a+b;
	a = max(a,b);
	b = c - a;

	while(a%b != 0)
	{
		int remainder = a % b;
		a = b;
		b = remainder;
	}

	return b;
}
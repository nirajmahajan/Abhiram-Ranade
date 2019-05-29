#include <cstdio>
#include <cstdio>
#include <cmath>
#include <iostream>

#define PI 3.1415926

using namespace std;

template <class T>
T pf(T);

template <class T>
T f(T x)
{
	return x*x - 2;
}

template <class T>
T g(T x)
{
	return sin(x) - 0.3;
}

template <class T>
T bisection(T xL, T xR, T epsilon, T (*pf)(T x))
{
	// precondition f(xL) and f(xR) have opposite signs
	bool xL_is_positive = (*pf)(xL) > 0;

	// LI : f(xL), f(xR) always have opposite signs
	// Li : xL_is_positive gives sign of f(xL)

	while(xR - xL >= epsilon)
	{
		T xM = (xL + xR)/2.0;

		bool xM_is_positive = (*pf)(xM) > 0;

		if(xL_is_positive == xM_is_positive)
		{
			xL = xM;
		}
		else
		{
			xR = xM;
		}
	}

	return xL;
}

int main(void)
{
	double y = bisection(1.0, 2.0, 0.0001, &f);
	cout << "Sqrt(2):  " << y << endl << "Check square: " << y*y << "\n\n";
	
	double z = bisection(0.0, PI/2.0, 0.0001, &g);
	cout << "Sine_inverse(0.3):  " << z << endl << "Check sin: " << sin(z) << "\n\n";

}
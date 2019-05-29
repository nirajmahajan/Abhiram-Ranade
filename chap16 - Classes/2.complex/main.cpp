#include <iostream>
#include "complex.h"
using namespace std;
#define PI 3.14159

// helper functions
char operator_input(void);
Complex do_operation(Complex &p1, Complex &p2, char temp);

int main(void)
{
	Complex z1, z2, z3;
	cin >> z1;
	cin >> z2;

	char Operator = operator_input();
	z3 = do_operation(z1, z2, Operator);

	cout << z3;
}


// function definations

// inputs the required operation
char operator_input(void)
{
	char temp;
	cout << endl << endl << "Operation:  ";

	do
	{
		cin >> temp;
	}
	while(temp != '+' && temp != '-' && temp != '*' && temp != '/');

	return temp;
}

// carries out the proper operation on p1, p2, p3
Complex do_operation(Complex &p1, Complex &p2, char temp)
{
	if(temp == '+')
	{
		return (p1 + p2);
	}
	else if(temp == '-')
	{
		return (p1 - p2);
	}
	else if (temp == '*')
	{
		return (p1*p2);
	}
	else
	{
		return (p1/p2);
	}
}
#include <iostream>
#include "poly.h"
#define MAX_DEGREE 100
using namespace std;

int main()
{
	// define polynomials of class 'Poly'
	Poly p1, p2, p3;

	// take input for both polynomials
	cout << "Input the first polynomial:\n";
	cin >> p1;	
	cout << endl << endl <<  "Input the second polynomial:\n";
	cin >> p2;

	// take input for the operation to be performed
	char operation = oper_input();
	// perform the operations
	p3 = oper(p1, p2, operation);

	// output
	cout << endl << p3 << endl;
}
#include <iostream>
#include "poly.h"
#include "array.h"

int main(void){
	Poly p1, p2;
	input(p1);
	input(p2);
	cout << "Addition is :\n";
	output(p1+p2);
	cout << endl << endl;

	cout << "Subtraction is :\n";
	output(p1-p2);
	cout << endl << endl;

	cout << "Multiplication is :\n";
	output(p1+p2);
	cout << endl << endl;
}	
#include <iostream>
#include "ltm.h"
using namespace std;

int main(void){
	LTM l1, l2, l3;

	input(l1);
	input(l2);

	l3 = l1 + l2;
	cout << "Addition:\n";
	cout << l3 << endl;
	cout << endl;

	l3 = l1 - l2;
	cout << "Subtraction:\n";
	cout << l3 << endl;
	cout << endl;

	l3 = l1 * l2;
	cout << "Multiplication (like dot product):\n";
	cout << l3 << endl;
	cout << endl;

	l3 = l1 + 10;
	cout << "Addition of l1 by 10:\n";
	cout << l3 << endl;
	cout << endl;

	l3 = l1 - 10;
	cout << "Subtraction of l1 by 10:\n";
	cout << l3 << endl;
	cout << endl;

	l3 = l1 * 10;
	cout << "Multiplication of l1 by 10:\n";
	cout << l3 << endl;
	cout << endl;

	l3 = l1 /10;
	cout << "Division of l1 by 10:\n";
	cout << l3 << endl;
	cout << endl;

	cout << "Comparison between first and the second matrix is:  ";
	if((l1 == l2) == 1){
		cout << "true\n";
	}
	else{
		cout << "false\n";
	}
	cout << "Comparison between first and first matrix is:  ";
	LTM l4(l1);
	if((l1 == l4) == 1){
		cout << "true\n";
	}
	else{
		cout << "false\n";
	}
}
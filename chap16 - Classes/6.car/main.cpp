#include <simplecpp>
#include "car.h"

int main(){
	initCanvas("Car", 1854, 1026);
	Car c1;
	Line l1(0, 603, 1854, 603);

	cout << "Usage:\n'f <x>'  ==> forward by 'x' pixels\n'r <x>' ==> reverse by 'x' pixels\n\n";

	char operation;
	int length;
	do{
		cin >> operation;
		operation = tolower(operation);

		if(operation == 'q')
		{
			break;
		}

		cin >> length;

		if(operation == 'f' && length > 0){
			c1.forward(length);
		}
		else if(operation == 'r' && length > 0){
			c1.reverse(length);
		}
		else{
			cout << "Improper usage!!\n";
		}
	} while(operation != 'q');
}
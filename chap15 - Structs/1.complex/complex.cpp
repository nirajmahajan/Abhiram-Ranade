// defines complex numbers and their operations
// By Niraj Mahajan IITB CSE
#include <iostream>
#include <cctype>

using namespace std;

// a complex number Z = R + iI
struct complex
{
	double R;
	double I;
};

void inpu(complex &Z1);

int main(void)
{
	cout << "Usage: 'Z1 = a+ib\nZ2 = c+id'\nOperation: []\nwhere a,b,c,d are reals and [] can be replaced by +, -, *, /\n\n";

	complex Z1, Z2, Z;
	char operate;

	cout << "Z1:  ";
	inpu(Z1);

	cout << "Z2:  ";
	inpu(Z2);

	cout << "Operation:  ";
	cin >> operate;


	if(operate == '+')
	{
		Z.R = Z1.R + Z2.R;
		Z.I = Z1.I + Z2.I;
	}
	else if(operate == '-')
	{
		Z.R = Z1.R - Z2.R;
		Z.I = Z1.I - Z2.I;
	}
	else if(operate == '*')
	{
		Z.R = (Z1.R * Z2.R) - (Z1.I * Z2.I);
		Z.I = (Z1.R * Z2.I) + (Z1.I * Z2.R);
	}
	else
	{
		cout << "Invalid Operation\n";
		return 1;
	}

	cout << Z.R <<" + " << Z.I<< "i" << endl;
}

void inpu(complex &Z1)
{
	double real = 0, imag = 0;

	char temp;cin >> temp;
	while(isdigit(temp))
	{
		real += (10*real + atoi(&temp));
		cin >> temp;
	}

	cin >> temp;

	while(isdigit(temp))
	{
		imag += (10*imag + atoi(&temp));
		cin >> temp;
	}

	Z1.I = imag;
	Z1.R = real;
}
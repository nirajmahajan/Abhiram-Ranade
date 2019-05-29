#include <iostream>
#include <cmath>
#include "complex.h"
using namespace std;
#define PI 3.14159

// Constructors
Complex::Complex()
{
	real = imag = mag =  0;
}

Complex::Complex(double x)
{
	real = x;
	imag = 0;
	mag = abs(x);
}

Complex::Complex(double r, double i)
{
	real = r;
	imag = i;
	mag = sqrt(r*r + i*i);			
}
		// Member Funtions
void Complex::set_real(const double x)			// sets given real part
{
	real = x;
}
void Complex::set_imag(const double x)			// sets given imaginary part
{
	imag = x;
}
void Complex::set_mag(void)						// sets magnitude based on default imag, real parts
{
	mag = sqrt(pow(real, 2) + pow(imag, 2));
}
double Complex::get_real() const				// returns the set real part
{
	return real;
}
double Complex::get_imag() const				// returns the set imag part
{
	return imag;
}
double Complex::get_mag() const					// returns the set magnitude
{
	return mag;
}
double Complex::get_arg() const					// returns the set argument
{
	double i = imag;
	double r = real;
	double arg;
	if(i == 0 && r > 0)				// purely real (positive)
	{
		arg = 0;
	}
	else if(i == 0 && r < 0)		// purely real (negative)
	{
		arg = PI;
	}
	else if(r == 0 && i > 0)		// purely imag (positive)
	{
		arg = PI/2;
	}
	else if(r == 0 && i < 0)		// purely imag (negative)
	{
		arg = -PI/2;
	}
	else 							// imaginary
	{
		arg = atan(i/r);
	}
	return arg;
}

Complex Complex::operator+ (const Complex &Z)	// overload addition
{
	Complex Z1((Z.get_real() + real), (Z.get_imag() + imag));
	return Z1;
}
Complex Complex::operator- (const Complex &Z)	// overload subtraction
{
	Complex Z1((Z.get_real() - real), (Z.get_imag() - imag));
	return Z1;
}
Complex Complex::operator* (const Complex &Z)	// overload multiplication
{	
	double Z1_real, Z1_imag;
	Z1_real = real * Z.get_real() - imag * Z.get_imag();
	Z1_imag = real * Z.get_imag()   + imag * Z.get_real();
	Complex Z1(Z1_real, Z1_imag);
	return Z1;
}
Complex Complex::operator/ (const Complex &Z)	// overload division
{
	double Z1_real, Z1_imag, arg_Z, arg, arg_Z1, mag_Z, mag_Z1;
	arg = get_arg();
	arg_Z = Z.get_arg();
	mag_Z = Z.get_mag();

	if(mag_Z == 0)
	{
		cout << "Division by zero is not valid\n";
		Complex Z1;
		return Z1;
	}

	mag_Z1 = (mag/mag_Z);
	arg_Z1 = (arg - arg_Z);

	Z1_real = mag_Z1 * cos(arg_Z1);
	Z1_imag = mag_Z1 * sin(arg_Z1);

	Complex Z1(Z1_real, Z1_imag);
	return Z1;
}

istream & operator>> (istream &in, Complex &Z)			// overload input
{
	cout << "Input Complex Number:\nReal: ";
	in >> Z.real;
	cout << "Imaginary:  ";
	in >> Z.imag;
	Z.set_mag();
	cout << endl << endl;
	return in;
}

ostream & operator<< (ostream &out,const Complex &Z)			// overload output
{
	double i = Z.get_imag();
	double r = Z.get_real();
	char temp;

	if(i >= 0)
	{
		temp = '+';
	}
	else
	{
		temp = '\0';
	}
	out << r << temp << " " << i << "i\n";
	return out;
}
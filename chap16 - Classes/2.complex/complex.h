#include <iostream>
using namespace std;

class Complex
{
	private:
		double real, imag, mag;

	public:

		Complex();
		Complex(double x);
		Complex(double r, double i);

		void set_real(const double x);			// sets given real part
		void set_imag(const double x);			// sets given imaginary part
		void set_mag(void);						// sets magnitude based on default imag, real parts

		double get_real() const;				// returns the set real part
		double get_imag() const;				// returns the set imag part
		double get_mag() const;					// returns the set magnitude
		double get_arg() const;					// returns the set argument

		Complex operator+ (const Complex &Z);	// overload addition
		Complex operator- (const Complex &Z);	// overload subtraction
		Complex operator* (const Complex &Z);	// overload multiplication
		Complex operator/ (const Complex &Z);	// overload division

		friend istream & operator>> (istream &in, Complex &Z);			// overload input
		friend ostream & operator<< (ostream &out,const Complex &Z);			// overload input
};

istream & operator>> (istream &in, Complex &Z);			// overload input
ostream & operator<< (ostream &out,const Complex &Z);			// overload input
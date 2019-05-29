#ifndef _POLY_HPP_
#define _POLY_HPP_
#include <iostream>
#include "array.h"

class Poly
{
public:
	//Constructor
	Poly();
	// Copy constructor
	Poly(const Poly &p1);

	// mutator functions
	// increases degree of given polynomial
	void add_degree(double new_coeff);
	// sets the coefficient of x^r as a
	void set_coeff(const int r, const double a);

	// getter functions
	// get the coeff of x^r
	double get_coeff(const int r);

	// assignment operator
	Poly& operator=(const Poly &p1);
	bool operator==(const Poly &p1);
	Poly operator+(const Poly &p1);
	Poly operator-(const Poly &p1);
	Poly operator*(const Poly &p1);
//	Poly operator%(const Poly &p1);

	friend void input(Poly &p1);
	friend void output(const Poly &p1);
private:
	int degree;
	Dynamic_array coeff;
};

void input(Poly &p1);
void output(const Poly &p1);

#endif
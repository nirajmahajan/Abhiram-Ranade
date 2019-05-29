#include <iostream>
#include "array.h"
#include "poly.h"

//Constructor
Poly::Poly(){
	// the array of coeffs points to a null pointer
	degree = 0;
}

// Copy constructor
Poly::Poly(const Poly &p1){
	coeff = p1.coeff;
	degree = p1.degree;
}

// mutator functions
// increases degree of given polynomial
void Poly::add_degree(double new_coeff){
	coeff.add_element(new_coeff);
	degree++;
}
// sets the coefficient of x^r as a
void Poly::set_coeff(const int r, const double a){
	coeff.set_element(r, a);
}

// getter functions
// get the coeff of x^r
double Poly::get_coeff(const int r){
	return coeff.get_element(r);
}

// assignment operator
Poly & Poly::operator=(const Poly &p1){
	coeff = p1.coeff;
	degree = p1.degree;
	return *this;
}
bool Poly::operator==(const Poly &p1){
	if(degree != p1.degree){
		return false;
	}
	else{
		return (coeff == p1.coeff);
	}
}
Poly Poly::operator+(const Poly &p1){
	int tmp_degree = max(degree, p1.degree);
	Poly p2;
	p2.coeff = Dynamic_array(tmp_degree);
	p2.coeff = coeff + p1.coeff;

	for(int i = tmp_degree; i >=0; i--){
		if(i == 0 && p2.coeff.get_element(i) == 0){
			p2.degree = 0;
		}
		else if(i != 0){
			p2.degree = i;
		}
	}
	return p2;
}
Poly Poly::operator-(const Poly &p1){
	int tmp_degree = max(degree, p1.degree);
	Poly p2;
	p2.coeff = Dynamic_array(tmp_degree);
	p2.coeff = coeff - p1.coeff;

	for(int i = tmp_degree; i >=0; i--){
		if(i == 0 && p2.coeff.get_element(i) == 0){
			p2.degree = 0;
		}
		else if(i != 0){
			p2.degree = i;
		}
	}
	return p2;
}
Poly Poly::operator*(const Poly &p1){
	int tmp_degree = (p1.degree + degree);
	Poly p2;
	p2.coeff = Dynamic_array(tmp_degree);

	int temp = 0;
	for(int i = 0; i <= degree; i++){
		for(int j = 0; j <= p1.degree; j++){
			temp = p2.coeff.get_element(i+j);
			temp += coeff.get_element(i) * p1.coeff.get_element(j);
			p2.coeff.set_element(i+j, temp);
		}
	}

	// update degree
	for(int i = tmp_degree; i >=0; i--){
		if(i == 0 && p2.coeff.get_element(i) == 0){
			p2.degree = 0;
		}
		else if(i != 0){
			p2.degree = i;
		}
	}
	return p2;
}
//Poly Poly::operator%(const Poly &p1){
//	int tmp_degree = p1.degree - 1;
//	Poly p2;
//	p2.coeff = Dynamic_array(tmp_degree);
//}

void input(Poly &p1){
	
	double tmp_dbl;
	cout << "Please input the coefficients:\n\n";
	cout << "x^0:  ";
	int i = 0;
	while(cin >> tmp_dbl){
		p1.coeff.add_element(tmp_dbl);
		i++;
		cout << "x^" << i << ":  ";
	}
	cout << "\n\n";

	if(i == 0){
		p1.degree = 0;
	}
	else{
		p1.degree = i-1;
	}
}

void output(const Poly &p1){
	for(int i = 0; i <= p1.degree; i++){
		if(i != 0 && p1.coeff.get_element(i) >= 0){
			cout << " + ";
		}
		else{
			cout << " - ";
		}
		double temp1 = p1.coeff.get_element(i);
		cout << abs(temp1) << "x^i";
	}
}
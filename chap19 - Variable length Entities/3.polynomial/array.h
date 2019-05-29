// header file of a Dynamic_array
// By Niraj Mahajan, IITB, CSE
#ifndef _ARRAY_HPP_
#define _ARRAY_HPP_
#include <iostream>
using namespace std;

class Dynamic_array
{
private:
	double *ptr;
	int length;
public:
	// Constructor
	Dynamic_array();
	// initializes a dynamic array of size 'length' and assigns all values as zero
	Dynamic_array(int length);
	// copy constructor
	Dynamic_array(const Dynamic_array &a1);

	// getter functions
	double* get_ptr()const;
	double get_len()const;
	double get_element(int index)const;
	
	// mutator functions
	void set_len(const int x);
	void set_element(const int index, const double x);
	Dynamic_array add_element(const double x);	
	Dynamic_array & operator=(const Dynamic_array &a1);

	Dynamic_array operator+(const Dynamic_array &a1);
	Dynamic_array operator-(const Dynamic_array &a1);
	Dynamic_array operator+(const double scalar);
	Dynamic_array operator-(const double scalar);
	Dynamic_array operator*(const double scalar);
	Dynamic_array operator/(const double scalar);

	bool operator==(const Dynamic_array &a1);
};

#endif
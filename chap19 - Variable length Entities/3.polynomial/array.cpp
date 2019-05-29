// defination file of a dynamic array
// By Niraj Mahajan, IITB, CSE
#include <iostream>
#include "array.h"
using namespace std;

// COnstructor
Dynamic_array::Dynamic_array() 	{ptr = NULL;length = 0;}
Dynamic_array::Dynamic_array(int len){
	ptr = new double[len];
	for(int i = 0; i < len; i++){
		ptr[i] = 0;
	}
	length = len;
}
// Copy constructor
Dynamic_array::Dynamic_array(const Dynamic_array &a1){
	ptr = a1.ptr;
	length = a1.length;
}

// Member functions
double* Dynamic_array::get_ptr() const{
	return ptr;
}
double Dynamic_array::get_len()const{
	return length;
}
double Dynamic_array::get_element(int index)const{
	if (index <0 || index >= length){
		cout << "Invalid index\n";
		return -1;
	}
	else{
		return ptr[index];
	}
}

void Dynamic_array::set_len(const int x){
	length = x;
}

void Dynamic_array::set_element(const int index, const double x){
	if(index >= length){
		cout << "Invalid index\n";
	}
	else{
		ptr[index] = x;
	}
}

Dynamic_array Dynamic_array::add_element(const double x){
	Dynamic_array ans;
	ans.ptr = new double[length + 1];

	// copy our array to new array
	for(int i = 0; i < length; i++)
	{
		ans.ptr[i] = ptr[i];
	}

	ans.ptr[length] = x;
	length++;
	ans.length = length;
	return ans;
}

Dynamic_array & Dynamic_array::operator=(const Dynamic_array &a1){
	delete [] ptr;
	ptr = new double[a1.length];

	// copy arr into lhs
	for(int i = 0; i < a1.length; i++){
		ptr[i] = a1.ptr[i];
	}
	length = a1.length;
	return *this;
}

Dynamic_array Dynamic_array::operator+(const Dynamic_array &a1){
	Dynamic_array ans(max(length, a1.length));
	for(int i = 0; i < ans.length; i++){
		if(i >= length){
			ans.ptr[i] = a1.ptr[i];
		}
		else if(i >= a1.length){
			ans.ptr[i] = ptr[i];
		}
		else{
			ans.ptr[i] = a1.ptr[i] + ptr[i];
		}
	}

	return ans;
}

Dynamic_array Dynamic_array::operator-(const Dynamic_array &a1){
	Dynamic_array ans(max(length, a1.length));
	for(int i = 0; i < ans.length; i++){
		if(i >= length){
			ans.ptr[i] = -a1.ptr[i];
		}
		else if(i >= a1.length){
			ans.ptr[i] = ptr[i];
		}
		else{
			ans.ptr[i] = -a1.ptr[i] + ptr[i];
		}
	}
	return ans;
}

Dynamic_array Dynamic_array::operator+(const double scalar){
	Dynamic_array ans(length);
	for(int i = 0; i < length; i++){
		ans.ptr[i] = scalar + ptr[i];
	}
	return ans;
}

Dynamic_array Dynamic_array::operator-(const double scalar){
	Dynamic_array ans(*this);
	return (ans + (-scalar));
}

Dynamic_array Dynamic_array::operator*(const double scalar){
	Dynamic_array ans(length);
	for(int i = 0; i < length; i++){
		ans.ptr[i] = scalar* ptr[i];
	}
	return ans;
}

Dynamic_array Dynamic_array::operator/(const double scalar){
	if(scalar == 0){
		cout << "Division by zero is not possible\n";
		return *this;
	}
	Dynamic_array ans(*this);
	return (ans * (1/scalar));
}

bool Dynamic_array::operator==(const Dynamic_array &a1){
	if(length != a1.length){
		return false;
	}	
	else{
		for(int i = 0; i < length; i++){
			if(ptr[i] != a1.ptr[i]){
				return false;
			}
		}
	}
	return true;
}
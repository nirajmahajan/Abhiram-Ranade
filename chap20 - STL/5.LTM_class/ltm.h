#ifndef _LTM_H_
#define _LTM_H_
#include <vector>
#include <iostream>
using namespace std;

typedef vector<vector<double> > matrix;

class LTM{
public:
	LTM(){};
	LTM(int length);
	LTM(const LTM &m2);

	double get_element(int i, int j) const;
	void set_element(int i, int j, double x);

	LTM & operator=(const LTM &m2);
	LTM operator+(const LTM &m2);
	LTM operator-(const LTM &m2);
	LTM operator*(const LTM &m2);
	LTM operator+(const double x);
	LTM operator-(const double x);
	LTM operator*(const double x);
	LTM operator/(const double x);
	bool operator==(const LTM &m2);


	friend ostream &operator<<(ostream &out, const LTM &m2);
	friend void input(LTM &m2);
private:
	matrix data;
	int length;
};

ostream &operator<<(ostream &out, const LTM &m2);
void input(LTM &m2);

#endif
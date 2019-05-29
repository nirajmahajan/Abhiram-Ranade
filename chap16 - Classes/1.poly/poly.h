#include <iostream>
#define MAX_DEGREE 100
using namespace std;

// inputs the required operation
char oper_input(void)
{
	char temp;
	cout << endl << endl << "Operation:  ";

	do
	{
		cin >> temp;
	}
	while(temp != '+' && temp != '-' && temp != '*');

	return temp;
}

class Poly
{
	private:
	int degree;
	double coeff[MAX_DEGREE + 1];

	public:

	// constructor to initialize
	Poly()
	{
		degree = 0;

		for(int i = 0; i < MAX_DEGREE + 1; i++)
		{
			coeff[i] = 0;
		}
	}

	double get_coeff(int i) const
	{
		return coeff[i];
	}

	void set_coeff(const int i, const double new1)
	{
		coeff[i] = new1;
	}

	void add_coeff(const int i, const double new1)
	{
		coeff[i] += new1;
	}

	int get_degree() const
	{
		return degree;
	}

	void set_degree(const int deg)
	{
		degree = deg;
	}


	Poly operator+ (const Poly &p2) const
	{
		// define p1 and set its degree
		Poly p1;
		int p1_deg = max(degree, p2.get_degree());
		p1.set_degree(p1_deg);

		for(int i = 0; i <= p1_deg; i ++)
		{
			p1.set_coeff(i, (p2.get_coeff(i) + coeff[i]));
		}

		return p1;
	}

	Poly operator- (const Poly &p2) const
	{
		// define p1 and set its degree
		Poly p1;		
		int p1_deg = max(degree, p2.get_degree());
		p1.set_degree(p1_deg);

		for(int i = 0; i <= p1_deg; i++)
		{
			p1.set_coeff(i, (coeff[i] - p2.get_coeff(i)));
		}

		return p1;
	}

	// please note!! no coefficient above 100 will be displayed
	Poly operator* (const Poly &p2)
	{
		if((degree + p2.get_degree()) > MAX_DEGREE)
		{
			cout << "WARNING: polynomial product contains degree greater than " << MAX_DEGREE << "\n";
		}

		Poly p1;
		int p1_deg = min(MAX_DEGREE, degree+ p2.get_degree());
		p1.set_degree(p1_deg);

		double to_add;
		bool degree_violation = false;			// bool for error checking

		for(int i = 0; i < p2.get_degree() + 1;i ++)
		{
			for(int j = 0; j < degree + 1; j++)
			{
				if((i+j) > MAX_DEGREE)
				{
					degree_violation = true;
				}
				else
				{
					to_add = p2.get_coeff(i) * coeff[j];
					p1.add_coeff(i+j, to_add);
				}	
			}
		}

		return p1;
	}

	friend istream & operator>>(istream &in, Poly &p);	
	friend ostream & operator<<(ostream &out, Poly &p);	
};

istream & operator>>(istream &in, Poly &p)
{
	int deg;
	cout << "Degree:  ";
	cin >> deg;
	p.set_degree(deg);

	cout << "Now input the coefficients:\n";
	
	for(int i = 0; i <= deg; i++)
	{
		cout << "x^" << i <<":  ";
		cin >> p.coeff[i];
	}

	return in;
}

ostream & operator<<(ostream &out, Poly &p)
{
	int deg = p.get_degree();
	double coe;

	cout << "The polynomial coeffs are:\n";

	for(int i = 0; i <= deg; i++)
	{
		coe = p.get_coeff(i);
		cout << "x^" << i << ":  " << coe << endl;
	}

	return out;
}

// carries out the proper operation on p1, p2, p3
Poly oper(Poly &p1, Poly &p2, char temp)
{
	if(temp == '+')
	{
		return (p1 + p2);
	}
	else if(temp == '-')
	{
		return (p1 - p2);
	}
	else
	{
		return (p1*p2);
	}
}
#include <simplecpp>

class Car
{
private:
	Rectangle r1, r2;
	Circle c1, c2;
	Line spoke1[4], spoke2[4];

public:

	// Constructor
	Car();

	// member functions
	void forward(double x);
	void reverse(double x);
};
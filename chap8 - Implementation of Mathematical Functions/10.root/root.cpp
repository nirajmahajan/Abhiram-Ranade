// solves the given cubic
// By Niraj Mahajan, IITB CSE
#include <simplecpp>

float f(float x);
float der_f(float x);

main_program{

	float root = 1;

	do
	{
		root = root - (f(root)/der_f(root));
	}
	while(abs(f(root)) > pow(10, -8));

	cout << "Root is  " << root << endl << "f(root) is  " << f(root) << endl;
}

float f(float x)
{
	return (pow(x,3) - x/2 + 0.25);
}

// derivative of f(x)
float der_f(float x)
{	
	return (3*x*x - 0.5);
}
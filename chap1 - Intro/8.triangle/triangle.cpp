// accepts sides of a triangle and prints it
// By Niraj Mahajan, IIT B CSE

#include <simplecpp>

main_program
{
	// sides of a triangle be a, b, c
	// a < b < c
	double a, b, c;

	cout << "Smallest side:  ";
	cin >> a;

	cout << "Largest side:  ";
	cin >> c;

	cout << "Middle side: ";
	cin >> b;

	if (a + b <= c)
	{
		cout << "ERROR!! Traingle inequality violated\n";
		return 1;
	}

	// define angles
	double A, B, C;

	A = arccosine((b*b + c*c - a*a)/ (2*b*c));

	B = arccosine((a*a + c*c - b*b)/ (2*a*c));

	C = arccosine((a*a + b*b - c*c)/ (2*a*b));



	// start the program
	turtleSim();

	left(180);

	forward(b);
	right(180 - A);

	forward(c);
	right(180 - B);

	forward(a);
	right(180 - C);


	wait(10);	

	cout << a << b << c << A << B << C;
}
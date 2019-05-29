// Draws a polygon and returns its perimeter
#include <simplecpp>

void polygon(int n, double a);

main_program
{
	int n;
	double a;

	cout << "Number of sides:  ";
	cin >> n;
	cout << "Side length:  ";
	cin >> a;

	polygon(n, a);

	cout << "perimeter:  " << n*a << endl;
}

void polygon(int n, double a)
{
	initCanvas("Polygon", 1854, 1026);

	Turtle t1;
	t1.penUp();

	t1.moveTo(500, 1000);
	t1.penDown();

	repeat(n)
	{
		t1.forward(a);
		t1.left(360/n);
	}
	wait(10);
}
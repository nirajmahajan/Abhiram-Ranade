// draws concentric squares
// By Niraj Mahajan IITB CSE

#include <simplecpp>

void square(int side);


main_program
{
	double side;
	int num_squares;
	double increment;

	cout << "What side length:  ";
	cin >> side;

	cout << "How many squares:  ";
	cin >> num_squares;

	cout << "How much increment:  ";
	cin >> increment;

	turtleSim();

	repeat(num_squares)
	{
		square(side);
		side += increment;
	}

	wait(10);
}

void square(int side)
{
	penUp();
	forward(side/2);
	left(90);
	forward(side/2);
	left(90);

	penDown();

	repeat(4)
	{
		forward(side);
		left(90);
	}

	penUp();
	forward(side/2);
	left(90);
	forward(side/2);
}
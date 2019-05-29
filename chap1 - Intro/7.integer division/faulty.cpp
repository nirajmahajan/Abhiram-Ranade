// By Niraj Mahajan, IIT B CSE

#include <simplecpp>

main_program{

	int num_sides;
	int side_length;

	// get user input
	cout << "How many sides of polygon?\n";
	cin >> num_sides;

	cout << "what side length??\n";
	cin >> side_length;

	turtleSim();

	int angle = 360 / num_sides;

	repeat (num_sides)
	{
		forward(side_length);
		left(angle);
	}

	wait(10);

}
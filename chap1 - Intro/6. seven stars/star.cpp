// draws a star
// By Niraj Mahajan, IIT B CSE

#include <simplecpp>

main_program
{
	turtleSim();
	left(180);

	// calculate the required angles
	double ext_angle = 360/7;
	double angle = 2 * ext_angle;

	repeat(7)
	{
		forward(200);
		left(angle);
	}

	wait(10);
}
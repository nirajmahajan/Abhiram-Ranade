// By Niraj Mahajan, IIT B CSE

#include <simplecpp>

main_program
{
	turtleSim();

	// change initial direction
	left(90);

	//draw square
	repeat(4)
	{
		forward(160);
		left(90);
	}

	
	// draw vertical lines
	repeat(4)
	{
		forward(160);
		left(90);
		forward(20);

		left(90);
		forward(160);
		right(90);
		forward(20);
		right(90);
	}

	right(90);

	// draw horizontal lines
	repeat(4)
	{
		forward(160);
		left(90);
		forward(20);

		left(90);
		forward(160);
		right(90);
		forward(20);
		right(90);
	}

	wait(10);
}
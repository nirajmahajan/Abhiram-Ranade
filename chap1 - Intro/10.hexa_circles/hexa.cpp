// HEXA Circle!!!!
// By Niraj Mahajan, IIT B CSE

#include <simplecpp>

main_program
{
	turtleSim();

	left(90);

	// draw central circle
	repeat(360)
	{
		forward(1);
		left(1);
	}

	repeat(6)
	{
		// draw right circle
		repeat(360)
		{
			forward(1);
			right(1);
		}

		// move along central circle
		repeat(60)
		{
			forward(1);
			left(1);
		}		
	}


	wait(10);
}
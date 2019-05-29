// draws an figure of eight
// By Niraj Mahajan, IIT B CSE
#include <simplecpp>

main_program
{
	turtleSim();

	repeat(1000)
	{
		forward(1);
		left(0.36);
	}

	repeat(1000)
	{
		forward(1);
		right(0.36);
	}
	wait(10);
}
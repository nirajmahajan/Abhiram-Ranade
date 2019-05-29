// draws a spiral
// By Niraj Mahajan IITB CSE

#include <simplecpp>

main_program
{
	turtleSim();

	double dist = 0;

	repeat(10000)
	{
		right(3.6);
		forward(dist);
		dist += 0.01;
	}
	wait(10);
}
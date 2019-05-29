// draws 10 squares to left of each other
// By Niraj Mahajan, IIT B CSE

#include <simplecpp>

main_program
{
	turtleSim() = first;

	// draw th outline
	repeat(2)
	{
		first.left(90);
		first./forward(20);
		first.left(90);
		first.forward(200);
	}

	first.right(180);

	// draw lines in between
	repeat(5)
	{
		first.forward(20);
		first.right(90);
		first.forward(20);
		first.left(90);
		first.forward(20);
		first.left(90);
		first.forward(20);
		first.right(90);
	}

	wait(30);
}
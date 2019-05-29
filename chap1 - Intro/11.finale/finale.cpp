// By Niraj Mahajan, IIT B CSE

#include <simplecpp>

void l_cir(void);

void r_cir(void);

main_program
{
	turtleSim();
	penUp();
	
    // BRING THE TURTLE TO BOTTOM LEFT CORNER
	forward(200);
	right(90);
	forward(50);
	left(90);
	

	right(60);

	penDown();

	repeat(36)
	{
		l_cir();
		forward(40);
		r_cir();
		forward(40);
	}

	wait(10);
}

// draws a circle turning right
void r_cir(void)
{
	repeat(750)
	{
		forward(0.05);
		right(0.36);
	}
	right(5);
}


// draws a circle turning left
void l_cir(void)
{
	repeat(750)
	{
		forward(0.05);
		left(0.36);
	}
	right(5);
}
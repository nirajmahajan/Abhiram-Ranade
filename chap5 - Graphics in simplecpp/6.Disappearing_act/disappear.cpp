// code first draws a square
// then a circle at its centre
// circle enlarges, untill it touches square
// then both shrink and disappear!!
// By Niraj Mahajan, IIT B CSE

#include <simplecpp>

main_program
{
	initCanvas("Disappearing Act!!", 1854, 1026);

	// make a rectangle, and set colour for better visual
	Rectangle r1(927, 513, 400, 400);
	r1.setFill(true);
	r1.setColor(COLOR("blue"));

	// variable to vary the radius in loop
	double rad = 0;

	// define a circle which is to be reset in every iteration
	Circle c1;

	for(int temp = 0; temp < 800; temp++)
	{
		// modify the radius of the circle and reset it
		c1.reset(927, 513, rad);
		c1.setFill(true);
		c1.setColor(COLOR("green"));

		// wait for some time so that the change is smooth
		wait(0.001);
		rad += 0.25;
	}
	

	// now hide!!!!!!!
	// 1000 is a random arbitrary number
	repeat(1000)
	{
		r1.scale(0.993);
		c1.scale(0.993);
		wait(0.01);
	}

	wait(10);
}
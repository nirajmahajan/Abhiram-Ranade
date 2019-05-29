// plots sinx
// By Niraj Mahajan IITB CSE

#include <simplecpp>

void coord(void);

main_program{

	initCanvas("Sinx", 1854, 1026);

	// plot the axis!!
	Line x_axis(0, 513, 1854, 513), y_axis(927, 0, 927, 1026);

	// plot the coordinates on axis!!
	coord();



	// summon the turtles!!
	Turtle t1, t2;

	// So here is the plan!
	// we have two doubles x1 and x2, that will be x coordinates of t1 and t2
	// similarly , y1 and y2 are y coordinates
	// we are gonna increment one and decrease other by 0.25
	// and then we are gonna move em to the proper sine coordinates!!

	double x1, x2, y1, y2;
	x1 = x2 = 0;
	y1 = y2 = 0;

	repeat(927 * 2)
	{	

		// we put -ve sign becoz y axis is inverted
		y1 = -sin(x1 / 50);
		y2 = -sin(x2 / 50);
		t1.moveTo((927 + x1), (513 + 50 * y1));
		t2.moveTo((927 + x2), (513 + 50 * y2));

		x1 += 0.5;
		x2 -= 0.5;
	}

	t1.hide();
	t2.hide();
	wait(10);
}


// plots the coordinate axis
void coord(void)
{
	// number of repetions in x and y for coordinates wrt PI/2 on one side of the origin
	// we have scaled up by 50 for better visual
	// now there is 25 instead of 50, only due to the '2' of PI/2
	int x = (927 / (25 * PI));
	int y = (513 / 50);

	// here line lx1, lx2 will move on x axis and ly1, ly2 will move on y axis
	// ly1 will proceed on +ve y axis and ly2 will proceed on -ve y axis
	// similar for lx lines
	// all will go imprinting as they proceed
	Line lx1(927, 523, 927, 503), lx2(927, 523, 927, 503);
	Line ly1(927, 523, 927, 503), ly2(927, 523, 927, 503);

	// turn the face of ly2 to south, since default is east
	ly2.right(90);
	// turn the face of ly1 to north, since default is east
	ly1.left(90);
	// turn lx2 around to point to west
	lx2.left(180);

	repeat(y + 1)
	{
		ly1.imprint();
		ly2.imprint();

		ly1.forward(50);
		ly2.forward(50);
	}

	repeat(x + 1)
	{
		lx1.imprint();
		lx2.imprint();
		
		lx1.forward(PI * 25);
		lx2.forward(PI * 25);
		
	}

	


	return;
}
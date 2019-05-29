// draws a blue and red chess board
// By Niraj Mahajan IITB CSE

#include <simplecpp>


main_program
{
	initCanvas("Chess!!", 3000, 1000);

	// print rectangle
	Rectangle r_red(125, 375, 30, 30);
	Rectangle r_blue(125, 165, 30, 30);

	r_red.setFill(true);
	r_red.setColor(COLOR("red"));

	r_blue.setFill(true);
	r_blue.setColor(COLOR("blue"));

	r_red.left(90);

	// Draw red sqaures
	repeat(4)
	{
		repeat(4)
		{
			r_red.imprint();
			r_red.forward(60);
		}

		r_red.right(90);
		r_red.forward(30);
		r_red.right(90);
		r_red.forward(30);
		

		repeat(4)
		{
			r_red.imprint();
			r_red.forward(60);
		}

		r_red.left(90);
		r_red.forward(30);
		r_red.left(90);
		r_red.forward(30);
	}



	//Draw blue squares
	repeat(4)
	{
		repeat(4)
		{
			r_blue.imprint();
			r_blue.forward(60);
		}

		r_blue.right(90);
		r_blue.forward(30);
		r_blue.right(90);
		r_blue.forward(30);
		

		repeat(4)
		{
			r_blue.imprint();
			r_blue.forward(60);
		}

		r_blue.left(90);
		r_blue.forward(30);
		r_blue.left(90);
		r_blue.forward(30);
	}



	r_red.hide();
	r_blue.hide();

	wait(10);
}

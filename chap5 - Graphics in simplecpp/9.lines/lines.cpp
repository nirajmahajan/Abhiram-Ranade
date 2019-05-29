// Takes 3 points, say p; q; r 
// draws the line joining p; q
// then rotates it about r
// By Niraj Mahajan IITB CSE

#include <simplecpp>

double dist(double x1, double y1, double x2, double y2);

main_program
{
	initCanvas("Rotating lines", 1854, 1026);

	// get first click
	int click1 = getClick();

	// calculate coordinates of p
	double px = click1 / 65536;
	double py = click1 % 65536;
	



	// get second click
	int click2 = getClick();

	// calculate coordinates of q
	double qx = click2 / 65536;
	double qy = click2 % 65536;
	
	// Draw line pq
	Line l1(px, py, qx, qy);

	// get third click
	int click3 = getClick();

	// calculate coordinates of r
	double rx = click3 / 65536;
	double ry = click3 % 65536;

	
	// set pointers at r
	Circle c3(rx, ry, 5);
	c3.setFill(true);
	c3.setColor(COLOR("red"));
	c3.imprint();
	c3.hide();


	// define a point m, which is the centre of p, q
	double mx = (px + qx)/2;
	double my = (py + qy)/2;

	// find the distance between r and m
	// this should remain constant throughout
	double rad_m = dist(mx, my, rx, ry);

	// draw circle just for reference
	Circle c5(rx, ry, rad_m);



	// here is the plan
	// consider an circle centred at m of 0 radius
	// this is just our pointer
	// we will move this pointer along a circle of radius rm, centred at m
	// and the line will move accordingly

	Circle c_m(mx, my, 0);

	// change the initial direction of the face of pointer circle to be tangential to circle or radius rm, centred at m
	double angle_old = c_m.getOrientation();
	c_m.right((PI/2) - angle_old);

	repeat(720)
	{	
		c_m.forward(rad_m*((PI)/360.0));
		c_m.right(0.5);

		mx = c_m.getX();
		my = c_m.getY();

		l1.moveTo(mx, my);
		l1.rotate((PI * 0.5)/180);

		wait(0.001);
	} 

	wait(10);
}


// calculates distance between two points
double dist(double x1, double y1, double x2, double y2)
{
	return sqrt((pow((x1-x2), 2)) + pow((y1-y2), 2));
}
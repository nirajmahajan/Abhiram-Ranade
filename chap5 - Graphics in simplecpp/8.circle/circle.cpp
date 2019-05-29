// takes three points by three clicks
// draws a circle passing through these points
// By Niraj Mahajan, IITB CSE

#include <simplecpp>

double dist(double x1, double y1, double x2, double y2);

main_program
{	

	initCanvas("Circle", 1854, 1026);

	// set a circle to mark the points
	Circle c3;

	// get first click
	int click1 = getClick();

	// calculate coordinates of first click
	double x1 = click1 / 65536;
	double y1 = click1 % 65536;
	// set pointers at every click
	c3.reset(x1, y1, 5);
	c3.setFill(true);
	c3.setColor(COLOR("red"));
	c3.imprint();
	c3.hide();



	// get second click
	int click2 = getClick();

	// calculate coordinates of second click
	double x2 = click2 / 65536;
	double y2 = click2 % 65536;
	// set pointers at every click
	c3.reset(x2, y2, 5);
	c3.setFill(true);
	c3.setColor(COLOR("red"));
	c3.imprint();
	c3.hide();	

	// get third click
	int click3 = getClick();

	// calculate coordinates of third click
	double x3 = click3 / 65536;
	double y3 = click3 % 65536;
	// set pointers at every click
	c3.reset(x3, y3, 5);
	c3.setFill(true);
	c3.setColor(COLOR("red"));
	c3.imprint();
	c3.hide();



	// find the side lengths
	// all notations are standard
	double a = dist(x2, y2, x3, y3);
	double b = dist(x1, y1, x3, y3);
	double c = dist(x2, y2, x1, y1);

	// find angles in radians using cosine rule
	double A = acos((b*b + c*c - a*a)/(2*b*c));
	double B = acos((a*a + c*c - b*b)/(2*a*c));
	double C = acos((b*b + a*a - c*c)/(2*b*a));

	// find centre using circumcentre formula

	double cx = ((x1*sin(2*A)) + (x2*sin(2*B)) + (x3*sin(2*C))) / (sin(2*A) + sin(2*B) + sin(2*C));
	double cy = ((y1*sin(2*A)) + (y2*sin(2*B)) + (y3*sin(2*C))) / (sin(2*A) + sin(2*B) + sin(2*C));

	// find radius
	double rad = dist(cx, cy, x1, y1);

	// Draw the circle
	Circle c1(cx, cy, rad);

	wait(10);
}

double dist(double x1, double y1, double x2, double y2)
{
	return sqrt((pow((x1-x2), 2)) + pow((y1-y2), 2));
}
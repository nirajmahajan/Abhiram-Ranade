// draws trajectory of a projectile
// takes two clicks
// starts projectile from first click
// uses second click to find highest point
// assume the thrown projectile to be a circle
// By Niraj Mahajan IITB CSE

#include <simplecpp>

main_program
{
	initCanvas("Projectile", 1854, 1026);

	// get first click
	int click1 = getClick();

	// calculate coordinates of first click
	double x_click1 = click1 / 65536;
	double y_click1 = click1 % 65536;

	// draw the prjectile
	Circle projectile(x_click1, y_click1, 5);

	projectile.penDown();

	// draw the ground
	Line l1(0, y_click1, 1854, y_click1);


	// take second click
	int click2 = getClick();

	// calculate coordinates of second click
	double x_click2 = click2 / 65536;
	double y_click2 = click2 % 65536;



	// to find theta
	// we divide expressions of maximum height and range to find it
	double theta = atan((2*(y_click1 - y_click2))/ (x_click2 - x_click1));

	// initial speed 
	double u = sqrt((0.2 * (y_click1 - y_click2)) / pow(sin(theta), 2));

	double ux, uy;

	ux = u * cos(theta);
	uy = -(u * sin(theta));

	double gravity = 0.1;
	do
	{
		projectile.move(ux,uy);

		uy += gravity;
	}
	while(projectile.getY() < y_click1);

	wait(10);

}

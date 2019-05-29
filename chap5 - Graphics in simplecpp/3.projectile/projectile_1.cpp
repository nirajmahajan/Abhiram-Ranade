// draws trajectory of a projectile
// takes two clicks
// starts projectile from first click
// uses second click to find velocity direction and magnitude
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

	// here's what we are gonna do
	// we have vx and vy as velocity components
	// we will find distance between x coordinates for the two clicks and vx will be half that dist.
	// similar for vy
	// hence the direction will also be same

	double vx, vy;

	vx = (x_click2 - x_click1) / 2;

	// by is -ve becoz y axis is inverted
	vy = (y_click2 - y_click1) / 2;

	// define gravity
	// let gravity be 0.1

	double gravity = 0.1;
	do
	{
		projectile.move(vx / 100, vy / 100);

		vy += gravity;
	}
	while(projectile.getY() < y_click1);

	wait(10);

}

// draws trajectory of a projectile
// takes two clicks
// starts projectile from first click
// takes an iput of number of angles the user is going to provide
// records those angles 
// draws projectiles according to those angles
// By Niraj Mahajan, IIT B CSE
#include <simplecpp>

main_program
{
	int num_angles;
	cout << "How many angles are you gonna provide:  ";
	cin >> num_angles;

	// ask user for initial velocity
	double u;
	cout << "What should be the initial velocity:  ";
	cin >> u;

	// define an array for angles
	double angles[num_angles];

	for (int temp = 0; temp < num_angles; temp++)
	{
		cout << "Angle " << temp + 1 <<":  ";
		cin >> angles[temp];
	}


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

	for (int temp2 = 0; temp2 < num_angles; temp2++)
	{
		double ux, uy;

		ux = u * cosine(angles[temp2]);
		uy = -(u * sine(angles[temp2]));

		double gravity = 0.1;
		do
		{
			projectile.move(ux,uy);

			uy += gravity;
		}
		while(projectile.getY() < y_click1);

		// reset position of projectile
		projectile.penUp();
		projectile.moveTo(x_click1, y_click1);
		projectile.penDown();
	}

	wait(10);

}

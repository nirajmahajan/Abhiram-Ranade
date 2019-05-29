// takes input of several points as approximately passing through projectile
// plots a projectile nearly passing through these points
// By Niraj Mahajan, IITB CSE

#include <simplecpp>

main_program
{
	// take user input
	int num_coord;
	cout << "How many coordinates do you wish to provide:  ";
	cin >> num_coord;

	initCanvas("Projectile", 1854, 1026);

	// plot the coordinate axis
	Line l1(0, 1000, 1854, 1000);
	Line l2(26, 0, 26, 1026);

	// let the origin be translated to (26, 1000)
	// the projectile is a parabola
	// let the equation be y = -ax^2 + bx
	// by minimising (y + ax^2 - bx), we can find a and b
	// let,
	// summ (x*x*y) = p
	// summ (x*x*x) = r
	// summ (x*x*x*x) = q
	// summ (x*y) = s
	// summ (x*x) = t
	// by solving we get,
	// b = (pr - sq)/(r^2 - qt)
	// a = (pt - sr)/(r^2 - qt)

	double p = 0, q = 0, r = 0, s = 0, t = 0, a, b;

	int click;
	double x, y;

	Circle c;

	repeat(num_coord)
	{
		// get click
		click = getClick();

		// calculate coordinates of click
		x = click / 65536;
		y = click % 65536;


		// set pointers at every click
		c.reset(x, y, 5);
		c.setFill(true);
		c.setColor(COLOR("red"));
		c.imprint();
		c.hide();

		// now shift the points wrt origin
		x = x - 26;
		y = 1000 - y;


		// increment all the variables properly
		p += (x*x*y);
		q += pow(x,4);
		r += pow(x,3);
		s += (x*y);
		t += (x*x);
	}

	// calculate a and b
	a = (((p*t) - (s*r))/((r*r) - (q*t)));
	b = (((p*r) - (s*q))/((r*r) - (q*t)));

	Circle projectile(26, 1000, 5);
	projectile.penDown();

	// define variables as coordinates to move by
	double x1 = 0, y1 = 0;

	do
	{
		// move the x coordinate by 0.25, and adjust the y coordinate accordingly
		x1 += 0.5;
		y1 = -((b*x1) - (a*x1*x1));

		// move the projectile to corresponding coordinate
		projectile.moveTo((26+x1), (1000 + y1));
	} 
	while(projectile.getY() < 1000);

	wait(10);

}
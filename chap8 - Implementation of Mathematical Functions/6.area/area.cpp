// computes the area of a n sided polygon
// inputs all the coordinates
// By Niraj Mahajan IITB CSE

#include <simplecpp>

double area(double x1,double y1,double x2,double y2, double x3, double y3);
double dist(double x1,double y1,double x2,double y2);

main_program{

	int n;
	cout << "Number of sides of polygon:  ";
	cin >> n;
	cout << "Please enter the coordinates of vertices, without any comma or brackets, in clockwise sense\n";

	// arrays of x and y coordinates
	double xcoord[n];
	double ycoord[n];

	double x_sum = 0, y_sum = 0;

	// take input
	for(int i = 0; i < n; i++)					// (i+1)th coordinates are added in arrays
	{
		cin >> xcoord[i] >> ycoord[i];
		x_sum += xcoord[i];
		y_sum += ycoord[i];
	}

	double x_centroid = x_sum/n;
	double y_centroid = y_sum/n;

	double ans = 0;

	for(int i = 0; i < n; i++)
	{	
		ans += area(xcoord[i], ycoord[i], xcoord[(i+1)%n], ycoord[(i+1)%n], x_centroid, y_centroid);
	}

	printf("The area of the polygon is %lf\n", ans);
}

double dist(double x1,double y1,double x2,double y2)
{
	return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}

// calculates area by herons formula
double area(double x1,double y1,double x2,double y2, double x3, double y3)
{
	double a = dist(x1, y1, x2, y2);
	double b = dist(x2, y2, x3, y3);
	double c = dist(x3, y3, x1, y1);

	double s = (a + b + c)/2;

	return sqrt(s*(s-a)*(s-b)*(s-c));
}
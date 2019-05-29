// finds the perimeter of a n sided polygon by its coordinates
#include <cstdio>
#include <iostream>
#include <cmath>

double dist(int x1,int y1,int x2,int y2);

int main(void)
{
	int n;
	std::cout << "Number of sides of polygon:  ";
	std::cin >> n;
	std::cout << "Please enter the coordinates of vertices, without any comma or brackets\n";

	double xcoord[n];
	double ycoord[n];

	// take input
	for(int i = 0; i < n; i++)
	{
		std::cin >> xcoord[i] >> ycoord[i];
	}

	double perimeter = 0;

	for(int i = 0; i < n; i++)
	{	
		perimeter += dist(xcoord[i], ycoord[i], xcoord[(i+1)%n], ycoord[(i+1)%n]);
	}

	printf("The perimeter of the figure is %lf\n", perimeter);
}

double dist(int x1,int y1,int x2,int y2)
{
	return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}
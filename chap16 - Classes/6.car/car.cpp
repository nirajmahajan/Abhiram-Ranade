#include <simplecpp>
#include "car.h"
// unit for movement
#define UNIT 1
#define RAD 40

// Constructors
Car::Car(){
	Rectangle R1(927, 513, 200, 100);
	Rectangle R2(867, 413, 80, 100);
	Circle C1(877, 563, RAD);
	Circle C2(977, 563, RAD);

	r1 = R1; r2 = R2;
	c1 = C1; c2 = C2;

	r1.setFill(true); r2.setFill(true);
	r1.setColor(COLOR("red")); r2.setColor(COLOR("red"));

	double x_term, y_term;

	for(int i = 0; i < 4; i++){
		y_term = RAD*(cosine(i*45));
		x_term = RAD*(sine(i*45));

		Line l1(877 + x_term, 563 - y_term, 877 - x_term, 563 + y_term);
		spoke1[i] = l1;

		Line l2(977 + x_term, 563 - y_term, 977 - x_term, 563 + y_term);
		spoke2[i] = l2;
	}

}

// forward gear
void Car::forward(const double x)
{
	int num_of_repeat = x / UNIT;

	for(int i = 0; i < num_of_repeat; i++){
		r1.forward(UNIT);
		r2.forward(UNIT);
		c1.forward(UNIT);
		c2.forward(UNIT);

		double theta = (UNIT * 180) / (RAD * PI);
		for(int i = 0; i < 4; i++){
			spoke1[i].moveTo(spoke1[i].getX() + UNIT, spoke1[i].getY());
			spoke1[i].right(theta);
			spoke2[i].moveTo(spoke2[i].getX() + UNIT, spoke2[i].getY());
			spoke2[i].right(theta);
		}
	}
}

// reverse gear
void Car::reverse(const double x){
	int num_of_repeat = x / UNIT;

	double x_curr;

	for(int i = 0; i < num_of_repeat; i++){
		x_curr += UNIT;

		r1.moveTo(r1.getX() - UNIT, r1.getY());
		r2.moveTo(r2.getX() - UNIT, r2.getY());
		c1.moveTo(c1.getX() - UNIT, c1.getY());
		c2.moveTo(c2.getX() - UNIT, c2.getY());

		double theta = (UNIT * 180) / (RAD * PI);
		for(int i = 0; i < 4; i++){
			spoke1[i].moveTo(spoke1[i].getX() - UNIT, spoke1[i].getY());
			spoke1[i].left(theta);
			spoke2[i].moveTo(spoke2[i].getX() - UNIT, spoke2[i].getY());
			spoke2[i].left(theta);
		}
	}
}



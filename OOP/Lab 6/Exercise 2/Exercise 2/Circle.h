#ifndef __CIRCLE_
#define __CIRCLE_
#include <iostream>
#include "point.h"
using namespace std;

class circle {
	point p;
	double radius;
public:
	circle(point p, double radius) {
		cout << "Center: [" << p.getX() << ", " << p.getY() << "]";
		cout << ", Radius: " << radius;
	}
	circle(double x, double y, double radius) {

	}
};
#endif // !__CIRCLE_

#include <iostream>
#include "Point.h"
#pragma once
#ifndef _circle__
#define _circle__

class Circle {
private:
	Point m_center;
	double m_radius;
public:
	Circle(): m_center(0, 0), m_radius(0) {}
	Circle(Point center, double radius) : m_center(center), m_radius(radius) {}
	Circle(double x, double y, double radius) : m_center(x,y), m_radius(radius) {}

	~Circle() { cout << "Destruction of class instance \n"; info(); }

	void info(void) {
		cout << "Center: [";
		double x, y;
		m_center.get(x, y);
		cout << x <<", " << y << " ], Radius: " << m_radius << endl;
	}
};

#endif // !_circle__

#include <iostream>
#include "Point.h"
#define M_PI 3.14159
#ifndef _circle__
#define _circle__

class Circle {
private:
	Point m_center;
	double m_radius;
public:
	Circle() : m_center(0, 0), m_radius(0) {}
	Circle(Point center, double radius) : m_center(center), m_radius(radius) {}
	Circle(double x, double y, double radius) : m_center(x, y), m_radius(radius) {}

	~Circle() { cout << "Destruction of class instance \n"; info(); }

	void info(void) {
		cout << "Center: [";
		double x, y;
		m_center.get(x, y);
		cout << x << ", " << y << " ], Radius: " << m_radius << endl;
	}
	double area(void) {	return M_PI * m_radius * m_radius;}
	Point center(void) {return m_center;}
	double radius(void) { return m_radius;}
	bool IsInside( const Point& point) {
		double x, y;
		point.get(x, y);
		double a = m_center.getx();
		double b = m_center.gety();
		double distance = sqrt(pow(x - a, 2) + pow(y - b, 2));

		return distance <= m_radius;
	}
};

#endif // !_circle__

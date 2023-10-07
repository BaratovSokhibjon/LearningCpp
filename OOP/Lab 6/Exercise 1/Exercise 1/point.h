#include <iostream>
#pragma once
#ifndef _point__
#define _point__
using namespace std;
class Point {
private:
	double m_x;
	double m_y;
public:
	Point() : m_x(0), m_y(0) {}
	Point(double x, double y) : m_x(x), m_y(y) {}
	void info(void) {
		cout << "(x,y) = " << m_x << ", " << m_y << endl;
	}
	
	double getx(void) {
		double p = m_x;
		return p;
	}

	double gety(void) {
		double p = m_y;
		return p;
	}

	void get(double& x, double& y) {
		x = getx();
		y = gety();
	}
};

#endif //_point__
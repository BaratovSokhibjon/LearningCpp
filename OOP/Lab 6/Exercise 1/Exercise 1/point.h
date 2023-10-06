#ifndef _POINT_
#define _POINT_
#include <iostream>

using namespace std;

class point {
	double m_x;
	double m_y;
public:
	point(double o_x, double o_y){
		m_x = o_x;
		m_y = o_y;
	}

	void info(void) {
		cout << "x: " << m_x << endl;
		cout << "y: " << m_y << endl;
	}

	double getX(void) { double x = m_x; return x; }
	
	double getY(void) { double y = m_y; return y; }

	double get(double& x, double& y) {
		x = point::getX();
		y = point::getY();

		return x, y;
	}	

};




#endif //_POINT_
#include <iostream>
#include "header.h"
using namespace std;

int main() {
	cout << "Area of a rectangle(Width: 20 / Length: 10): ";
	cout << shape::rec_area(20, 10) << endl;

	cout << "Area of a triangle(Base: 20 / Height: 10): ";
	cout << shape::tri_area(20, 10) << endl;

	cout << "Area of a Circle(Radius: 20): ";
	cout << shape::cir_area(20) << endl;

	return 0;
}
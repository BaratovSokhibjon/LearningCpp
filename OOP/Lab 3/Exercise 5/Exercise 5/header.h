#pragma once
# define M_PI  3.14159265358979323846  /* pi */
using namespace std;
namespace shape {
	int rec_area(int width, int length) {
		return width * length;
	}

	int tri_area(int base, int height) {
		return 0.5 * base * height;
	}

	double cir_area(int radius) {
		double area = M_PI * (radius * radius);
		return area;
	}
}
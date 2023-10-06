#include "point.h"
#include "iostream"

using namespace std;

int main(void) {
    double x, y;
    point p{ 10.5, 20.99 };
    p.info();
    p.get(x, y);
    cout << x << "," << y << endl;
    return 0;
}

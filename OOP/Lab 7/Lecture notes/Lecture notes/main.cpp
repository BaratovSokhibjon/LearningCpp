#include <iostream>

using namespace std;

class Calc {
private:
	double m_value;
public:

	Calc() { m_value = 0; }
	Calc& add(double value) {
		m_value += value; 
		return *this;
	}

	Calc& sub(double value) {
		m_value -= value;
		return *this;
	}
	double getValue() {
		return m_value;
	}
};

int main() {
	Calc cal;
	cal.add(5.0).sub(3.0);
	cout << cal.getValue() << endl;
}
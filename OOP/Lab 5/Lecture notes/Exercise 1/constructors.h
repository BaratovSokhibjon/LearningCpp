#include <iostream>
#include <cassert>
using namespace std;

//default constructor

class Fraction {
private:
	int m_numerator;
	int m_detominator;
public:
	Fraction() { // default constructor
		m_numerator = 0;
		m_detominator = 1;
	}

	Fraction(int numerator, int detominator = 1) {
		assert(detominator != 0);
		cout << "constructor with two parametors" << endl;
		m_numerator = numerator;
		m_detominator = detominator;
	}

	int getNumerator() const { return m_numerator; }
	int getDetominator() const { return m_detominator; }
	double getValue() const { return double(m_numerator) / double(m_detominator); }
};
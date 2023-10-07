#include <iostream>
#include "constructors.h"
using namespace std;

void printFraction(const Fraction& arg);

int main() {
	Fraction fracDefault;

	Fraction frac1 = { 3, 4 };
	Fraction frac2{ 5, 3 };
	Fraction frac3(5, 10);

	printFraction(fracDefault);
	printFraction(frac1);
	printFraction(frac2);
	printFraction(frac3);
	
	return 0;
}

void printFraction(const Fraction& arg) {
	cout << arg.getNumerator() << "/" << arg.getDetominator();
	cout << " = " << arg.getValue() << endl;
}
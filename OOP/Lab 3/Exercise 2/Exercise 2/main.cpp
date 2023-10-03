#include <iostream>

using namespace std;

void display(char a);
void display(int a);
void display(double a);

int main() {
	display('A');
	display(1234);
	display(123.4);
}


void display(char a) {
	cout << "char type: " << a << endl;
}
void display(int a) {
	cout << "int type: " << a << endl;
}
void display(double a) {
	cout << "double type: " << a << endl;
}
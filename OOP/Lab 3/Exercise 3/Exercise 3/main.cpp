#include <iostream>

using namespace std;

void cout_int(int, int = 10);

int main() {
	cout_int(100);
	cout_int(100, 8);
	cout_int(100, 10);
	cout_int(100, 16);
	cout_int(100, 20);

	return 0;
}

void cout_int(int number, int format) {
	switch (format)
	{
	case 8:
		cout << oct << number << endl;
		break;
	case 10:
		cout << dec << number << endl;
		break;
	case 16:
		cout << hex << number << endl;
		break;
	default:
		cout << "ERROR: unknown base" << endl;
		break;
	}
}
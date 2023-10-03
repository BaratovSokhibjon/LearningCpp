#include <iostream>

using namespace std;

int getMax(int*, int);
int getMin(int*, int);
double getAvg(int*, int);

int main() {
	cout << "Enter the number of data: ";
	int range;
	cin >> range;
	int* buff = new int[range];

	for (int i = 0; i < range; i++) {
		cout << i + 1<< ". Input an Integer: ";
		cin >> *(buff + i);
	}
	cout << endl;
	cout << "Maximum value is: " << getMax(buff, range) << endl;
	cout << "Minimum value is: " << getMin(buff, range) << endl;
	cout << "Average value is: " << getAvg(buff, range) << endl;
}

int getMax(int* buff, int range) {
	int max = 0;
	for (int i = 0; i < range; i++) {
		if (buff[i] > max) {
			max = buff[i];
		}
	}

	return max;
}

int getMin(int* buff, int range) {
	int min = 0;
	for (int i = 0; i < range; i++) {
		if (buff[i] < min) {
			min = buff[i];
		}
	}

	return min;
}

double getAvg(int* buff, int range) {
	double avg = 0;
	for (int i = 0; i < range; i++) {
		avg = avg + buff[i];
	}
	avg = avg / range;

	return avg;
}
#include <iostream>

using namespace std;

void MatInput(int*, int, int);
void MatAdd(int*, int*, int*, int, int);
void MatDisplay(int*, int, int);
int main() {
	int row, col;
	int* mat1, * mat2, * matAdd;
	cout << "Enter size of matrix(row, col): ";
	cin >> row >> col;
	// 1. allocate the memory buffers for the 3 matrices
	// 2. use the buffers
	cout << "Enter elements in 1st matrix of size " << row << 'x' << col << ":\n";
	MatInput(mat1, row, col);
	cout << "Enter elements in 2nd matrix of size " << row << 'x' << col << ":\n";
	MatInput(mat2, row, col);
	MatAdd(mat1, mat2, matAdd, row, col);
	cout << "Sum of two matrices: \n";
	MatDisplay(matAdd, row, col);
	// 3. free the allocated buffers
	return 0;
}

void MatInput(int*, int, int) {

}
void MatAdd(int*, int*, int*, int, int) {

}
void MatDisplay(int*, int, int) {

}

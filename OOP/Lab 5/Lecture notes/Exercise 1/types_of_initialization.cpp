//different types of initialization
// 
// Copy initialization
//int width = 5;
// 
// Direct initialization
// int width(5);
//
// Brace initialization
// int width {5};
// int width = {5};
// 
// Zero initialization
// int width{};			(int = 0) 
#include <iostream>
using namespace std;

int main() {
	int i1 = 1;		// copy initialization
	int i2(2);		//direct initialization
	int i3{ 3 };	// brace or uniform initialization
	int i4 = { 4 }; // copy brace initialization
	int i0{};		// zero initialization
}
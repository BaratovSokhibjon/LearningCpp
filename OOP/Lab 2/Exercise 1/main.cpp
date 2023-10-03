#include <iostream>

using namespace std;

void inputArray(int*, int);
int searchIndex(int*, int, int);

int main() {
    int size, element, index;
    int* buf = nullptr;

    cout << "Enter size of array: ";
    cin >> size;

    // 1. allocate the memory buffer
    buf = new int[size];
    // 2. use the allocated memory  
    cout << "Enter elements of the array: ";
    inputArray(buf, size);

    cout << "Enter element to search: ";
    cin >> element;

    index = searchIndex(buf, size, element);

    if (index == -1)
        cout << element << " does not exist in the array.";
    else
        cout << element << " is found in index " << index << '.';

    // 3. free the allocated memory  
    delete[] buf;
    return 0;
}

void inputArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}
int searchIndex(int* arr, int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}
#include <iostream>

using namespace std;

#define ASCENDING (0)
#define DESCENDING (1)
const int SIZE = 10;

void mySort(double arr[], )

int main() {
    double data[SIZE] = { 0 };
    double sorted[SIZE] = { 0 };
    int  i;
    for (i = 0; i < SIZE; ++i) {
        cout << "Enter a real number: ";
        cin >> data[i];
    }
    cout << "== Input numbers ==" << endl;
    print_array(data, SIZE);
    cout << "== Ascending order ==" << endl;
    mySort(data, sorted, SIZE);
    print_array(sorted, SIZE);
    cout << "== Descending order ==" << endl;
    mySort(data, sorted, SIZE, DESCENDING);
    print_array(sorted, SIZE);
    return 0;
}

void selection_sort(int list[], int n) {
    int i, j, temp, least;

    // Repeat n-1 times 
    // because the last number is automatically sorted
    for (i = 0; i < n - 1; i++) {
        least = i;
        // search minimum value
        for (j = i + 1; j < n; j++)
            if (list[j] < list[least])
                least = j;
        // swap the min value and list[i]
        if (least != i) {
            temp = list[i];
            list[i] = list[least];
            list[least] = temp;
        }
    }
}

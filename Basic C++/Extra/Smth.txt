#include <iostream>
using namespace std;

int main(){

    int sui = 4;
    int iarr[sui];
    for(int j = 0; j < sui; j++){
        cout << "Input the values for iarr:";
        cin >> iarr[j]; // Initialised automatically
    }

    cout << "Array values:";
    for(int j = 0; j < sui; j++){
        cout << iarr[j]; // printing out the values
    }

    //If values provided manually, no need to state the length of the array
    int iarra[] = {1,2,3,4,5,6};

    int array[5] = {1,2,}; // (1,2,0,0,0)

    return 0;
}
